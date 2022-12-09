#pragma once
#include "addition.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ gridMatrix;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::DataGridView^ gridVector;


	private: System::Windows::Forms::Button^ add_row_btn;
	private: System::Windows::Forms::Button^ rem_row_btn;
	private: System::Windows::Forms::Button^ add_col_btn;
	private: System::Windows::Forms::Button^ rem_col_btn;
	private: System::Windows::Forms::Button^ rem_cell_btn;
	private: System::Windows::Forms::Button^ add_cell_btn;


	private: System::Windows::Forms::TextBox^ numberN;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VECTOR;
	private: System::Windows::Forms::DataGridView^ gridMatrix2;

	private: System::Windows::Forms::Button^ add_row_btn2;
	private: System::Windows::Forms::Button^ rem_row_btn2;
	private: System::Windows::Forms::Button^ add_col_btn2;
	private: System::Windows::Forms::Button^ rem_col_btn2;
	private: System::Windows::Forms::ErrorProvider^ errorProvider;

	private: System::Windows::Forms::DataGridView^ gridResultVector;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::Button^ rem_cell_btn2;
	private: System::Windows::Forms::Button^ add_cell_btn2;



	private: System::Windows::Forms::DataGridView^ gridVector2;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::Button^ mtx_vec_mul_btn;
	private: System::Windows::Forms::Button^ matrix_mul_btn;
	private: System::Windows::Forms::Button^ matrix_sub_btn;
	private: System::Windows::Forms::Button^ matrix_sum_btn;

	private: System::Windows::Forms::DataGridView^ gridResultMatrix;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::Button^ mtx_N_mul_btn;
	private: System::Windows::Forms::Button^ vec1_vec2_sub_btn;

	private: System::Windows::Forms::Button^ vec1_vec2_sum_btn;
	private: System::Windows::Forms::Button^ vec1_vec2_scal_mul_btn;
	private: System::Windows::Forms::Button^ to_find_rank_btn;

	private: System::Windows::Forms::Button^ to_transpose_btn;
	private: System::Windows::Forms::Button^ vec1_vec2_vec_mul_btn;
	private: System::Windows::Forms::Button^ clr_all;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;


	private: System::ComponentModel::IContainer^ components;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->gridMatrix = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gridVector = (gcnew System::Windows::Forms::DataGridView());
			this->VECTOR = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->add_row_btn = (gcnew System::Windows::Forms::Button());
			this->rem_row_btn = (gcnew System::Windows::Forms::Button());
			this->add_col_btn = (gcnew System::Windows::Forms::Button());
			this->rem_col_btn = (gcnew System::Windows::Forms::Button());
			this->rem_cell_btn = (gcnew System::Windows::Forms::Button());
			this->add_cell_btn = (gcnew System::Windows::Forms::Button());
			this->numberN = (gcnew System::Windows::Forms::TextBox());
			this->gridMatrix2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->add_row_btn2 = (gcnew System::Windows::Forms::Button());
			this->rem_row_btn2 = (gcnew System::Windows::Forms::Button());
			this->add_col_btn2 = (gcnew System::Windows::Forms::Button());
			this->rem_col_btn2 = (gcnew System::Windows::Forms::Button());
			this->errorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->gridResultMatrix = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->matrix_sum_btn = (gcnew System::Windows::Forms::Button());
			this->matrix_sub_btn = (gcnew System::Windows::Forms::Button());
			this->matrix_mul_btn = (gcnew System::Windows::Forms::Button());
			this->mtx_vec_mul_btn = (gcnew System::Windows::Forms::Button());
			this->gridVector2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->add_cell_btn2 = (gcnew System::Windows::Forms::Button());
			this->rem_cell_btn2 = (gcnew System::Windows::Forms::Button());
			this->gridResultVector = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mtx_N_mul_btn = (gcnew System::Windows::Forms::Button());
			this->vec1_vec2_sum_btn = (gcnew System::Windows::Forms::Button());
			this->vec1_vec2_sub_btn = (gcnew System::Windows::Forms::Button());
			this->vec1_vec2_scal_mul_btn = (gcnew System::Windows::Forms::Button());
			this->vec1_vec2_vec_mul_btn = (gcnew System::Windows::Forms::Button());
			this->to_transpose_btn = (gcnew System::Windows::Forms::Button());
			this->to_find_rank_btn = (gcnew System::Windows::Forms::Button());
			this->clr_all = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridMatrix))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridVector))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridMatrix2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridResultMatrix))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridVector2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridResultVector))->BeginInit();
			this->SuspendLayout();
			// 
			// gridMatrix
			// 
			this->gridMatrix->AllowUserToAddRows = false;
			this->gridMatrix->ColumnHeadersVisible = false;
			this->gridMatrix->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->gridMatrix->Location = System::Drawing::Point(80, 0);
			this->gridMatrix->Name = L"gridMatrix";
			this->gridMatrix->RowHeadersVisible = false;
			this->gridMatrix->ShowEditingIcon = false;
			this->gridMatrix->Size = System::Drawing::Size(240, 158);
			this->gridMatrix->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			// 
			// gridVector
			// 
			this->gridVector->AllowUserToAddRows = false;
			this->gridVector->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gridVector->ColumnHeadersVisible = false;
			this->gridVector->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->VECTOR });
			this->gridVector->Location = System::Drawing::Point(80, 164);
			this->gridVector->Name = L"gridVector";
			this->gridVector->RowHeadersVisible = false;
			this->gridVector->Size = System::Drawing::Size(240, 65);
			this->gridVector->TabIndex = 1;
			// 
			// VECTOR
			// 
			this->VECTOR->HeaderText = L"VECTOR 1";
			this->VECTOR->Name = L"VECTOR";
			// 
			// add_row_btn
			// 
			this->add_row_btn->Location = System::Drawing::Point(0, 0);
			this->add_row_btn->Name = L"add_row_btn";
			this->add_row_btn->Size = System::Drawing::Size(75, 35);
			this->add_row_btn->TabIndex = 2;
			this->add_row_btn->Text = L"add row";
			this->add_row_btn->UseVisualStyleBackColor = true;
			this->add_row_btn->Click += gcnew System::EventHandler(this, &MyForm::add_row_btn_Click);
			// 
			// rem_row_btn
			// 
			this->rem_row_btn->Location = System::Drawing::Point(0, 41);
			this->rem_row_btn->Name = L"rem_row_btn";
			this->rem_row_btn->Size = System::Drawing::Size(75, 35);
			this->rem_row_btn->TabIndex = 3;
			this->rem_row_btn->Text = L"rem row";
			this->rem_row_btn->UseVisualStyleBackColor = true;
			this->rem_row_btn->Click += gcnew System::EventHandler(this, &MyForm::rem_row_btn_Click);
			// 
			// add_col_btn
			// 
			this->add_col_btn->Location = System::Drawing::Point(-1, 82);
			this->add_col_btn->Name = L"add_col_btn";
			this->add_col_btn->Size = System::Drawing::Size(75, 35);
			this->add_col_btn->TabIndex = 4;
			this->add_col_btn->Text = L"add col";
			this->add_col_btn->UseVisualStyleBackColor = true;
			this->add_col_btn->Click += gcnew System::EventHandler(this, &MyForm::add_col_btn_Click);
			// 
			// rem_col_btn
			// 
			this->rem_col_btn->Location = System::Drawing::Point(0, 123);
			this->rem_col_btn->Name = L"rem_col_btn";
			this->rem_col_btn->Size = System::Drawing::Size(75, 35);
			this->rem_col_btn->TabIndex = 5;
			this->rem_col_btn->Text = L"rem col";
			this->rem_col_btn->UseVisualStyleBackColor = true;
			this->rem_col_btn->Click += gcnew System::EventHandler(this, &MyForm::rem_col_btn_Click);
			// 
			// rem_cell_btn
			// 
			this->rem_cell_btn->Location = System::Drawing::Point(0, 164);
			this->rem_cell_btn->Name = L"rem_cell_btn";
			this->rem_cell_btn->Size = System::Drawing::Size(75, 65);
			this->rem_cell_btn->TabIndex = 6;
			this->rem_cell_btn->Text = L"rem cell";
			this->rem_cell_btn->UseVisualStyleBackColor = true;
			this->rem_cell_btn->Click += gcnew System::EventHandler(this, &MyForm::rem_cell_btn_Click);
			// 
			// add_cell_btn
			// 
			this->add_cell_btn->Location = System::Drawing::Point(326, 164);
			this->add_cell_btn->Name = L"add_cell_btn";
			this->add_cell_btn->Size = System::Drawing::Size(75, 65);
			this->add_cell_btn->TabIndex = 7;
			this->add_cell_btn->Text = L"add cell";
			this->add_cell_btn->UseVisualStyleBackColor = true;
			this->add_cell_btn->Click += gcnew System::EventHandler(this, &MyForm::add_cell_btn_Click);
			// 
			// numberN
			// 
			this->numberN->Location = System::Drawing::Point(0, 235);
			this->numberN->Name = L"numberN";
			this->numberN->Size = System::Drawing::Size(806, 20);
			this->numberN->TabIndex = 9;
			// 
			// gridMatrix2
			// 
			this->gridMatrix2->AllowUserToAddRows = false;
			this->gridMatrix2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gridMatrix2->ColumnHeadersVisible = false;
			this->gridMatrix2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column2 });
			this->gridMatrix2->Location = System::Drawing::Point(485, 0);
			this->gridMatrix2->Name = L"gridMatrix2";
			this->gridMatrix2->RowHeadersVisible = false;
			this->gridMatrix2->Size = System::Drawing::Size(240, 158);
			this->gridMatrix2->TabIndex = 10;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->Name = L"Column2";
			// 
			// add_row_btn2
			// 
			this->add_row_btn2->Location = System::Drawing::Point(731, 0);
			this->add_row_btn2->Name = L"add_row_btn2";
			this->add_row_btn2->Size = System::Drawing::Size(75, 35);
			this->add_row_btn2->TabIndex = 11;
			this->add_row_btn2->Text = L"add row";
			this->add_row_btn2->UseVisualStyleBackColor = true;
			this->add_row_btn2->Click += gcnew System::EventHandler(this, &MyForm::add_row_btn2_Click);
			// 
			// rem_row_btn2
			// 
			this->rem_row_btn2->Location = System::Drawing::Point(731, 41);
			this->rem_row_btn2->Name = L"rem_row_btn2";
			this->rem_row_btn2->Size = System::Drawing::Size(75, 35);
			this->rem_row_btn2->TabIndex = 12;
			this->rem_row_btn2->Text = L"rem row";
			this->rem_row_btn2->UseVisualStyleBackColor = true;
			this->rem_row_btn2->Click += gcnew System::EventHandler(this, &MyForm::rem_row_btn2_Click);
			// 
			// add_col_btn2
			// 
			this->add_col_btn2->Location = System::Drawing::Point(731, 82);
			this->add_col_btn2->Name = L"add_col_btn2";
			this->add_col_btn2->Size = System::Drawing::Size(75, 35);
			this->add_col_btn2->TabIndex = 13;
			this->add_col_btn2->Text = L"add col";
			this->add_col_btn2->UseVisualStyleBackColor = true;
			this->add_col_btn2->Click += gcnew System::EventHandler(this, &MyForm::add_col_btn2_Click);
			// 
			// rem_col_btn2
			// 
			this->rem_col_btn2->Location = System::Drawing::Point(731, 123);
			this->rem_col_btn2->Name = L"rem_col_btn2";
			this->rem_col_btn2->Size = System::Drawing::Size(75, 35);
			this->rem_col_btn2->TabIndex = 14;
			this->rem_col_btn2->Text = L"rem col";
			this->rem_col_btn2->UseVisualStyleBackColor = true;
			this->rem_col_btn2->Click += gcnew System::EventHandler(this, &MyForm::rem_col_btn2_Click);
			// 
			// errorProvider
			// 
			this->errorProvider->ContainerControl = this;
			// 
			// gridResultMatrix
			// 
			this->gridResultMatrix->AllowUserToAddRows = false;
			this->gridResultMatrix->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gridResultMatrix->ColumnHeadersVisible = false;
			this->gridResultMatrix->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn2 });
			this->gridResultMatrix->Location = System::Drawing::Point(0, 302);
			this->gridResultMatrix->Name = L"gridResultMatrix";
			this->gridResultMatrix->ReadOnly = true;
			this->gridResultMatrix->RowHeadersVisible = false;
			this->gridResultMatrix->Size = System::Drawing::Size(412, 186);
			this->gridResultMatrix->TabIndex = 15;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"RESULT MATRIX";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// matrix_sum_btn
			// 
			this->matrix_sum_btn->Location = System::Drawing::Point(326, 0);
			this->matrix_sum_btn->Name = L"matrix_sum_btn";
			this->matrix_sum_btn->Size = System::Drawing::Size(153, 48);
			this->matrix_sum_btn->TabIndex = 16;
			this->matrix_sum_btn->Text = L"SUM M1, M2";
			this->matrix_sum_btn->UseVisualStyleBackColor = true;
			this->matrix_sum_btn->Click += gcnew System::EventHandler(this, &MyForm::matrix_sum_btn_Click);
			// 
			// matrix_sub_btn
			// 
			this->matrix_sub_btn->Location = System::Drawing::Point(326, 54);
			this->matrix_sub_btn->Name = L"matrix_sub_btn";
			this->matrix_sub_btn->Size = System::Drawing::Size(153, 44);
			this->matrix_sub_btn->TabIndex = 17;
			this->matrix_sub_btn->Text = L"SUB M1, M2";
			this->matrix_sub_btn->UseVisualStyleBackColor = true;
			this->matrix_sub_btn->Click += gcnew System::EventHandler(this, &MyForm::matrix_sub_btn_Click);
			// 
			// matrix_mul_btn
			// 
			this->matrix_mul_btn->Location = System::Drawing::Point(326, 104);
			this->matrix_mul_btn->Name = L"matrix_mul_btn";
			this->matrix_mul_btn->Size = System::Drawing::Size(153, 54);
			this->matrix_mul_btn->TabIndex = 18;
			this->matrix_mul_btn->Text = L"MUL M1, M2";
			this->matrix_mul_btn->UseVisualStyleBackColor = true;
			this->matrix_mul_btn->Click += gcnew System::EventHandler(this, &MyForm::matrix_mul_btn_Click);
			// 
			// mtx_vec_mul_btn
			// 
			this->mtx_vec_mul_btn->Location = System::Drawing::Point(-1, 261);
			this->mtx_vec_mul_btn->Name = L"mtx_vec_mul_btn";
			this->mtx_vec_mul_btn->Size = System::Drawing::Size(200, 35);
			this->mtx_vec_mul_btn->TabIndex = 19;
			this->mtx_vec_mul_btn->Text = L"MUL M1, V1";
			this->mtx_vec_mul_btn->UseVisualStyleBackColor = true;
			// 
			// gridVector2
			// 
			this->gridVector2->AllowUserToAddRows = false;
			this->gridVector2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gridVector2->ColumnHeadersVisible = false;
			this->gridVector2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn3 });
			this->gridVector2->Location = System::Drawing::Point(485, 164);
			this->gridVector2->Name = L"gridVector2";
			this->gridVector2->RowHeadersVisible = false;
			this->gridVector2->Size = System::Drawing::Size(240, 65);
			this->gridVector2->TabIndex = 20;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"VECTOR 2";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// add_cell_btn2
			// 
			this->add_cell_btn2->Location = System::Drawing::Point(731, 164);
			this->add_cell_btn2->Name = L"add_cell_btn2";
			this->add_cell_btn2->Size = System::Drawing::Size(75, 65);
			this->add_cell_btn2->TabIndex = 21;
			this->add_cell_btn2->Text = L"add cell";
			this->add_cell_btn2->UseVisualStyleBackColor = true;
			this->add_cell_btn2->Click += gcnew System::EventHandler(this, &MyForm::add_cell_btn2_Click);
			// 
			// rem_cell_btn2
			// 
			this->rem_cell_btn2->Location = System::Drawing::Point(407, 164);
			this->rem_cell_btn2->Name = L"rem_cell_btn2";
			this->rem_cell_btn2->Size = System::Drawing::Size(72, 65);
			this->rem_cell_btn2->TabIndex = 22;
			this->rem_cell_btn2->Text = L"rem cell";
			this->rem_cell_btn2->UseVisualStyleBackColor = true;
			this->rem_cell_btn2->Click += gcnew System::EventHandler(this, &MyForm::rem_cell_btn2_Click);
			// 
			// gridResultVector
			// 
			this->gridResultVector->AllowUserToAddRows = false;
			this->gridResultVector->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gridResultVector->ColumnHeadersVisible = false;
			this->gridResultVector->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn4 });
			this->gridResultVector->Location = System::Drawing::Point(418, 423);
			this->gridResultVector->Name = L"gridResultVector";
			this->gridResultVector->ReadOnly = true;
			this->gridResultVector->RowHeadersVisible = false;
			this->gridResultVector->Size = System::Drawing::Size(388, 65);
			this->gridResultVector->TabIndex = 23;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"RESULT VECTOR";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// mtx_N_mul_btn
			// 
			this->mtx_N_mul_btn->Location = System::Drawing::Point(205, 261);
			this->mtx_N_mul_btn->Name = L"mtx_N_mul_btn";
			this->mtx_N_mul_btn->Size = System::Drawing::Size(207, 35);
			this->mtx_N_mul_btn->TabIndex = 24;
			this->mtx_N_mul_btn->Text = L"MUL M1, N";
			this->mtx_N_mul_btn->UseVisualStyleBackColor = true;
			// 
			// vec1_vec2_sum_btn
			// 
			this->vec1_vec2_sum_btn->Location = System::Drawing::Point(418, 302);
			this->vec1_vec2_sum_btn->Name = L"vec1_vec2_sum_btn";
			this->vec1_vec2_sum_btn->Size = System::Drawing::Size(204, 55);
			this->vec1_vec2_sum_btn->TabIndex = 25;
			this->vec1_vec2_sum_btn->Text = L"SUM V1, V2";
			this->vec1_vec2_sum_btn->UseVisualStyleBackColor = true;
			// 
			// vec1_vec2_sub_btn
			// 
			this->vec1_vec2_sub_btn->Location = System::Drawing::Point(628, 302);
			this->vec1_vec2_sub_btn->Name = L"vec1_vec2_sub_btn";
			this->vec1_vec2_sub_btn->Size = System::Drawing::Size(178, 55);
			this->vec1_vec2_sub_btn->TabIndex = 26;
			this->vec1_vec2_sub_btn->Text = L"SUB V1, V2";
			this->vec1_vec2_sub_btn->UseVisualStyleBackColor = true;
			// 
			// vec1_vec2_scal_mul_btn
			// 
			this->vec1_vec2_scal_mul_btn->Location = System::Drawing::Point(418, 363);
			this->vec1_vec2_scal_mul_btn->Name = L"vec1_vec2_scal_mul_btn";
			this->vec1_vec2_scal_mul_btn->Size = System::Drawing::Size(204, 54);
			this->vec1_vec2_scal_mul_btn->TabIndex = 27;
			this->vec1_vec2_scal_mul_btn->Text = L"SCALM V1, V2";
			this->vec1_vec2_scal_mul_btn->UseVisualStyleBackColor = true;
			// 
			// vec1_vec2_vec_mul_btn
			// 
			this->vec1_vec2_vec_mul_btn->Location = System::Drawing::Point(628, 363);
			this->vec1_vec2_vec_mul_btn->Name = L"vec1_vec2_vec_mul_btn";
			this->vec1_vec2_vec_mul_btn->Size = System::Drawing::Size(178, 54);
			this->vec1_vec2_vec_mul_btn->TabIndex = 28;
			this->vec1_vec2_vec_mul_btn->Text = L"VECM V1, V2";
			this->vec1_vec2_vec_mul_btn->UseVisualStyleBackColor = true;
			// 
			// to_transpose_btn
			// 
			this->to_transpose_btn->Location = System::Drawing::Point(418, 261);
			this->to_transpose_btn->Name = L"to_transpose_btn";
			this->to_transpose_btn->Size = System::Drawing::Size(204, 35);
			this->to_transpose_btn->TabIndex = 29;
			this->to_transpose_btn->Text = L"TRANSP M1";
			this->to_transpose_btn->UseVisualStyleBackColor = true;
			// 
			// to_find_rank_btn
			// 
			this->to_find_rank_btn->Location = System::Drawing::Point(628, 261);
			this->to_find_rank_btn->Name = L"to_find_rank_btn";
			this->to_find_rank_btn->Size = System::Drawing::Size(178, 35);
			this->to_find_rank_btn->TabIndex = 30;
			this->to_find_rank_btn->Text = L"RANK M1";
			this->to_find_rank_btn->UseVisualStyleBackColor = true;
			// 
			// clr_all
			// 
			this->clr_all->Location = System::Drawing::Point(12, 494);
			this->clr_all->Name = L"clr_all";
			this->clr_all->Size = System::Drawing::Size(794, 41);
			this->clr_all->TabIndex = 31;
			this->clr_all->Text = L"CLEAR ALL";
			this->clr_all->UseVisualStyleBackColor = true;
			this->clr_all->Click += gcnew System::EventHandler(this, &MyForm::clr_all_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(809, 537);
			this->Controls->Add(this->clr_all);
			this->Controls->Add(this->to_find_rank_btn);
			this->Controls->Add(this->to_transpose_btn);
			this->Controls->Add(this->vec1_vec2_vec_mul_btn);
			this->Controls->Add(this->vec1_vec2_scal_mul_btn);
			this->Controls->Add(this->vec1_vec2_sub_btn);
			this->Controls->Add(this->vec1_vec2_sum_btn);
			this->Controls->Add(this->mtx_N_mul_btn);
			this->Controls->Add(this->gridResultVector);
			this->Controls->Add(this->rem_cell_btn2);
			this->Controls->Add(this->add_cell_btn2);
			this->Controls->Add(this->gridVector2);
			this->Controls->Add(this->mtx_vec_mul_btn);
			this->Controls->Add(this->matrix_mul_btn);
			this->Controls->Add(this->matrix_sub_btn);
			this->Controls->Add(this->matrix_sum_btn);
			this->Controls->Add(this->gridResultMatrix);
			this->Controls->Add(this->rem_col_btn2);
			this->Controls->Add(this->add_col_btn2);
			this->Controls->Add(this->rem_row_btn2);
			this->Controls->Add(this->add_row_btn2);
			this->Controls->Add(this->gridMatrix2);
			this->Controls->Add(this->numberN);
			this->Controls->Add(this->add_cell_btn);
			this->Controls->Add(this->rem_cell_btn);
			this->Controls->Add(this->rem_col_btn);
			this->Controls->Add(this->add_col_btn);
			this->Controls->Add(this->rem_row_btn);
			this->Controls->Add(this->add_row_btn);
			this->Controls->Add(this->gridVector);
			this->Controls->Add(this->gridMatrix);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridMatrix))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridVector))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridMatrix2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridResultMatrix))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridVector2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridResultVector))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////																					//////////////////////////////////////////////
