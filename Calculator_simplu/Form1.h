#pragma once
#include <iostream>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ NR1;
	protected:
	private: System::Windows::Forms::Button^ NR2;
	private: System::Windows::Forms::Button^ NR3;
	private: System::Windows::Forms::Button^ NR4;
	private: System::Windows::Forms::Button^ NR5;
	private: System::Windows::Forms::Button^ NR6;
	private: System::Windows::Forms::Button^ NR7;
	private: System::Windows::Forms::Button^ NR8;
	private: System::Windows::Forms::Button^ NR9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ NR0;
	private: System::Windows::Forms::Button^ virgula;
	private: System::Windows::Forms::Button^ egal;
	private: System::Windows::Forms::Button^ adunare;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ inmultire;
	private: System::Windows::Forms::Button^ impartire;
	private: System::Windows::Forms::Button^ clear;

	protected:


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
			this->NR1 = (gcnew System::Windows::Forms::Button());
			this->NR2 = (gcnew System::Windows::Forms::Button());
			this->NR3 = (gcnew System::Windows::Forms::Button());
			this->NR4 = (gcnew System::Windows::Forms::Button());
			this->NR5 = (gcnew System::Windows::Forms::Button());
			this->NR6 = (gcnew System::Windows::Forms::Button());
			this->NR7 = (gcnew System::Windows::Forms::Button());
			this->NR8 = (gcnew System::Windows::Forms::Button());
			this->NR9 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->NR0 = (gcnew System::Windows::Forms::Button());
			this->virgula = (gcnew System::Windows::Forms::Button());
			this->egal = (gcnew System::Windows::Forms::Button());
			this->adunare = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->inmultire = (gcnew System::Windows::Forms::Button());
			this->impartire = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// NR1
			// 
			this->NR1->Location = System::Drawing::Point(26, 109);
			this->NR1->Name = L"NR1";
			this->NR1->Size = System::Drawing::Size(50, 50);
			this->NR1->TabIndex = 0;
			this->NR1->Text = L"1";
			this->NR1->UseVisualStyleBackColor = true;
			this->NR1->Click += gcnew System::EventHandler(this, &Form1::NR1_Click);
			// 
			// NR2
			// 
			this->NR2->Location = System::Drawing::Point(92, 109);
			this->NR2->Name = L"NR2";
			this->NR2->Size = System::Drawing::Size(50, 50);
			this->NR2->TabIndex = 1;
			this->NR2->Text = L"2";
			this->NR2->UseVisualStyleBackColor = true;
			this->NR2->Click += gcnew System::EventHandler(this, &Form1::NR2_Click);
			// 
			// NR3
			// 
			this->NR3->Location = System::Drawing::Point(161, 109);
			this->NR3->Name = L"NR3";
			this->NR3->Size = System::Drawing::Size(50, 50);
			this->NR3->TabIndex = 2;
			this->NR3->Text = L"3";
			this->NR3->UseVisualStyleBackColor = true;
			this->NR3->Click += gcnew System::EventHandler(this, &Form1::NR3_Click);
			// 
			// NR4
			// 
			this->NR4->Location = System::Drawing::Point(26, 177);
			this->NR4->Name = L"NR4";
			this->NR4->Size = System::Drawing::Size(50, 50);
			this->NR4->TabIndex = 3;
			this->NR4->Text = L"4";
			this->NR4->UseVisualStyleBackColor = true;
			this->NR4->Click += gcnew System::EventHandler(this, &Form1::NR4_Click);
			// 
			// NR5
			// 
			this->NR5->Location = System::Drawing::Point(92, 177);
			this->NR5->Name = L"NR5";
			this->NR5->Size = System::Drawing::Size(50, 50);
			this->NR5->TabIndex = 4;
			this->NR5->Text = L"5";
			this->NR5->UseVisualStyleBackColor = true;
			this->NR5->Click += gcnew System::EventHandler(this, &Form1::NR5_Click);
			// 
			// NR6
			// 
			this->NR6->Location = System::Drawing::Point(161, 177);
			this->NR6->Name = L"NR6";
			this->NR6->Size = System::Drawing::Size(50, 50);
			this->NR6->TabIndex = 5;
			this->NR6->Text = L"6";
			this->NR6->UseVisualStyleBackColor = true;
			this->NR6->Click += gcnew System::EventHandler(this, &Form1::NR6_Click);
			// 
			// NR7
			// 
			this->NR7->Location = System::Drawing::Point(26, 240);
			this->NR7->Name = L"NR7";
			this->NR7->Size = System::Drawing::Size(50, 50);
			this->NR7->TabIndex = 6;
			this->NR7->Text = L"7";
			this->NR7->UseVisualStyleBackColor = true;
			this->NR7->Click += gcnew System::EventHandler(this, &Form1::NR7_Click);
			// 
			// NR8
			// 
			this->NR8->Location = System::Drawing::Point(92, 240);
			this->NR8->Name = L"NR8";
			this->NR8->Size = System::Drawing::Size(50, 50);
			this->NR8->TabIndex = 7;
			this->NR8->Text = L"8";
			this->NR8->UseVisualStyleBackColor = true;
			this->NR8->Click += gcnew System::EventHandler(this, &Form1::NR8_Click);
			// 
			// NR9
			// 
			this->NR9->Location = System::Drawing::Point(161, 240);
			this->NR9->Name = L"NR9";
			this->NR9->Size = System::Drawing::Size(50, 50);
			this->NR9->TabIndex = 8;
			this->NR9->Text = L"9";
			this->NR9->UseVisualStyleBackColor = true;
			this->NR9->Click += gcnew System::EventHandler(this, &Form1::NR9_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox1->Location = System::Drawing::Point(27, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(282, 82);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// NR0
			// 
			this->NR0->Location = System::Drawing::Point(26, 306);
			this->NR0->Name = L"NR0";
			this->NR0->Size = System::Drawing::Size(50, 50);
			this->NR0->TabIndex = 10;
			this->NR0->Text = L"0";
			this->NR0->UseVisualStyleBackColor = true;
			this->NR0->Click += gcnew System::EventHandler(this, &Form1::NR0_Click);
			// 
			// virgula
			// 
			this->virgula->Location = System::Drawing::Point(92, 306);
			this->virgula->Name = L"virgula";
			this->virgula->Size = System::Drawing::Size(50, 50);
			this->virgula->TabIndex = 11;
			this->virgula->Text = L",";
			this->virgula->UseVisualStyleBackColor = true;
			this->virgula->Click += gcnew System::EventHandler(this, &Form1::virgula_Click);
			// 
			// egal
			// 
			this->egal->Location = System::Drawing::Point(161, 306);
			this->egal->Name = L"egal";
			this->egal->Size = System::Drawing::Size(50, 50);
			this->egal->TabIndex = 12;
			this->egal->Text = L"=";
			this->egal->UseVisualStyleBackColor = true;
			this->egal->Click += gcnew System::EventHandler(this, &Form1::egal_Click);
			// 
			// adunare
			// 
			this->adunare->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->adunare->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->adunare->Location = System::Drawing::Point(233, 113);
			this->adunare->Name = L"adunare";
			this->adunare->Size = System::Drawing::Size(75, 42);
			this->adunare->TabIndex = 13;
			this->adunare->Text = L"+";
			this->adunare->UseVisualStyleBackColor = false;
			this->adunare->Click += gcnew System::EventHandler(this, &Form1::adunare_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->minus->Location = System::Drawing::Point(233, 177);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(75, 50);
			this->minus->TabIndex = 14;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &Form1::minus_Click);
			// 
			// inmultire
			// 
			this->inmultire->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->inmultire->Location = System::Drawing::Point(233, 240);
			this->inmultire->Name = L"inmultire";
			this->inmultire->Size = System::Drawing::Size(75, 50);
			this->inmultire->TabIndex = 15;
			this->inmultire->Text = L"x";
			this->inmultire->UseVisualStyleBackColor = false;
			this->inmultire->Click += gcnew System::EventHandler(this, &Form1::inmultire_Click);
			// 
			// impartire
			// 
			this->impartire->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->impartire->Location = System::Drawing::Point(233, 306);
			this->impartire->Name = L"impartire";
			this->impartire->Size = System::Drawing::Size(75, 50);
			this->impartire->TabIndex = 16;
			this->impartire->Text = L"/";
			this->impartire->UseVisualStyleBackColor = false;
			this->impartire->Click += gcnew System::EventHandler(this, &Form1::impartire_Click);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::OrangeRed;
			this->clear->Location = System::Drawing::Point(26, 364);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(282, 103);
			this->clear->TabIndex = 17;
			this->clear->Text = L"clear";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &Form1::clear_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(327, 479);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->impartire);
			this->Controls->Add(this->inmultire);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->adunare);
			this->Controls->Add(this->egal);
			this->Controls->Add(this->virgula);
			this->Controls->Add(this->NR0);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->NR9);
			this->Controls->Add(this->NR8);
			this->Controls->Add(this->NR7);
			this->Controls->Add(this->NR6);
			this->Controls->Add(this->NR5);
			this->Controls->Add(this->NR4);
			this->Controls->Add(this->NR3);
			this->Controls->Add(this->NR2);
			this->Controls->Add(this->NR1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: double primnumn = 0;
private: double doinum = 0;
private: String^ operatie = "";

private: System::Void NR1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "1";
}
private: System::Void NR2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "2";
}
private: System::Void NR3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "3";
}
private: System::Void NR4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "4";
}
private: System::Void NR5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "5";
}
private: System::Void NR6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "6";
}
private: System::Void NR7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "7";
}
private: System::Void NR8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "8";
}
private: System::Void NR9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "9";
}
private: System::Void NR0_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "0";
}
private: System::Void virgula_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += ",";
}
private: System::Void egal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") {
		doinum = double::Parse(textBox1->Text);

		if (operatie == "+") {
			textBox1->Text = (primnumn + doinum).ToString();}
		else if (operatie == "-") {
			textBox1->Text = (primnumn - doinum).ToString();}
		else if (operatie == "*") {
			textBox1->Text = (primnumn * doinum).ToString();}
		else if (operatie == "/" ) {
			textBox1->Text = (primnumn / doinum).ToString();
		 
		}
	}
}
private: System::Void adunare_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") {
		primnumn = double::Parse(textBox1->Text);
		textBox1->Text = "";
		operatie = "+";
		textBox1->Text = "";

	}
}
private: System::Void inmultire_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") {
		primnumn = double::Parse(textBox1->Text);
		textBox1->Text = "";
		operatie = "*";
		textBox1->Text = "";
	}
}
private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") {
		primnumn = double::Parse(textBox1->Text);
		textBox1->Text = "";
		operatie = "-";
		textBox1->Text = "";
	}
}
private: System::Void impartire_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") {
		primnumn = double::Parse(textBox1->Text);
		textBox1->Text = "";
		operatie = "/";
		textBox1->Text = "";

	}
}
private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
