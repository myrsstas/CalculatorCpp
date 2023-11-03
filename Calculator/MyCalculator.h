#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyCalculator
	/// </summary>
	public ref class MyCalculator : public System::Windows::Forms::Form
	{
	public:
		MyCalculator(void)
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
		~MyCalculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ firstNumberTB;
	private: System::Windows::Forms::TextBox^ secondNumberTB;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ addition;
	private: System::Windows::Forms::Button^ subtraction;
	private: System::Windows::Forms::Button^ multiplication;
	private: System::Windows::Forms::Button^ division;
	private: System::Windows::Forms::TextBox^ resultTB;




	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->firstNumberTB = (gcnew System::Windows::Forms::TextBox());
			this->secondNumberTB = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->addition = (gcnew System::Windows::Forms::Button());
			this->subtraction = (gcnew System::Windows::Forms::Button());
			this->multiplication = (gcnew System::Windows::Forms::Button());
			this->division = (gcnew System::Windows::Forms::Button());
			this->resultTB = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Number: ";
			// 
			// firstNumberTB
			// 
			this->firstNumberTB->Location = System::Drawing::Point(110, 30);
			this->firstNumberTB->Name = L"firstNumberTB";
			this->firstNumberTB->Size = System::Drawing::Size(100, 20);
			this->firstNumberTB->TabIndex = 1;
			// 
			// secondNumberTB
			// 
			this->secondNumberTB->Location = System::Drawing::Point(110, 80);
			this->secondNumberTB->Name = L"secondNumberTB";
			this->secondNumberTB->Size = System::Drawing::Size(100, 20);
			this->secondNumberTB->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Second Number: ";
			// 
			// addition
			// 
			this->addition->Location = System::Drawing::Point(15, 135);
			this->addition->Name = L"addition";
			this->addition->Size = System::Drawing::Size(75, 23);
			this->addition->TabIndex = 4;
			this->addition->Text = L"+";
			this->addition->UseVisualStyleBackColor = true;
			this->addition->Click += gcnew System::EventHandler(this, &MyCalculator::addition_Click);
			// 
			// subtraction
			// 
			this->subtraction->Location = System::Drawing::Point(135, 135);
			this->subtraction->Name = L"subtraction";
			this->subtraction->Size = System::Drawing::Size(75, 23);
			this->subtraction->TabIndex = 5;
			this->subtraction->Text = L"-";
			this->subtraction->UseVisualStyleBackColor = true;
			this->subtraction->Click += gcnew System::EventHandler(this, &MyCalculator::subtraction_Click);
			// 
			// multiplication
			// 
			this->multiplication->Location = System::Drawing::Point(15, 195);
			this->multiplication->Name = L"multiplication";
			this->multiplication->Size = System::Drawing::Size(75, 23);
			this->multiplication->TabIndex = 6;
			this->multiplication->Text = L"x";
			this->multiplication->UseVisualStyleBackColor = true;
			this->multiplication->Click += gcnew System::EventHandler(this, &MyCalculator::multiplication_Click);
			// 
			// division
			// 
			this->division->Location = System::Drawing::Point(135, 195);
			this->division->Name = L"division";
			this->division->Size = System::Drawing::Size(75, 23);
			this->division->TabIndex = 7;
			this->division->Text = L"/";
			this->division->UseVisualStyleBackColor = true;
			this->division->Click += gcnew System::EventHandler(this, &MyCalculator::division_Click);
			// 
			// resultTB
			// 
			this->resultTB->Location = System::Drawing::Point(110, 250);
			this->resultTB->Name = L"resultTB";
			this->resultTB->ReadOnly = true;
			this->resultTB->Size = System::Drawing::Size(100, 20);
			this->resultTB->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 250);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Result :";
			// 
			// MyCalculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(259, 306);
			this->Controls->Add(this->resultTB);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->division);
			this->Controls->Add(this->multiplication);
			this->Controls->Add(this->subtraction);
			this->Controls->Add(this->addition);
			this->Controls->Add(this->secondNumberTB);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->firstNumberTB);
			this->Controls->Add(this->label1);
			this->Name = L"MyCalculator";
			this->Text = L"MyCalculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addition_Click(System::Object^ sender, System::EventArgs^ e) {
		double firstNumber = System::Convert::ToDouble(firstNumberTB->Text);
		double secondNumber = System::Convert::ToDouble(secondNumberTB->Text);
		resultTB->Text = System::Convert::ToString(firstNumber + secondNumber);
	}
private: System::Void subtraction_Click(System::Object^ sender, System::EventArgs^ e) {
	double firstNumber = System::Convert::ToDouble(firstNumberTB->Text);
	double secondNumber = System::Convert::ToDouble(secondNumberTB->Text);
	resultTB->Text = System::Convert::ToString(firstNumber - secondNumber);
}
private: System::Void multiplication_Click(System::Object^ sender, System::EventArgs^ e) {
	double firstNumber = System::Convert::ToDouble(firstNumberTB->Text);
	double secondNumber = System::Convert::ToDouble(secondNumberTB->Text);
	resultTB->Text = System::Convert::ToString(firstNumber * secondNumber);
}
private: System::Void division_Click(System::Object^ sender, System::EventArgs^ e) {
	double firstNumber = System::Convert::ToDouble(firstNumberTB->Text);
	double secondNumber = System::Convert::ToDouble(secondNumberTB->Text);
	if (secondNumber != 0) {

		resultTB->Text = System::Convert::ToString(firstNumber / secondNumber);
	}
	else
	{
		resultTB->Text = "Undefined";
	}

}
};
}