////////////////////////////		*****	*	  *		* *														//////////////////////////////////////////////
////////////////////////////		*		* *	  *		*  *													//////////////////////////////////////////////
////////////////////////////		*****	*  *  *		*  *													//////////////////////////////////////////////
////////////////////////////		*		*   * *		*  *													//////////////////////////////////////////////
////////////////////////////		*****	*	 **		**														//////////////////////////////////////////////
////////////////////////////																					//////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->gridVector->Rows->Add(); // fix
	this->gridVector2->Rows->Add(); // fix

	for (int i = 0; i < 10; i++)
	{
		gridResultMatrix->Rows->Add();
		gridResultMatrix->Columns->Add("", "");
		gridResultVector->Columns->Add("", "");
	}

}

// DEBUG FUNCTION
void puts(String^ s) 
{
	numberN->Text = s;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////																					//////////////////////////////////////////////
////////////////////////////		*****	*	  *		* *														//////////////////////////////////////////////
////////////////////////////		*		* *	  *		*  *													//////////////////////////////////////////////
////////////////////////////		*****	*  *  *		*  *													//////////////////////////////////////////////
////////////////////////////		*		*   * *		*  *													//////////////////////////////////////////////
////////////////////////////		*****	*	 **		**														//////////////////////////////////////////////
////////////////////////////																					//////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

private: System::Void add_row_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (gridMatrix->ColumnCount == 0) return;
	this->gridMatrix->Rows->Add();
}

	
private: System::Void rem_row_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (gridMatrix->Rows->Count == 0) return;
	else if (gridMatrix->Rows->Count == 1)
	{
		for (int i = 0; i < gridMatrix->Columns->Count - 1; i++)
		{
			gridMatrix->Columns->RemoveAt(0);
		}
	}
	else gridMatrix->Rows->RemoveAt(gridMatrix->Rows->Count - 1);
}


