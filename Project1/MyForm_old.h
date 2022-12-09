#pragma once
#include <corecrt_math.h>
#include<cmath>
#include<vector>

namespace MatrixLaba {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MatrixForm
	/// </summary>
	public ref class MatrixForm : public System::Windows::Forms::Form
	{
	public:
		MatrixForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MatrixForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;



	private: System::Windows::Forms::DataGridView^ Matrix1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridView^ Matrix2;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridView^ MatrixResult;



	private: System::Windows::Forms::DataGridView^ Vector1;
	private: System::Windows::Forms::DataGridView^ Vector2;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridView^ VectorResult;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button15;


	private: System::Windows::Forms::Panel^ panelMatrix;



	private: System::Windows::Forms::Button^ buttonDelCols;
	private: System::Windows::Forms::Button^ buttonAddCols;
	private: System::Windows::Forms::Button^ buttonDelRows;
	private: System::Windows::Forms::Button^ buttonAddRows;
	private: System::Windows::Forms::Button^ buttonDelCols2;

	private: System::Windows::Forms::Button^ buttonAddCols2;

	private: System::Windows::Forms::Button^ buttonDelRows2;

	private: System::Windows::Forms::Button^ buttonAddRows2;
	private: System::Windows::Forms::Button^ buttonAddColsVector1;
	private: System::Windows::Forms::Button^ buttonDelColsVector1;
	private: System::Windows::Forms::Button^ buttonDelColsVector2;
	private: System::Windows::Forms::Button^ buttonAddColsVector2;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::TextBox^ textBoxVector;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::TextBox^ textBoxNumb;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::TextBox^ textBox_rank;



	private: System::Windows::Forms::TextBox^ textBoxDet;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ IDButton;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;






	private: System::ComponentModel::IContainer^ components;








	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Matrix1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Matrix2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MatrixResult = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vector1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vector2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VectorResult = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->panelMatrix = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_rank = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDet = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNumb = (gcnew System::Windows::Forms::TextBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->buttonDelCols = (gcnew System::Windows::Forms::Button());
			this->buttonAddCols = (gcnew System::Windows::Forms::Button());
			this->buttonDelRows = (gcnew System::Windows::Forms::Button());
			this->buttonAddRows = (gcnew System::Windows::Forms::Button());
			this->buttonDelCols2 = (gcnew System::Windows::Forms::Button());
			this->buttonAddCols2 = (gcnew System::Windows::Forms::Button());
			this->buttonDelRows2 = (gcnew System::Windows::Forms::Button());
			this->buttonAddRows2 = (gcnew System::Windows::Forms::Button());
			this->buttonAddColsVector1 = (gcnew System::Windows::Forms::Button());
			this->buttonDelColsVector1 = (gcnew System::Windows::Forms::Button());
			this->buttonDelColsVector2 = (gcnew System::Windows::Forms::Button());
			this->buttonAddColsVector2 = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->textBoxVector = (gcnew System::Windows::Forms::TextBox());
			this->IDButton = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MatrixResult))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vector1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vector2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VectorResult))->BeginInit();
			this->panelMatrix->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->button9->Location = System::Drawing::Point(785, 421);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(304, 28);
			this->button9->TabIndex = 18;
			this->button9->Text = L"Addition of vectors";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MatrixForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->button8->Location = System::Drawing::Point(785, 455);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(304, 28);
			this->button8->TabIndex = 19;
			this->button8->Text = L"Substraction of vectors";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MatrixForm::button8_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->button11->Location = System::Drawing::Point(785, 489);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(304, 28);
			this->button11->TabIndex = 20;
			this->button11->Text = L"Scalar Multiplication";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MatrixForm::button11_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->button7->Location = System::Drawing::Point(373, 238);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(40, 28);
			this->button7->TabIndex = 17;
			this->button7->Text = L"-";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MatrixForm::button7_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->button14->Location = System::Drawing::Point(15, 144);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(210, 28);
			this->button14->TabIndex = 24;
			this->button14->Text = L"Rank";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MatrixForm::btnRank1_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->button6->Location = System::Drawing::Point(373, 189);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(40, 28);
			this->button6->TabIndex = 16;
			this->button6->Text = L"+";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MatrixForm::button6_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->button13->Location = System::Drawing::Point(15, 110);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(210, 28);
			this->button13->TabIndex = 23;
			this->button13->Text = L"Det";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MatrixForm::button13_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->button5->Location = System::Drawing::Point(373, 154);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(40, 28);
			this->button5->TabIndex = 15;
			this->button5->Text = L"*";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MatrixForm::button5_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->button12->Location = System::Drawing::Point(15, 76);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(210, 28);
			this->button12->TabIndex = 22;
			this->button12->Text = L"Transponation of matrix";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MatrixForm::button12_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->button4->Location = System::Drawing::Point(15, 42);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(210, 28);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Multiple on vector";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MatrixForm::button4_Click);
			// 
			// Matrix1
			// 
			this->Matrix1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Matrix1->ColumnHeadersVisible = false;
			this->Matrix1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->Matrix1->Location = System::Drawing::Point(33, 63);
			this->Matrix1->Name = L"Matrix1";
			this->Matrix1->RowHeadersVisible = false;
			this->Matrix1->RowHeadersWidth = 82;
			this->Matrix1->Size = System::Drawing::Size(314, 257);
			this->Matrix1->TabIndex = 13;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"";
			this->Column1->MinimumWidth = 10;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 35;
			// 
			// Matrix2
			// 
			this->Matrix2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Matrix2->ColumnHeadersVisible = false;
			this->Matrix2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			this->Matrix2->Location = System::Drawing::Point(439, 63);
			this->Matrix2->Name = L"Matrix2";
			this->Matrix2->RowHeadersVisible = false;
			this->Matrix2->RowHeadersWidth = 82;
			this->Matrix2->Size = System::Drawing::Size(314, 257);
			this->Matrix2->TabIndex = 14;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 35;
			// 
			// MatrixResult
			// 
			this->MatrixResult->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->MatrixResult->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn2 });
			this->MatrixResult->Location = System::Drawing::Point(839, 63);
			this->MatrixResult->Name = L"MatrixResult";
			this->MatrixResult->ReadOnly = true;
			this->MatrixResult->RowHeadersWidth = 82;
			this->MatrixResult->Size = System::Drawing::Size(314, 257);
			this->MatrixResult->TabIndex = 15;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 35;
			// 
			// Vector1
			// 
			this->Vector1->AllowUserToAddRows = false;
			this->Vector1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Vector1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn3 });
			this->Vector1->Location = System::Drawing::Point(33, 326);
			this->Vector1->Name = L"Vector1";
			this->Vector1->RowHeadersVisible = false;
			this->Vector1->RowHeadersWidth = 82;
			this->Vector1->Size = System::Drawing::Size(314, 39);
			this->Vector1->TabIndex = 16;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 30;
			// 
			// Vector2
			// 
			this->Vector2->AllowUserToAddRows = false;
			this->Vector2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Vector2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn4 });
			this->Vector2->Location = System::Drawing::Point(439, 326);
			this->Vector2->Name = L"Vector2";
			this->Vector2->RowHeadersVisible = false;
			this->Vector2->RowHeadersWidth = 82;
			this->Vector2->Size = System::Drawing::Size(314, 39);
			this->Vector2->TabIndex = 17;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 35;
			// 
			// VectorResult
			// 
			this->VectorResult->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->VectorResult->ColumnHeadersVisible = false;
			this->VectorResult->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn5 });
			this->VectorResult->Location = System::Drawing::Point(839, 328);
			this->VectorResult->Name = L"VectorResult";
			this->VectorResult->ReadOnly = true;
			this->VectorResult->RowHeadersVisible = false;
			this->VectorResult->RowHeadersWidth = 82;
			this->VectorResult->Size = System::Drawing::Size(314, 39);
			this->VectorResult->TabIndex = 18;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 35;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->button1->Location = System::Drawing::Point(422, 144);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(242, 28);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Rank";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MatrixForm::btnRank2_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->button2->Location = System::Drawing::Point(422, 110);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(242, 28);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Det";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MatrixForm::button2_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->button15->Location = System::Drawing::Point(422, 76);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(242, 28);
			this->button15->TabIndex = 29;
			this->button15->Text = L"Transpornation of matrix";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MatrixForm::button15_Click);
			// 
			// panelMatrix
			// 
			this->panelMatrix->Controls->Add(this->textBox3);
			this->panelMatrix->Controls->Add(this->textBox2);
			this->panelMatrix->Controls->Add(this->textBox1);
			this->panelMatrix->Controls->Add(this->textBox_rank);
			this->panelMatrix->Controls->Add(this->textBoxDet);
			this->panelMatrix->Controls->Add(this->textBoxNumb);
			this->panelMatrix->Controls->Add(this->button16);
			this->panelMatrix->Controls->Add(this->button3);
			this->panelMatrix->Controls->Add(this->button17);
			this->panelMatrix->Controls->Add(this->button1);
			this->panelMatrix->Controls->Add(this->button4);
			this->panelMatrix->Controls->Add(this->button2);
			this->panelMatrix->Controls->Add(this->button15);
			this->panelMatrix->Controls->Add(this->button12);
			this->panelMatrix->Controls->Add(this->button13);
			this->panelMatrix->Controls->Add(this->button14);
			this->panelMatrix->Location = System::Drawing::Point(26, 413);
			this->panelMatrix->Name = L"panelMatrix";
			this->panelMatrix->Size = System::Drawing::Size(742, 304);
			this->panelMatrix->TabIndex = 32;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(680, 10);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(39, 28);
			this->textBox3->TabIndex = 40;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(680, 149);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(39, 28);
			this->textBox2->TabIndex = 39;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(680, 110);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(39, 28);
			this->textBox1->TabIndex = 38;
			// 
			// textBox_rank
			// 
			this->textBox_rank->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_rank->Location = System::Drawing::Point(240, 149);
			this->textBox_rank->Multiline = true;
			this->textBox_rank->Name = L"textBox_rank";
			this->textBox_rank->Size = System::Drawing::Size(39, 28);
			this->textBox_rank->TabIndex = 37;
			// 
			// textBoxDet
			// 
			this->textBoxDet->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxDet->Location = System::Drawing::Point(240, 112);
			this->textBoxDet->Multiline = true;
			this->textBoxDet->Name = L"textBoxDet";
			this->textBoxDet->Size = System::Drawing::Size(39, 28);
			this->textBoxDet->TabIndex = 36;
			// 
			// textBoxNumb
			// 
			this->textBoxNumb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxNumb->Location = System::Drawing::Point(240, 8);
			this->textBoxNumb->Multiline = true;
			this->textBoxNumb->Name = L"textBoxNumb";
			this->textBoxNumb->Size = System::Drawing::Size(39, 28);
			this->textBoxNumb->TabIndex = 35;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->button16->Location = System::Drawing::Point(422, 8);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(242, 28);
			this->button16->TabIndex = 34;
			this->button16->Text = L"Multiple on  digit";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MatrixForm::button16_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->button3->Location = System::Drawing::Point(15, 10);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(210, 28);
			this->button3->TabIndex = 32;
			this->button3->Text = L"Multiple on digit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MatrixForm::button3_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->button17->Location = System::Drawing::Point(422, 42);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(242, 28);
			this->button17->TabIndex = 33;
			this->button17->Text = L"Multiple on vector";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MatrixForm::button17_Click);
			// 
			// buttonDelCols
			// 
			this->buttonDelCols->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDelCols->Location = System::Drawing::Point(276, 12);
			this->buttonDelCols->Name = L"buttonDelCols";
			this->buttonDelCols->Size = System::Drawing::Size(71, 38);
			this->buttonDelCols->TabIndex = 25;
			this->buttonDelCols->Text = L"DeleteColumn";
			this->buttonDelCols->UseVisualStyleBackColor = true;
			this->buttonDelCols->Click += gcnew System::EventHandler(this, &MatrixForm::buttonDelCols_Click);
			// 
			// buttonAddCols
			// 
			this->buttonAddCols->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddCols->Location = System::Drawing::Point(199, 12);
			this->buttonAddCols->Name = L"buttonAddCols";
			this->buttonAddCols->Size = System::Drawing::Size(71, 38);
			this->buttonAddCols->TabIndex = 24;
			this->buttonAddCols->Text = L"Add Column";
			this->buttonAddCols->UseVisualStyleBackColor = true;
			this->buttonAddCols->Click += gcnew System::EventHandler(this, &MatrixForm::buttonAddCols_Click);
			// 
			// buttonDelRows
			// 
			this->buttonDelRows->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDelRows->Location = System::Drawing::Point(110, 12);
			this->buttonDelRows->Name = L"buttonDelRows";
			this->buttonDelRows->Size = System::Drawing::Size(71, 38);
			this->buttonDelRows->TabIndex = 23;
			this->buttonDelRows->Text = L"Delete Row";
			this->buttonDelRows->UseVisualStyleBackColor = true;
			this->buttonDelRows->Click += gcnew System::EventHandler(this, &MatrixForm::buttonDelRows_Click);
			// 
			// buttonAddRows
			// 
			this->buttonAddRows->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddRows->Location = System::Drawing::Point(33, 12);
			this->buttonAddRows->Name = L"buttonAddRows";
			this->buttonAddRows->Size = System::Drawing::Size(71, 38);
			this->buttonAddRows->TabIndex = 22;
			this->buttonAddRows->Text = L"Add Row";
			this->buttonAddRows->UseVisualStyleBackColor = true;
			this->buttonAddRows->Click += gcnew System::EventHandler(this, &MatrixForm::buttonAddRows_Click);
			// 
			// buttonDelCols2
			// 
			this->buttonDelCols2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDelCols2->Location = System::Drawing::Point(682, 12);
			this->buttonDelCols2->Name = L"buttonDelCols2";
			this->buttonDelCols2->Size = System::Drawing::Size(71, 38);
			this->buttonDelCols2->TabIndex = 38;
			this->buttonDelCols2->Text = L"DeleteColumn";
			this->buttonDelCols2->UseVisualStyleBackColor = true;
			this->buttonDelCols2->Click += gcnew System::EventHandler(this, &MatrixForm::buttonDelCols2_Click);
			// 
			// buttonAddCols2
			// 
			this->buttonAddCols2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddCols2->Location = System::Drawing::Point(605, 12);
			this->buttonAddCols2->Name = L"buttonAddCols2";
			this->buttonAddCols2->Size = System::Drawing::Size(71, 38);
			this->buttonAddCols2->TabIndex = 37;
			this->buttonAddCols2->Text = L"Add Column";
			this->buttonAddCols2->UseVisualStyleBackColor = true;
			this->buttonAddCols2->Click += gcnew System::EventHandler(this, &MatrixForm::buttonAddCols2_Click);
			// 
			// buttonDelRows2
			// 
			this->buttonDelRows2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDelRows2->Location = System::Drawing::Point(516, 12);
			this->buttonDelRows2->Name = L"buttonDelRows2";
			this->buttonDelRows2->Size = System::Drawing::Size(71, 38);
			this->buttonDelRows2->TabIndex = 36;
			this->buttonDelRows2->Text = L"Delete Row";
			this->buttonDelRows2->UseVisualStyleBackColor = true;
			this->buttonDelRows2->Click += gcnew System::EventHandler(this, &MatrixForm::buttonDelRows2_Click);
			// 
			// buttonAddRows2
			// 
			this->buttonAddRows2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddRows2->Location = System::Drawing::Point(439, 12);
			this->buttonAddRows2->Name = L"buttonAddRows2";
			this->buttonAddRows2->Size = System::Drawing::Size(71, 38);
			this->buttonAddRows2->TabIndex = 35;
			this->buttonAddRows2->Text = L"Add Row";
			this->buttonAddRows2->UseVisualStyleBackColor = true;
			this->buttonAddRows2->Click += gcnew System::EventHandler(this, &MatrixForm::buttonAddRows2_Click);
			// 
			// buttonAddColsVector1
			// 
			this->buttonAddColsVector1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddColsVector1->Location = System::Drawing::Point(351, 326);
			this->buttonAddColsVector1->Name = L"buttonAddColsVector1";
			this->buttonAddColsVector1->Size = System::Drawing::Size(37, 39);
			this->buttonAddColsVector1->TabIndex = 39;
			this->buttonAddColsVector1->Text = L"+";
			this->buttonAddColsVector1->UseVisualStyleBackColor = true;
			this->buttonAddColsVector1->Click += gcnew System::EventHandler(this, &MatrixForm::buttonAddColsVector1_Click);
			// 
			// buttonDelColsVector1
			// 
			this->buttonDelColsVector1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDelColsVector1->Location = System::Drawing::Point(-12, 326);
			this->buttonDelColsVector1->Name = L"buttonDelColsVector1";
			this->buttonDelColsVector1->Size = System::Drawing::Size(39, 37);
			this->buttonDelColsVector1->TabIndex = 40;
			this->buttonDelColsVector1->Text = L"-";
			this->buttonDelColsVector1->UseVisualStyleBackColor = true;
			this->buttonDelColsVector1->Click += gcnew System::EventHandler(this, &MatrixForm::buttonDelColsVector1_Click);
			// 
			// buttonDelColsVector2
			// 
			this->buttonDelColsVector2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDelColsVector2->Location = System::Drawing::Point(394, 326);
			this->buttonDelColsVector2->Name = L"buttonDelColsVector2";
			this->buttonDelColsVector2->Size = System::Drawing::Size(39, 41);
			this->buttonDelColsVector2->TabIndex = 42;
			this->buttonDelColsVector2->Text = L"-";
			this->buttonDelColsVector2->UseVisualStyleBackColor = true;
			this->buttonDelColsVector2->Click += gcnew System::EventHandler(this, &MatrixForm::buttonDelColsVector2_Click);
			// 
			// buttonAddColsVector2
			// 
			this->buttonAddColsVector2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddColsVector2->Location = System::Drawing::Point(759, 326);
			this->buttonAddColsVector2->Name = L"buttonAddColsVector2";
			this->buttonAddColsVector2->Size = System::Drawing::Size(37, 41);
			this->buttonAddColsVector2->TabIndex = 41;
			this->buttonAddColsVector2->Text = L"+";
			this->buttonAddColsVector2->UseVisualStyleBackColor = true;
			this->buttonAddColsVector2->Click += gcnew System::EventHandler(this, &MatrixForm::buttonAddColsVector2_Click);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// textBoxVector
			// 
			this->textBoxVector->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxVector->Location = System::Drawing::Point(839, 373);
			this->textBoxVector->Multiline = true;
			this->textBoxVector->Name = L"textBoxVector";
			this->textBoxVector->Size = System::Drawing::Size(314, 30);
			this->textBoxVector->TabIndex = 43;
			// 
			// IDButton
			// 
			this->IDButton->Location = System::Drawing::Point(41, 373);
			this->IDButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->IDButton->Name = L"IDButton";
			this->IDButton->Size = System::Drawing::Size(38, 28);
			this->IDButton->TabIndex = 44;
			this->IDButton->Text = L"ID";
			this->IDButton->UseVisualStyleBackColor = true;
			this->IDButton->Click += gcnew System::EventHandler(this, &MatrixForm::IDButton_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(439, 373);
			this->button10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(38, 28);
			this->button10->TabIndex = 45;
			this->button10->Text = L"ID";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MatrixForm::button10_Click_1);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(91, 374);
			this->button18->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(38, 28);
			this->button18->TabIndex = 46;
			this->button18->Text = L"VecSet";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MatrixForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(488, 374);
			this->button19->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(38, 28);
			this->button19->TabIndex = 47;
			this->button19->Text = L"VecSet";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MatrixForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->button20->Location = System::Drawing::Point(785, 525);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(304, 28);
			this->button20->TabIndex = 48;
			this->button20->Text = L"Vector Multiplication";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Visible = false;
			this->button20->Click += gcnew System::EventHandler(this, &MatrixForm::button20_Click);
			// 
			// MatrixForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1009, 671);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->IDButton);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->textBoxVector);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->buttonDelColsVector2);
			this->Controls->Add(this->buttonAddColsVector2);
			this->Controls->Add(this->buttonDelColsVector1);
			this->Controls->Add(this->buttonAddColsVector1);
			this->Controls->Add(this->buttonDelCols2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->buttonAddCols2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->buttonDelRows2);
			this->Controls->Add(this->buttonAddRows2);
			this->Controls->Add(this->buttonDelCols);
			this->Controls->Add(this->buttonAddCols);
			this->Controls->Add(this->buttonDelRows);
			this->Controls->Add(this->buttonAddRows);
			this->Controls->Add(this->panelMatrix);
			this->Controls->Add(this->VectorResult);
			this->Controls->Add(this->Vector2);
			this->Controls->Add(this->Vector1);
			this->Controls->Add(this->MatrixResult);
			this->Controls->Add(this->Matrix2);
			this->Controls->Add(this->Matrix1);
			this->Name = L"MatrixForm";
			this->Text = L"MatrixCalcForm";
			this->Load += gcnew System::EventHandler(this, &MatrixForm::MatrixForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MatrixResult))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vector1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vector2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VectorResult))->EndInit();
			this->panelMatrix->ResumeLayout(false);
			this->panelMatrix->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool Check_Size() {
			if (Matrix1->RowCount != Matrix2->RowCount || Matrix1->ColumnCount != Matrix2->ColumnCount)
			{
				errorProvider1->SetError(Matrix1, "Размерности несовпадают");
				errorProvider1->SetError(Matrix2, "Размерности несовпадают");
				return false;
			}
			return true;
		}
		bool Check_Incorrect(System::Windows::Forms::DataGridView^ Matrix) {
			bool check;
			for (int i = 0; i < Matrix->RowCount - 1; ++i) {
				for (int j = 0; j < Matrix->ColumnCount; ++j)
				{
					int temp;
					check = Int32::TryParse(System::Convert::ToString(Matrix->Rows[i]->Cells[j]->Value), temp);
					if (!check)
						break;
				}
				if (!check)
				{
					errorProvider1->SetError(Matrix, "Таблица введена некорректно");
					break;
				}
			}
			return check;
		}
		void ClearResult() {
			while (this->MatrixResult->RowCount != 1) {
				this->MatrixResult->Rows->Remove(this->MatrixResult->Rows[MatrixResult->RowCount - 2]);
			}
			while (this->MatrixResult->ColumnCount != 1) {
				this->MatrixResult->Columns->Remove(this->MatrixResult->Columns[MatrixResult->ColumnCount - 1]);
			}
		}
		void ClearAll() {//очистка полей
			errorProvider1->SetError(Vector1, String::Empty);
			errorProvider1->SetError(Vector2, String::Empty);
			errorProvider1->SetError(VectorResult, String::Empty);
			errorProvider1->SetError(Matrix1, String::Empty);
			errorProvider1->SetError(Matrix2, String::Empty);
			errorProvider1->SetError(MatrixResult, String::Empty);
			errorProvider1->SetError(MatrixResult, String::Empty);
			errorProvider1->SetError(textBoxVector, String::Empty);
			errorProvider1->SetError(textBoxNumb, String::Empty);


			textBoxVector->Text = "";
		}

	private: void swapRow1(double** matrix, int i1, int i2)
	{
		double* tmp = new double[Matrix1->ColumnCount];
		tmp = matrix[i2];
		matrix[i2] = matrix[i1];
		matrix[i1] = tmp;
	}
	private: void transRow1(double** matrix, int line, int curRow, int startCol)
	{
		double mnoj = matrix[curRow][startCol] / matrix[line][startCol];
		for (int j = startCol; j < Matrix1->ColumnCount; ++j)
		{
			matrix[curRow][j] -= mnoj * matrix[line][j];
		}
	}
	private: void swapRow2(double** matrix, int i1, int i2)
	{
		double* tmp = new double[Matrix2->ColumnCount];
		tmp = matrix[i2];
		matrix[i2] = matrix[i1];
		matrix[i1] = tmp;
	}
	private: void transRow2(double** matrix, int line, int curRow, int startCol)
	{
		double mnoj = matrix[curRow][startCol] / matrix[line][startCol];
		for (int j = startCol; j < Matrix2->ColumnCount; ++j)
		{
			matrix[curRow][j] -= mnoj * matrix[line][j];
		}
	}



	private: System::Void buttonAddRows_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Matrix1->Rows->Add(1);
	}

	private: System::Void buttonAddCols_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Matrix1->Columns->Add("newCol", "");
		this->Matrix1->Columns[this->Matrix1->ColumnCount - 1]->Width = 35;
	}
	private: System::Void buttonDelRows_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->Matrix1->CurrentRow->IsNewRow) {
			int i = this->Matrix1->CurrentRow->Index;
			this->Matrix1->Rows->Remove(this->Matrix1->Rows[i]);
		}
	}
	private: System::Void buttonDelCols_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->Matrix1->Columns->Count != 1) {
			int i = this->Matrix1->CurrentCell->ColumnIndex;
			this->Matrix1->Columns->Remove(this->Matrix1->Columns[i]);
		}
	}
	private: System::Void buttonAddRows2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Matrix2->Rows->Add(1);
	}

	private: System::Void buttonDelRows2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->Matrix2->CurrentRow->IsNewRow) {
			int i = this->Matrix2->CurrentRow->Index;
			this->Matrix2->Rows->Remove(this->Matrix2->Rows[i]);
		}
	}

	private: System::Void buttonAddCols2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Matrix2->Columns->Add("newCol", "");
		this->Matrix2->Columns[this->Matrix2->ColumnCount - 1]->Width = 35;
	}

	private: System::Void buttonDelCols2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->Matrix2->Columns->Count != 1) {
			int i = this->Matrix2->CurrentCell->ColumnIndex;
			this->Matrix2->Columns->Remove(this->Matrix2->Columns[i]);
		}
	}
	private: System::Void buttonAddColsVector1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Vector1->Columns->Add("newCol", "");
		this->Vector1->Columns[this->Vector1->ColumnCount - 1]->Width = 35;
	}
	private: System::Void buttonDelColsVector1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->Vector1->Columns->Count != 1) {
			int i = this->Vector1->CurrentCell->ColumnIndex;
			this->Vector1->Columns->Remove(this->Vector1->Columns[i]);
		}
	}
	private: System::Void buttonAddColsVector2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Vector2->Columns->Add("newCol", "");
		this->Vector2->Columns[this->Vector2->ColumnCount - 1]->Width = 35;
	}

	private: System::Void buttonDelColsVector2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->Vector2->Columns->Count != 1) {
			int i = this->Vector2->CurrentCell->ColumnIndex;
			this->Vector2->Columns->Remove(this->Vector2->Columns[i]);
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		for (int i = 0; i < VectorResult->ColumnCount; i++)
			this->VectorResult->Rows[0]->Cells[i]->Value = "";

		if (Vector1->ColumnCount != Vector2->ColumnCount)
			errorProvider1->SetError(VectorResult, "Размеры векторов не равны");
		else {
			while (this->VectorResult->ColumnCount != this->Vector1->ColumnCount) {
				this->VectorResult->Columns->Add("newCol", "");
				this->VectorResult->Columns[this->VectorResult->ColumnCount - 1]->Width = 35;
			}
			bool check1, check2;

			for (int i = 0; i < this->Vector1->ColumnCount; i++) {
				int temp1;
				check1 = Int32::TryParse(System::Convert::ToString(Vector1->Rows[0]->Cells[i]->Value), temp1);
				if (!check1)
					break;
			}
			for (int i = 0; i < this->Vector2->ColumnCount; i++) {
				int temp1;
				check2 = Int32::TryParse(System::Convert::ToString(Vector2->Rows[0]->Cells[i]->Value), temp1);
				if (!check2)
					break;
			}
			if (!check1)
				errorProvider1->SetError(Vector1, "Таблица введена некорректно");
			if (!check2)
				errorProvider1->SetError(Vector2, "Таблица введена некорректно");
			if (check1 && check2)
				for (int i = 0; i < this->Vector1->ColumnCount; i++) {
					int temp1, temp2;
					Int32::TryParse(System::Convert::ToString(Vector1->Rows[0]->Cells[i]->Value), temp1);
					Int32::TryParse(System::Convert::ToString(Vector2->Rows[0]->Cells[i]->Value), temp2);
					this->VectorResult->Rows[0]->Cells[i]->Value = temp1 + temp2;
				}
			else {
				while (this->VectorResult->Columns->Count != 1) {
					this->VectorResult->Columns->Remove(this->VectorResult->Columns[this->VectorResult->Columns->Count - 1]);
				}
				this->VectorResult->Rows[0]->Cells[0]->Value = "";
			}
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		for (int i = 0; i < VectorResult->ColumnCount; i++)
			this->VectorResult->Rows[0]->Cells[i]->Value = "";

		if (Vector1->ColumnCount != Vector2->ColumnCount)
			errorProvider1->SetError(VectorResult, "Размеры векторов не равны");
		else {
			while (this->VectorResult->ColumnCount != this->Vector1->ColumnCount) {
				this->VectorResult->Columns->Add("newCol", "");
				this->VectorResult->Columns[this->VectorResult->ColumnCount - 1]->Width = 35;
			}
			bool check1, check2;

			for (int i = 0; i < this->Vector1->ColumnCount; i++) {
				int temp1;
				check1 = Int32::TryParse(System::Convert::ToString(Vector1->Rows[0]->Cells[i]->Value), temp1);
				if (!check1)
					break;
			}
			for (int i = 0; i < this->Vector2->ColumnCount; i++) {
				int temp1;
				check2 = Int32::TryParse(System::Convert::ToString(Vector2->Rows[0]->Cells[i]->Value), temp1);
				if (!check2)
					break;
			}
			if (!check1)
				errorProvider1->SetError(Vector1, "Таблица введена некорректно");
			if (!check2)
				errorProvider1->SetError(Vector2, "Таблица введена некорректно");
			if (check1 && check2)
				for (int i = 0; i < this->Vector1->ColumnCount; i++) {
					int temp1, temp2;
					Int32::TryParse(System::Convert::ToString(Vector1->Rows[0]->Cells[i]->Value), temp1);
					Int32::TryParse(System::Convert::ToString(Vector2->Rows[0]->Cells[i]->Value), temp2);
					this->VectorResult->Rows[0]->Cells[i]->Value = temp1 - temp2;
				}
			else {
				while (this->VectorResult->Columns->Count != 1) {
					this->VectorResult->Columns->Remove(this->VectorResult->Columns[this->VectorResult->Columns->Count - 1]);
				}
				this->VectorResult->Rows[0]->Cells[0]->Value = "";
			}
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		for (int i = 0; i < VectorResult->ColumnCount; i++)
			this->VectorResult->Rows[0]->Cells[i]->Value = "";

		if (Vector1->ColumnCount != Vector2->ColumnCount)
			errorProvider1->SetError(textBoxVector, "Disarrangement");
		else {
			bool check1, check2;

			for (int i = 0; i < this->Vector1->ColumnCount; i++) {
				int temp1;
				check1 = Int32::TryParse(System::Convert::ToString(Vector1->Rows[0]->Cells[i]->Value), temp1);
				if (!check1)
					break;
			}
			for (int i = 0; i < this->Vector2->ColumnCount; i++) {
				int temp1;
				check2 = Int32::TryParse(System::Convert::ToString(Vector2->Rows[0]->Cells[i]->Value), temp1);
				if (!check2)
					break;
			}
			if (!check1)
				errorProvider1->SetError(Vector1, "Таблица введена некорректно");
			if (!check2)
				errorProvider1->SetError(Vector2, "Таблица введена некорректно");
			if (check1 && check2) {
				int scalar = 0;
				for (int i = 0; i < this->Vector1->ColumnCount; i++) {
					int temp1, temp2;
					Int32::TryParse(System::Convert::ToString(Vector1->Rows[0]->Cells[i]->Value), temp1);
					Int32::TryParse(System::Convert::ToString(Vector2->Rows[0]->Cells[i]->Value), temp2);
					scalar += temp1 * temp2;
				}
				textBoxVector->Text = "Scalar multiplincation " + System::Convert::ToString(scalar);
			}
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		if (Vector1->ColumnCount != Vector2->ColumnCount || Vector1->ColumnCount != 3 || Vector2->ColumnCount != 3)
			errorProvider1->SetError(VectorResult, "Размеры векторов не равны или равны не 3-м");
		else {
			while (this->VectorResult->ColumnCount != 3) {
				this->VectorResult->Columns->Add("newCol", "");
				this->VectorResult->Columns[this->VectorResult->ColumnCount - 1]->Width = 35;
			}

			bool check1, check2;

			for (int i = 0; i < this->Vector1->ColumnCount; i++) {
				int temp1;
				check1 = Int32::TryParse(System::Convert::ToString(Vector1->Rows[0]->Cells[i]->Value), temp1);
				if (!check1)
					break;
			}
			for (int i = 0; i < this->Vector2->ColumnCount; i++) {
				int temp1;
				check2 = Int32::TryParse(System::Convert::ToString(Vector2->Rows[0]->Cells[i]->Value), temp1);
				if (!check2)
					break;
			}
			if (!check1)
				errorProvider1->SetError(Vector1, "Таблица введена некорректно");
			if (!check2)
				errorProvider1->SetError(Vector2, "Таблица введена некорректно");
			if (check1 && check2) {
				int temp1, temp2, temp3, temp4;
				//a.y * b.z - a.z * b.y, -a.x * b.z + a.z * b.x, a.x * b.y - a.y * b.x
				Int32::TryParse(System::Convert::ToString(Vector1->Rows[0]->Cells[1]->Value), temp1);
				Int32::TryParse(System::Convert::ToString(Vector2->Rows[0]->Cells[2]->Value), temp2);
				Int32::TryParse(System::Convert::ToString(Vector1->Rows[0]->Cells[2]->Value), temp3);
				Int32::TryParse(System::Convert::ToString(Vector2->Rows[0]->Cells[1]->Value), temp4);
				this->VectorResult->Rows[0]->Cells[0]->Value = temp1 * temp2 - temp3 * temp4;

				Int32::TryParse(System::Convert::ToString(Vector1->Rows[0]->Cells[0]->Value), temp1);
				Int32::TryParse(System::Convert::ToString(Vector2->Rows[0]->Cells[2]->Value), temp2);
				Int32::TryParse(System::Convert::ToString(Vector1->Rows[0]->Cells[2]->Value), temp3);
				Int32::TryParse(System::Convert::ToString(Vector2->Rows[0]->Cells[0]->Value), temp4);
				this->VectorResult->Rows[0]->Cells[1]->Value = -temp1 * temp2 + temp3 * temp4;

				Int32::TryParse(System::Convert::ToString(Vector1->Rows[0]->Cells[0]->Value), temp1);
				Int32::TryParse(System::Convert::ToString(Vector2->Rows[0]->Cells[1]->Value), temp2);
				Int32::TryParse(System::Convert::ToString(Vector1->Rows[0]->Cells[1]->Value), temp3);
				Int32::TryParse(System::Convert::ToString(Vector2->Rows[0]->Cells[0]->Value), temp4);
				this->VectorResult->Rows[0]->Cells[2]->Value = temp1 * temp2 - temp3 * temp4;
			}
			else {
				while (this->VectorResult->Columns->Count != 1) {
					this->VectorResult->Columns->Remove(this->VectorResult->Columns[this->VectorResult->Columns->Count - 1]);
				}
				this->VectorResult->Rows[0]->Cells[0]->Value = "";
			}
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		int temp;
		bool check, checkTextBox;

		for (int i = 0; i < Matrix1->RowCount - 1; ++i)
		{
			for (int j = 0; j < Matrix1->ColumnCount; ++j) {
				check = Int32::TryParse(System::Convert::ToString(Matrix1->Rows[i]->Cells[j]->Value), temp);
				if (!check) {
					errorProvider1->SetError(Matrix1, "Таблица введена некорректно");
					break;
				}
			}
			if (!check) break;
		}
		checkTextBox = Int32::TryParse(textBoxNumb->Text, temp);
		if (!checkTextBox)
			errorProvider1->SetError(textBoxNumb, "Таблица введена некорректно");
		if (check && checkTextBox)
			for (int i = 0; i < Matrix1->RowCount - 1; ++i)
			{
				for (int j = 0; j < Matrix1->ColumnCount; ++j) {
					int temp2;
					Int32::TryParse(System::Convert::ToString(Matrix1->Rows[i]->Cells[j]->Value), temp2);

					Matrix1->Rows[i]->Cells[j]->Value = temp2 * temp;
				}
			}
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		int temp;
		bool check, checkTextBox;

		for (int i = 0; i < Matrix2->RowCount - 1; ++i)
		{
			for (int j = 0; j < Matrix2->ColumnCount; ++j) {
				check = Int32::TryParse(System::Convert::ToString(Matrix2->Rows[i]->Cells[j]->Value), temp);
				if (!check) {
					errorProvider1->SetError(Matrix2, "Таблица введена некорректно");
					break;
				}
			}
			if (!check) break;
		}
		checkTextBox = Int32::TryParse(textBox3->Text, temp);
		if (!checkTextBox)
			errorProvider1->SetError(textBox3, "Таблица введена некорректно");
		if (check && checkTextBox)
			for (int i = 0; i < Matrix2->RowCount - 1; ++i)
			{
				for (int j = 0; j < Matrix2->ColumnCount; ++j) {
					int temp2;
					Int32::TryParse(System::Convert::ToString(Matrix2->Rows[i]->Cells[j]->Value), temp2);

					Matrix2->Rows[i]->Cells[j]->Value = temp2 * temp;
				}
			}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		int temp;
		bool check, checkVector, checkEqual;
		checkEqual = Vector1->ColumnCount == Matrix1->RowCount - 1;

		for (int i = 0; i < Vector1->ColumnCount; ++i) {
			checkVector = Int32::TryParse(System::Convert::ToString(Vector1->Rows[0]->Cells[i]->Value), temp);
			if (!checkVector) break;
		}

		for (int i = 0; i < Matrix1->RowCount - 1; ++i)
		{
			for (int j = 0; j < Matrix1->ColumnCount; ++j) {
				check = Int32::TryParse(System::Convert::ToString(Matrix1->Rows[i]->Cells[j]->Value), temp);
				if (!check) {
					errorProvider1->SetError(Matrix1, "Таблица введена некорректно");
					break;
				}
			}
			if (!check) break;
		}
		if (!checkEqual) {
			errorProvider1->SetError(Matrix1, "Размерности не совпадают");
			errorProvider1->SetError(Vector1, "Размерности не совпадают");
		}
		if (!checkVector)
			errorProvider1->SetError(Vector1, "Вектор введен некорректно");
		if (!check)
			errorProvider1->SetError(Matrix1, "Матрица введена некорректно");

		if (checkEqual && checkVector && check) {
			array<int^>^ result = gcnew array<int^>(Matrix1->RowCount - 1);
			for (int i = 0; i < Matrix1->RowCount - 1; ++i) {
				int sum = 0;
				for (int j = 0; j < Matrix1->ColumnCount; ++j) {
					int tempMatr, tempVec;
					Int32::TryParse(System::Convert::ToString(Vector1->Rows[0]->Cells[j]->Value), tempVec);
					Int32::TryParse(System::Convert::ToString(Matrix1->Rows[i]->Cells[j]->Value), tempMatr);

					sum += tempVec * tempMatr;
				}
				result[i] = sum;
			}
			while (Matrix1->ColumnCount != 1)
				this->Matrix1->Columns->Remove(this->Matrix1->Columns[Matrix1->ColumnCount - 1]);
			for (int i = 0; i < Matrix1->RowCount - 1; ++i)
				Matrix1->Rows[i]->Cells[0]->Value = result[i];
		}
	}
	private: System::Void MatrixForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Vector1->Rows->Add(1);
		Vector2->Rows->Add(1);
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		int temp;
		bool check, checkVector, checkEqual;
		checkEqual = Vector2->ColumnCount == Matrix2->RowCount - 1;

		for (int i = 0; i < Vector2->ColumnCount; ++i) {
			checkVector = Int32::TryParse(System::Convert::ToString(Vector2->Rows[0]->Cells[i]->Value), temp);
			if (!checkVector) break;
		}

		for (int i = 0; i < Matrix2->RowCount - 1; ++i)
		{
			for (int j = 0; j < Matrix2->ColumnCount; ++j) {
				check = Int32::TryParse(System::Convert::ToString(Matrix2->Rows[i]->Cells[j]->Value), temp);
				if (!check) {
					errorProvider1->SetError(Matrix2, "Таблица введена некорректно");
					break;
				}
			}
			if (!check) break;
		}
		if (!checkEqual) {
			errorProvider1->SetError(Matrix2, "Размерности не совпадают");
			errorProvider1->SetError(Vector2, "Размерности не совпадают");
		}
		if (!checkVector)
			errorProvider1->SetError(Vector2, "Вектор введен некорректно");
		if (!check)
			errorProvider1->SetError(Matrix2, "Матрица введена некорректно");

		if (checkEqual && checkVector && check)
			for (int i = 0; i < Matrix2->RowCount - 1; ++i)
			{
				int tempVec;
				Int32::TryParse(System::Convert::ToString(Vector2->Rows[0]->Cells[i]->Value), tempVec);
				for (int j = 0; j < Matrix2->ColumnCount; ++j) {
					int tempMatr;
					Int32::TryParse(System::Convert::ToString(Matrix2->Rows[i]->Cells[j]->Value), tempMatr);

					Matrix2->Rows[i]->Cells[j]->Value = tempVec * tempMatr;
				}
			}
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		bool check;
		int temp;
		int max;

		array<array<int^>^>^ arr = gcnew array<array<int^>^>(Matrix1->ColumnCount);//Matrix1->ColumnCount
		for (int i = 0; i < Matrix1->ColumnCount; i++)
			arr[i] = gcnew array<int^>(Matrix1->RowCount - 1);

		for (int i = 0; i < Matrix1->RowCount - 1; ++i)
		{
			for (int j = 0; j < Matrix1->ColumnCount; ++j) {
				check = Int32::TryParse(System::Convert::ToString(Matrix1->Rows[i]->Cells[j]->Value), temp);
				if (!check) {
					errorProvider1->SetError(Matrix1, "Таблица введена некорректно");
					break;
				}
			}
			if (!check) break;
		}

		if (!check)
			errorProvider1->SetError(Matrix1, "Матрица введена некорректно");
		else {
			//создаем новый массив, в котором число строк = числу столбцов матрицы, про столбцы то же самое
			for (int i = 0; i < Matrix1->RowCount - 1; i++)
				for (int j = 0; j < Matrix1->ColumnCount; j++) {
					Int32::TryParse(System::Convert::ToString(Matrix1->Rows[i]->Cells[j]->Value), temp);
					arr[j][i] = temp;
				}
			int rows = Matrix1->RowCount - 1;
			int cols = Matrix1->ColumnCount;
			//если матрица не квадратная, то меняем местами строки и столбцы в матрице(удаляем одно и добавляем другое)
			if (rows > cols) {
				while (Matrix1->RowCount - 1 != cols)
					this->Matrix1->Rows->Remove(this->Matrix1->Rows[Matrix1->RowCount - 1 - 1]);
				while (Matrix1->ColumnCount != rows) {
					this->Matrix1->Columns->Add("newCol", "");
					this->Matrix1->Columns[this->Matrix1->ColumnCount - 1]->Width = 35;
				}
			}
			else if (cols > rows) {
				while (Matrix1->ColumnCount != rows)
					this->Matrix1->Columns->Remove(this->Matrix1->Columns[Matrix1->ColumnCount - 1]);

				while (Matrix1->RowCount - 1 != cols)
					this->Matrix1->Rows->Add(1);
			}


			for (int i = 0; i < Matrix1->RowCount - 1; i++)
				for (int j = 0; j < Matrix1->ColumnCount; j++)
					Matrix1->Rows[i]->Cells[j]->Value = arr[i][j];
		}

	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		bool check;
		int temp;
		int max;

		array<array<int^>^>^ arr = gcnew array<array<int^>^>(Matrix2->ColumnCount);//Matrix2->ColumnCount
		for (int i = 0; i < Matrix2->ColumnCount; i++)
			arr[i] = gcnew array<int^>(Matrix2->RowCount - 1);

		for (int i = 0; i < Matrix2->RowCount - 1; ++i)
		{
			for (int j = 0; j < Matrix2->ColumnCount; ++j) {
				check = Int32::TryParse(System::Convert::ToString(Matrix2->Rows[i]->Cells[j]->Value), temp);
				if (!check) {
					errorProvider1->SetError(Matrix2, "Таблица введена некорректно");
					break;
				}
			}
			if (!check) break;
		}

		if (!check)
			errorProvider1->SetError(Matrix2, "Матрица введена некорректно");
		else {
			//создаем новый массив, в котором число строк = числу столбцов матрицы, про столбцы то же самое
			for (int i = 0; i < Matrix2->RowCount - 1; i++)
				for (int j = 0; j < Matrix2->ColumnCount; j++) {
					Int32::TryParse(System::Convert::ToString(Matrix2->Rows[i]->Cells[j]->Value), temp);
					arr[j][i] = temp;
				}
			int rows = Matrix2->RowCount - 1;
			int cols = Matrix2->ColumnCount;
			//если матрица не квадратная, то меняем местами строки и столбцы в матрице(удаляем одно и добавляем другое)
			if (rows > cols) {
				while (Matrix2->RowCount - 1 != cols)
					this->Matrix2->Rows->Remove(this->Matrix2->Rows[Matrix2->RowCount - 1 - 1]);
				while (Matrix2->ColumnCount != rows) {
					this->Matrix2->Columns->Add("newCol", "");
					this->Matrix2->Columns[this->Matrix2->ColumnCount - 1]->Width = 35;
				}
			}
			else if (cols > rows) {
				while (Matrix2->ColumnCount != rows)
					this->Matrix2->Columns->Remove(this->Matrix2->Columns[Matrix2->ColumnCount - 1]);

				while (Matrix2->RowCount - 1 != cols)
					this->Matrix2->Rows->Add(1);
			}


			for (int i = 0; i < Matrix2->RowCount - 1; i++)
				for (int j = 0; j < Matrix2->ColumnCount; j++)
					Matrix2->Rows[i]->Cells[j]->Value = arr[i][j];
		}
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		bool incorrect = true;
		if (Matrix1->RowCount - 1 != Matrix1->ColumnCount) {
			errorProvider1->SetError(Matrix1, "Размерности не совпадают");
			incorrect = false;
		}
		if (Check_Incorrect(Matrix1) && incorrect) {
			array<array<double^>^>^ arr = gcnew array<array<double^>^>(Matrix1->RowCount - 1);//Matrix2->ColumnCount
			for (int i = 0; i < Matrix1->RowCount - 1; i++)
				arr[i] = gcnew array<double^>(Matrix1->ColumnCount);
			for (int i = 0; i < Matrix1->RowCount - 1; ++i)
				for (int j = 0; j < Matrix1->ColumnCount; ++j) {
					int temp;
					Int32::TryParse(System::Convert::ToString(Matrix1->Rows[i]->Cells[j]->Value), temp);
					arr[i][j] = (double)temp;
				}

			double result = 1;
			double save;
			int count = 0;
			for (int i = 0; i < Matrix1->RowCount - 1; i++) {
				if (arr[i][i]->ToString() != "0") {
					for (int j = i + 1; j < Matrix1->RowCount - 1; j++) {
						save = (-(double)arr[j][i] / (double)arr[i][i]);

						for (int k = 0; k < Matrix1->ColumnCount; k++) {
							double temp = (double)arr[j][k];
							temp += ((double)arr[i][k] * save);
							arr[j][k] = temp;
						}
					}
				}
				else {
					int s = -1;
					double save2;
					for (int j = 0; j < Matrix1->RowCount - 1; j++) {
						if (arr[j][i]->ToString() != "0") {
							s = j;
							break;
						}
					}
					if (s == -1) this->textBoxDet->Text = "0";
					else {
						for (int j = 0; j < Matrix1->RowCount - 1; j++) {
							save2 = (double)arr[i][j];
							arr[i][j] = arr[s][j];
							arr[s][j] = save2;
						}
						count++;
						for (int j = i + 1; j < Matrix1->RowCount - 1; j++) {
							save = (-(double)arr[j][i] / (double)arr[i][i]);
							for (int k = 0; k < Matrix1->ColumnCount; k++) {
								double temp = (double)arr[j][k];
								temp += (double)arr[i][k] * save;
								arr[j][k] = temp;
							}
						}
					}
				}
			}
			/*for (int i = 0; i < Matrix1->RowCount - 1; ++i)
				for (int j = 0; j < Matrix1->ColumnCount; ++j)
					Matrix1->Rows[i]->Cells[j]->Value = arr[i][j];*/
			for (int i = 0; i < Matrix1->RowCount - 1; i++) {
				result *= (double)arr[i][i];
			}
			if (count % 2 == 0) this->textBoxDet->Text = System::Convert::ToString(result);
			else return this->textBoxDet->Text = System::Convert::ToString(result * -1);;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		bool incorrect = true;
		if (Matrix2->RowCount - 1 != Matrix2->ColumnCount) {
			errorProvider1->SetError(Matrix2, "Размерности не совпадают");
			incorrect = false;
		}
		if (Check_Incorrect(Matrix2) && incorrect) {
			array<array<double^>^>^ arr = gcnew array<array<double^>^>(Matrix2->RowCount - 1); //create matrix
			for (int i = 0; i < Matrix2->RowCount - 1; i++)
				arr[i] = gcnew array<double^>(Matrix2->ColumnCount);
			for (int i = 0; i < Matrix2->RowCount - 1; ++i)
				for (int j = 0; j < Matrix2->ColumnCount; ++j) {
					int temp;
					Int32::TryParse(System::Convert::ToString(Matrix2->Rows[i]->Cells[j]->Value), temp);
					arr[i][j] = (double)temp;
				}

			double result = 1;
			double save;
			int count = 0;
			for (int i = 0; i < Matrix2->RowCount - 1; i++) {
				if (arr[i][i] != 0.0) {
					for (int j = i + 1; j < Matrix2->RowCount - 1; j++) {
						save = (-(double)arr[j][i] / (double)arr[i][i]);
						for (int k = 0; k < Matrix2->ColumnCount; k++) {
							double temp = (double)arr[j][k];
							temp += ((double)arr[i][k] * save);
							arr[j][k] = temp;
						}
					}
				}
				else {
					int s = -1;
					double save2;
					for (int j = 0; j < Matrix2->RowCount - 1; j++) {
						if (arr[j][i] != 0.0) {
							s = j;
							break;
						}
					}
					if (s == -1) this->textBox1->Text = System::Convert::ToString(0);
					for (int j = 0; j < Matrix2->RowCount - 1; j++) {
						save2 = (double)arr[i][j];
						arr[i][j] = arr[s][j];
						arr[s][j] = save2;
					}
					count++;
					for (int j = i + 1; j < Matrix2->RowCount - 1; j++) {
						save = (-(double)arr[j][i] / (double)arr[i][i]);
						for (int k = 0; k < Matrix2->ColumnCount; k++) {
							double temp = (double)arr[j][k];
							temp += (double)arr[i][k] * save;
							arr[j][k] = temp;
						}
					}
				}
			}
			for (int i = 0; i < Matrix2->RowCount - 1; i++) {
				result *= (double)arr[i][i];
			}
			if (count % 2 == 0) this->textBox1->Text = System::Convert::ToString(result);
			else return this->textBox1->Text = System::Convert::ToString(result * -1);;
		}
	}

	private: System::Void btnRank1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ClearAll();
		bool incorrect = true;
		int n = Matrix1->RowCount - 1;
		int m = Matrix1->ColumnCount;

		if (Check_Incorrect(Matrix1) && incorrect) {
			array<array<double>^>^ a = gcnew array<array<double>^>(Matrix1->RowCount); //create matrix
			for (int i = 0; i < Matrix1->RowCount; i++)
				a[i] = gcnew array<double>(Matrix1->ColumnCount);
			for (int i = 0; i < Matrix1->RowCount; ++i)
				for (int j = 0; j < Matrix1->ColumnCount; ++j) {
					int temp;
					Int32::TryParse(System::Convert::ToString(Matrix1->Rows[i]->Cells[j]->Value), temp);
					a[i][j] = (double)temp;
				}

			double result = 1;
			double save;
			int count = 0;
			int rank = std::fmax(n, m);
			const double EPS = 1E-9;
			std::vector<int> line_used(n);
			for (int i = 0; i < m; ++i) {
				int j;
				for (j = 0; j < n; ++j)
					if (!line_used[j] && (a[j][i]) > 0)
						break;
				if (j == n)
					--rank;
				else {
					line_used[j] = true;
					for (int p = i + 1; p < m; ++p)
						a[j][p] /= a[j][i];
					for (int k = 0; k < n; ++k)
						if (k != j && abs(a[k][i]) > 0)
							for (int p = i + 1; p < m; ++p)
								a[k][p] -= a[j][p] * a[k][i];
				}
			}
			textBox_rank->Text = System::Convert::ToString(rank);
		}
	}
	private: System::Void btnRank2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ClearAll();
		bool incorrect = true;
		int n = Matrix2->RowCount - 1;
		int m = Matrix2->ColumnCount;

		if (Check_Incorrect(Matrix2) && incorrect) {
			array<array<double>^>^ a = gcnew array<array<double>^>(Matrix2->RowCount); //create matrix
			for (int i = 0; i < Matrix2->RowCount; i++)
				a[i] = gcnew array<double>(Matrix2->ColumnCount);
			for (int i = 0; i < Matrix2->RowCount; ++i)
				for (int j = 0; j < Matrix2->ColumnCount; ++j) {
					int temp;
					Int32::TryParse(System::Convert::ToString(Matrix2->Rows[i]->Cells[j]->Value), temp);
					a[i][j] = (double)temp;
				}

			double result = 1;
			double save;
			int count = 0;
			int rank = std::fmax(n, m);
			const double EPS = 1E-9;
			std::vector<int> line_used(n);
			for (int i = 0; i < m; ++i) {
				int j;
				for (j = 0; j < n; ++j)
					if (!line_used[j] && (a[j][i]) > 0)
						break;
				if (j == n)
					--rank;
				else {
					line_used[j] = true;
					for (int p = i + 1; p < m; ++p)
						a[j][p] /= a[j][i];
					for (int k = 0; k < n; ++k)
						if (k != j && abs(a[k][i]) > 0)
							for (int p = i + 1; p < m; ++p)
								a[k][p] -= a[j][p] * a[k][i];
				}
			}
			textBox2->Text = System::Convert::ToString(rank);
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		//функция произведения матриця
		ClearAll();
		if (MatrixResult->RowCount != 1 && MatrixResult->ColumnCount != 0)
			ClearResult();

		if (Check_Incorrect(Matrix1) && Check_Incorrect(Matrix2) && Check_Size()) {
			std::vector<std::vector<int>> result(Matrix1->RowCount - 1);
			for (int i = 0; i < Matrix1->RowCount - 1; i++)


				for (int i = 0; i < Matrix1->RowCount - 1; i++)
					for (int j = 0; j < Matrix2->ColumnCount; j++) {
						result[i].push_back(0);
						for (int k = 0; k < Matrix2->RowCount - 1; k++) {
							int temp1, temp2, temp3;
							Int32::TryParse(System::Convert::ToString(Matrix1->Rows[i]->Cells[k]->Value), temp1);
							Int32::TryParse(System::Convert::ToString(Matrix2->Rows[k]->Cells[j]->Value), temp2);
							Int32::TryParse(System::Convert::ToString(result[i][j]), temp3);
							result[i][j] += temp1 * temp2;
						}
					}
			while (MatrixResult->RowCount != Matrix1->RowCount)
				this->MatrixResult->Rows->Add(1);
			while (MatrixResult->ColumnCount != Matrix2->ColumnCount)
			{
				this->MatrixResult->Columns->Add("newCol", "");
				this->MatrixResult->Columns[MatrixResult->ColumnCount - 1]->Width = 35;
			}
			for (int i = 0; i < Matrix1->RowCount - 1; ++i)
				for (int j = 0; j < Matrix2->ColumnCount; ++j)
					MatrixResult->Rows[i]->Cells[j]->Value = result[i][j];
		}
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Check_Size() && Check_Incorrect(Matrix1) && Check_Incorrect(Matrix2)) {
			while (MatrixResult->RowCount != Matrix1->RowCount)
				this->MatrixResult->Rows->Add(1);
			while (MatrixResult->ColumnCount != Matrix1->ColumnCount)
			{
				this->MatrixResult->Columns->Add("newCol", "");
				this->MatrixResult->Columns[MatrixResult->ColumnCount - 1]->Width = 35;
			}
			for (int i = 0; i < Matrix1->RowCount - 1; ++i)
				for (int j = 0; j < Matrix1->ColumnCount; ++j) {
					int temp1, temp2;
					Int32::TryParse(System::Convert::ToString(Matrix1->Rows[i]->Cells[j]->Value), temp1);
					Int32::TryParse(System::Convert::ToString(Matrix2->Rows[i]->Cells[j]->Value), temp2);
					MatrixResult->Rows[i]->Cells[j]->Value = temp1 + temp2;
				}
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Check_Size() && Check_Incorrect(Matrix1) && Check_Incorrect(Matrix2)) {
			while (MatrixResult->RowCount != Matrix1->RowCount)
				this->MatrixResult->Rows->Add(1);
			while (MatrixResult->ColumnCount != Matrix1->ColumnCount)
			{
				this->MatrixResult->Columns->Add("newCol", "");
				this->MatrixResult->Columns[MatrixResult->ColumnCount - 1]->Width = 35;
			}
			for (int i = 0; i < Matrix1->RowCount - 1; ++i)
				for (int j = 0; j < Matrix1->ColumnCount; ++j) {
					int temp1, temp2;
					Int32::TryParse(System::Convert::ToString(Matrix1->Rows[i]->Cells[j]->Value), temp1);
					Int32::TryParse(System::Convert::ToString(Matrix2->Rows[i]->Cells[j]->Value), temp2);
					MatrixResult->Rows[i]->Cells[j]->Value = temp1 - temp2;
				}
		}
	}

	private: System::Void IDButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = this->Matrix1->RowCount;
		int m = this->Matrix1->ColumnCount;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				this->Matrix1->Rows[i]->Cells[j]->Value = "";
			}
		}
		std::vector<std::vector<int>> matr(n);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; ++j) {
				if (i == j)matr[i].push_back(1);
				else matr[i].push_back(0);
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				this->Matrix1->Rows[i]->Cells[j]->Value = matr[i][j];
			}
		}
	}
	private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
		int n = this->Matrix2->RowCount;
		int m = this->Matrix2->ColumnCount;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				this->Matrix2->Rows[i]->Cells[j]->Value = "";
			}
		}
		std::vector<std::vector<int>> matr(n);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; ++j) {
				if (i == j)matr[i].push_back(1);
				else matr[i].push_back(0);
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				this->Matrix2->Rows[i]->Cells[j]->Value = matr[i][j];
			}
		}
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = this->Matrix1->RowCount;
		int m = this->Matrix1->ColumnCount;
		int nvec = this->Vector2->ColumnCount;
		bool f = 1, check1;
		if (nvec != m)f = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				this->Matrix1->Rows[i]->Cells[j]->Value = "";
			}
		}
		std::vector<std::vector<int>> matr(n);
		std::vector<int>vec;

		for (int i = 0; i < nvec; i++) {
			int temp1;
			check1 = Int32::TryParse(System::Convert::ToString(Vector2->Rows[0]->Cells[i]->Value), temp1);

			vec.push_back(temp1);
		}
		for (int i = 0; i < n; i++) {
			if (f && check1) {
				matr[i] = vec;
			}
			else {
				this->errorProvider1->SetError(Matrix1, "No digit in table or troble with dimension");
				break;
			}
		}
		for (int i = 0; i < n; i++) {
			if (!f || !check1) {
				break;
				this->errorProvider1->SetError(Matrix1, "No digit in table or troble with dimension");
			}
			for (int j = 0; j < m; j++) {
				this->Matrix1->Rows[i]->Cells[j]->Value = matr[i][j];
			}
		}
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = this->Matrix2->RowCount;
		int m = this->Matrix2->ColumnCount;
		int nvec = this->Vector2->ColumnCount;
		bool f = 1, check1;
		if (nvec != m)f = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				this->Matrix2->Rows[i]->Cells[j]->Value = "";
			}
		}
		std::vector<std::vector<int>> matr(n);
		std::vector<int>vec;

		for (int i = 0; i < nvec; i++) {
			int temp1;
			check1 = Int32::TryParse(System::Convert::ToString(Vector2->Rows[0]->Cells[i]->Value), temp1);

			vec.push_back(temp1);
		}
		for (int i = 0; i < n; i++) {
			if (f && check1) {
				matr[i] = vec;
			}
			else {
				this->errorProvider1->SetError(Matrix2, "No digit in table or troble with dimension");
				break;
			}
		}
		for (int i = 0; i < n; i++) {
			if (!f || !check1) {
				break;
				this->errorProvider1->SetError(Matrix2, "No digit in table or troble with dimension");
			}
			for (int j = 0; j < m; j++) {
				this->Matrix2->Rows[i]->Cells[j]->Value = matr[i][j];
			}
		}
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		for (int i = 0; i < VectorResult->ColumnCount; i++)
			this->VectorResult->Rows[0]->Cells[i]->Value = "";

		if (Vector1->ColumnCount != Vector2->ColumnCount != 3)
			errorProvider1->SetError(VectorResult, "Размеры векторов не равны");
		else {
			while (this->VectorResult->ColumnCount != this->Vector1->ColumnCount) {
				this->VectorResult->Columns->Add("newCol", "");
				this->VectorResult->Columns[this->VectorResult->ColumnCount - 1]->Width = 35;
			}
			bool check1, check2;
			std::vector<int>vec1, vec2, vec3(3, 0);
			for (int i = 0; i < this->Vector1->ColumnCount; i++) {
				int temp1;
				check1 = Int32::TryParse(System::Convert::ToString(Vector1->Rows[0]->Cells[i]->Value), temp1);
				if (!check1)
					break;
				else vec1.push_back(temp1);

			}
			for (int i = 0; i < this->Vector2->ColumnCount; i++) {
				int temp1;
				check2 = Int32::TryParse(System::Convert::ToString(Vector2->Rows[0]->Cells[i]->Value), temp1);
				if (!check2)
					break;
				else vec2.push_back(temp1);
			}
			if (!check1)
				errorProvider1->SetError(Vector1, "Trouble with vector1");
			if (!check2)
				errorProvider1->SetError(Vector2, "Trouble with vector2");
			if (check1 && check2)
			{
				vec3[0] = vec1[2 - 1] * vec2[3 - 1] - vec1[3 - 1] * vec2[2 - 1];
				vec3[1] = vec1[2 - 1] * vec2[3 - 1] - vec1[1 - 1] * vec2[3 - 1];
				vec3[2] = vec1[1 - 1] * vec2[2 - 1] - vec1[2 - 1] * vec2[0];

				for (int i = 0; i < this->VectorResult->ColumnCount; i++) {
					this->VectorResult->Rows[0]->Cells[i]->Value = vec3[i];

				}
			}
			else {
				while (this->VectorResult->Columns->Count != 1) {
					this->VectorResult->Columns->Remove(this->VectorResult->Columns[this->VectorResult->Columns->Count - 1]);
				}
				this->VectorResult->Rows[0]->Cells[0]->Value = "";
			}
		}
	}
	};
}