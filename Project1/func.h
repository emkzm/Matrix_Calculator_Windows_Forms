#pragma once
#include <iostream>
#include <vector>
using std::vector;
using std::swap;

using namespace std;

template <typename T> vector<vector<T>> task(vector<vector<T>> table)
{
    for (int clmn = 0; clmn < table.size(); clmn++)
    {
        if (clmn % 2 == 0 && clmn + 1 != table.size())
            for (int row = 0; row < table[clmn].size(); row++)
            {
                swap(table[row][clmn], table[row][clmn + 1]);
            }
    }
    return table;
}