private: System::Void add_col_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->gridMatrix->Columns->Add("", "");
}


private: System::Void rem_col_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (gridMatrix->Columns->Count == 1)
	{
		int n = gridMatrix->Rows->Count;
		for (int i = 0; i < n; i++)
		{
			gridMatrix->Rows->RemoveAt(0);
		}
		return;
	}
	gridMatrix->Columns->RemoveAt(gridMatrix->Columns->Count - 1);
}


private: System::Void rem_cell_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (gridVector->Columns->Count == 1) return;
	else gridVector->Columns->RemoveAt(gridVector->Columns->Count - 1);
}


private: System::Void add_cell_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->gridVector->Columns->Add("", "");
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////																					//////////////////////////////////////////////
////////////////////////////		*****	*	  *		* *														//////////////////////////////////////////////
////////////////////////////		*		* *	  *		*  *													//////////////////////////////////////////////
////////////////////////////		*****	*  *  *		*  *													//////////////////////////////////////////////
////////////////////////////		*		*   * *		*  *													//////////////////////////////////////////////
////////////////////////////		*****	*	 **		**														//////////////////////////////////////////////
////////////////////////////																					//////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

private: System::Void add_row_btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (gridMatrix2->ColumnCount == 0) return;
	this->gridMatrix2->Rows->Add();
}


