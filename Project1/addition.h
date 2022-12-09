#pragma once
#include <vector>
#include <iostream>
using std::cout;
using std::endl;
#define mtx_type double
typedef std::vector<std::vector<mtx_type>> mtx;
typedef std::vector<mtx_type> vec;

bool matrix_sum_matrix(mtx m1, mtx m2, mtx& destination)
{
	if (m1.size() == 0 || m2.size() == 0) return false;
	if (m1.size() != m2.size()) return false;
	if (m1[0].size() != m2[0].size()) return false;

	destination.resize(m1.size());
	for (int i = 0; i < m1.size(); i++)
	{
		destination[i].resize(m1[i].size());
		for (int j = 0; j < m1[i].size(); j++)
		{
			destination[i][j] = m1[i][j] + m2[i][j];
		}
	}
	return true;
}

bool matrix_sub_matrix(mtx m1, mtx m2, mtx& destination)
{
	if (m1.size() == 0 || m2.size() == 0) return false;
	if (m1.size() != m2.size()) return false;
	if (m1[0].size() != m2[0].size()) return false;
	destination.resize(m1.size());
	for (int i = 0; i < m1.size(); i++)
	{
		destination[i].resize(m1[i].size());
		for (int j = 0; j < m1[i].size(); j++)
		{
			destination[i][j] = m1[i][j] - m2[i][j];
		}
	}
	return true;
}
bool matrix_mul_matrix(mtx m1, mtx m2, mtx& destination)
{
	if (m1.size() == 0 || m2.size() == 0) return false;
	if (m1[0].size() != m2.size()) return false;
	destination.resize(m1.size());
	for (int i = 0; i < m1.size(); i++)
	{
		destination[i].resize(m2[0].size());
		for (int j = 0; j < m2[0].size(); j++)
		{
			mtx_type sum = 0;
			for (int k = 0; k < m1[0].size(); k++)
			{
				sum += m1[i][k] * m2[k][j];
			}
			destination[i][j] = sum;
		}
	}
	return true;
}

bool matrix_mul_vector(mtx m, vec v, vec& destination)
{
	if (m.size() == 0 || v.size() == 0) return false;
	if (m[0].size() != v.size()) return false;
	destination.resize(m.size());
	for (int i = 0; i < m.size(); i++)
	{
		mtx_type sum = 0;
		for (int j = 0; j < m[0].size(); j++)
		{
			sum += m[i][j] * v[j];
		}
		destination[i] = sum;
	}
	return true;
}


bool matrix_mul_n(mtx source, mtx_type n, mtx& destination)
{
	if (source.size() == 0) return false;
	destination.resize(source.size());
	for (int i = 0; i < source.size(); i++)
	{
		destination[i].resize(source[i].size());
		for (int j = 0; j < source[i].size(); j++)
		{
			destination[i][j] = source[i][j] * n;
		}
	}
	return true;
}

bool matrix_transpose(mtx source, mtx& destination)
{
	if (source.size() == 0) return false;
	destination.resize(source[0].size());
	for (int i = 0; i < source[0].size(); i++)
	{
		destination[i].resize(source.size());
		for (int j = 0; j < source.size(); j++)
		{
			destination[i][j] = source[j][i];
		}
	}
	return true;
}

int matrix_rank(mtx A)
{
	if (A.size() == 0) return 0;
	const double EPS = 1E-9;
	int n = A.size();
	int m = A[0].size();

	int rank = 0;
	std::vector<bool> row_selected(n, false);
	for (int i = 0; i < m; i++)
	{
		int j;
		for (j = 0; j < n; j++)
		{
			if (!row_selected[j] && abs(A[j][i]) > EPS)
			{
				break;
			}
		}

		if (j != n)
		{
			rank++;
			row_selected[j] = true;
			for (int p = i + 1; p < m; ++p)
			{
				A[j][p] /= A[j][i];
			}
			for (int k = 0; k < n; k++)
			{
				if (k != j && abs(A[k][i]) > EPS)
				{
					for (int p = i + 1; p < m; p++)
					{
						A[k][p] -= A[j][p] * A[k][i];
					}
				}
			}
		}
	}
	return rank;
}

bool vector_sum_vector(vec v1, vec v2, vec& destination)
{
	if (v1.size() == 0 || v2.size() == 0) return false;
	if (v1.size() != v2.size()) return false;

	destination.resize(v1.size());
	for (int i = 0; i < v1.size(); i++)
	{
		destination[i] = v1[i] + v2[i];
	}
	return true;
}

bool vector_sub_vector(vec v1, vec v2, vec& destination)
{
	if (v1.size() == 0 || v2.size() == 0) return false;
	if (v1.size() != v2.size()) return false;
	destination.resize(v1.size());
	for (int i = 0; i < v1.size(); i++)
	{
		destination[i] = v1[i] - v2[i];
	}
	return true;
}
// скалярное произведение векторов
mtx_type vector_dot_vector(vec v1, vec v2)
{
	if (v1.size() == 0 || v2.size() == 0) return 0;
	if (v1.size() != v2.size()) return 0;
	mtx_type sum = 0;
	for (int i = 0; i < v1.size(); i++)
	{
		sum += v1[i] * v2[i];
	}
	return sum;
}
// векторное произведение векторов
bool vector_cross_vector(vec v1, vec v2, vec& destination)
{
	if (v1.size() == 0 || v2.size() == 0) return false;
	if (v1.size() != v2.size() && v1.size() != 3) return false; // i dont know how to calculate cross product for vectors that size is bigger then 3 
	destination.resize(v1.size());
	destination[0] = v1[1] * v2[2] - v1[2] * v2[1];
	destination[1] = v1[0] * v2[2] - v1[2] * v2[0];
	destination[2] = v1[0] * v2[1] - v1[1] * v2[0];
	return true;
}