private: System::Void rem_row_btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (gridMatrix2->Rows->Count == 0) return;
	else if (gridMatrix2->Rows->Count == 1)
	{
		for (int i = 0; i < gridMatrix2->Columns->Count - 1; i++)
		{
			gridMatrix2->Columns->RemoveAt(0);
		}
	}
	else gridMatrix2->Rows->RemoveAt(gridMatrix2->Rows->Count - 1);
}


private: System::Void add_col_btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->gridMatrix2->Columns->Add("", "");
}


private: System::Void rem_col_btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (gridMatrix2->Columns->Count == 1)
	{
		int n = gridMatrix2->Rows->Count;
		for (int i = 0; i < n; i++)
		{
			gridMatrix2->Rows->RemoveAt(0);
		}
		return;
	}
	gridMatrix2->Columns->RemoveAt(gridMatrix2->Columns->Count - 1);
}


private: System::Void rem_cell_btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (gridVector2->Columns->Count == 1) return;
	else gridVector2->Columns->RemoveAt(gridVector2->Columns->Count - 1);
}


private: System::Void add_cell_btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->gridVector2->Columns->Add("", "");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////																					//////////////////////////////////////////////
////////////////////////////		*****	*	  *		* *														//////////////////////////////////////////////
////////////////////////////		*		* *	  *		*  *													//////////////////////////////////////////////
////////////////////////////		*****	*  *  *		*  *													//////////////////////////////////////////////
////////////////////////////		*		*   * *		*  *													//////////////////////////////////////////////
////////////////////////////		*****	*	 **		**														//////////////////////////////////////////////
////////////////////////////																					//////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool check_table(System::Windows::Forms::DataGridView ^table)
{
	try {
		for (int i = 0; i < table->RowCount; i++)
		{
			for (int j = 0; j < table->ColumnCount; j++)
			{
				double temp;
				bool is_table_correct = Double::TryParse(table->Rows[i]->Cells[j]->Value->ToString(), temp);
				if (!is_table_correct) {
					errorProvider->SetError(table, "Wrong data!");
					return false;
				}
			}
		}
		return true;
	}
	catch (Exception^ e)
	{
		errorProvider->SetError(table, e->ToString());
	}
}

bool Remove_Row(System::Windows::Forms::DataGridView^ table) {
	try {
		if (table->Rows->Count == 0) return false; // if there aren't any Rows (maybe there are Columns)
		else if (table->Rows->Count == 1) // else if there are only ONE row
		{
			for (int i = 0; i < table->Columns->Count; i++) // let's go through all the columns of the table and delete them
			{
				table->Columns->RemoveAt(0);
			}
		}
		table->Rows->RemoveAt(table->Rows->Count - 1); // and finally delete the column
		return true; //  we deleted smth - return good flag
	}
	catch (Exception ^ e)
	{
		errorProvider->SetError(table, e->ToString());
	}
}

bool Remove_Column(System::Windows::Forms::DataGridView^ table) {
	try {
		if (table->Columns->Count == 0) return false; //nothing to delete
		if (table->Columns->Count == 1) // if only ONE collumn
		{
			for (int i = 0; i < table->Rows->Count; i++) // let's go through all the rows of the table and delete them
			{
				table->Rows->RemoveAt(0);
			}
		}
		table->Columns->RemoveAt(table->Columns->Count - 1); // and finally delete the column
		return true; // we deleted smth - return good flag
	}
	catch (Exception ^ e)
	{
		errorProvider->SetError(table, e->ToString());
	}
}

void clear_table(System::Windows::Forms::DataGridView^ table)
{
	while (Remove_Row(table) || Remove_Column(table)); // SO MUSH GENIUS!!!! ONE STRING!!!!
}

bool vector_to_table(vec source, System::Windows::Forms::DataGridView^ destination)
{
	try
	{
		clear_table(destination);
		for (int i = 0; i < source.size(); i++)
		{
			destination->Columns->Add("", "");
		}
		for (int i = 0; i < destination->Columns->Count; i++)
		{
			destination->Rows[0]->Cells[i]->Value = source[i];
		}
		return true;
	}
	catch (Exception ^ e)
	{
		errorProvider->SetError(destination, e->ToString());
		return false;
	}
}

bool mtx_to_table(mtx source, System::Windows::Forms::DataGridView^ destination)
{
	try
	{
		clear_table(destination);
		for (int j = 0; j < source[0].size(); j++)
		{
			destination->Columns->Add("", "");
		}
		for (int i = 0; i < source.size(); i++)
		{
			destination->Rows->Add(1);
		}

		for (int i = 0; i < source.size(); i++)
		{
			for (int j = 0; j < source[i].size(); j++)
			{
				destination->Rows[i]->Cells[j]->Value = source[i][j];
			}
		}
		
		return true;
	}
	catch (Exception ^ e)
	{
		errorProvider->SetError(destination, e->ToString());
		return false;
	}
}

bool table_to_vector(System::Windows::Forms::DataGridView^ source, vec& destination)
{
	try
	{
		if (!check_table(source))
		{
			errorProvider->SetError(source, "Wrong data!");
			return false;
		}
		destination.resize(source->ColumnCount);
		for (int i = 0; i < source->ColumnCount; i++)
		{
			destination[i] = Double::Parse(source->Rows[0]->Cells[i]->Value->ToString());
		}
		return true;
	}
	catch (Exception ^ e)
	{
		errorProvider->SetError(source, e->ToString());
		return false;
	}
}

bool table_to_mtx(System::Windows::Forms::DataGridView ^source, mtx& destination)
{
	try
	{
		if (!check_table(source))
		{
			errorProvider->SetError(source, "Wrong data!");
			return false;
		}
		destination.resize(source->Rows->Count);
		for (int i = 0; i < source->Rows->Count; i++)
		{
			destination[i].resize(source->Columns->Count);
			for (int j = 0; j < source->Columns->Count; j++)
			{
				destination[i][j] = Double::Parse(source->Rows[i]->Cells[j]->Value->ToString());
			}
		}
		return true;
	}
	catch (Exception^ e)
	{
		errorProvider->SetError(source, e->ToString());
		return false;
	}
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////																					//////////////////////////////////////////////
////////////////////////////		*****	*	  *		* *														//////////////////////////////////////////////
////////////////////////////		*		* *	  *		*  *													//////////////////////////////////////////////
////////////////////////////		*****	*  *  *		*  *													//////////////////////////////////////////////
////////////////////////////		*		*   * *		*  *													//////////////////////////////////////////////
////////////////////////////		*****	*	 **		**														//////////////////////////////////////////////
////////////////////////////																					//////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

private: System::Void clr_all_Click(System::Object^ sender, System::EventArgs^ e) {
	clear_table(gridMatrix);
	clear_table(gridMatrix2);
	clear_table(gridResultMatrix);
	clear_table(gridResultVector);
	clear_table(gridVector);
	clear_table(gridVector2);
	errorProvider->Clear();
	numberN->Text = "";
}

void virtual fast_clear()
{
	clear_table(gridResultMatrix);
	clear_table(gridResultVector);
	errorProvider->Clear();
}

private: System::Void matrix_sum_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	fast_clear();
	
	if (check_table(gridMatrix) && check_table(gridMatrix2))
	{
		mtx A, B, C;
		table_to_mtx(gridMatrix, A);
		table_to_mtx(gridMatrix2, B);
		if (matrix_sum(A, B, C))
		{
			mtx_to_table(C, gridResultMatrix);
		}
		else puts("Wrong size of Matrix");
	}
	else return;
}

private: System::Void matrix_sub_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	fast_clear();

	if (check_table(gridMatrix) && check_table(gridMatrix2))
	{
		mtx A, B, C;
		table_to_mtx(gridMatrix, A);
		table_to_mtx(gridMatrix2, B);
		if (matrix_sub(A, B, C))
		{
			mtx_to_table(C, gridResultMatrix);
		}
		else puts("Wrong size of Matrix");
	}
	else return;
}
private: System::Void matrix_mul_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	fast_clear();

	if (check_table(gridMatrix) && check_table(gridMatrix2))
	{
		mtx A, B, C;
		table_to_mtx(gridMatrix, A);
		table_to_mtx(gridMatrix2, B);
		if (matrix_mul(A, B, C))
		{
			mtx_to_table(C, gridResultMatrix);
		}
		else puts("Wrong size of Matrix");
	}
	else return;
}
};

}
