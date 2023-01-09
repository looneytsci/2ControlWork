#pragma once
#include "FindWordsService.h"
#include <cctype>

namespace SecondControlWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SearchWordsForm
	/// </summary>
	public ref class SearchWordsForm : public System::Windows::Forms::Form
	{
	public:
		SearchWordsForm(void)
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
		~SearchWordsForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Location = System::Drawing::Point(12, 24);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(712, 25);
			this->label->TabIndex = 0;
			this->label->Text = L"Задание: Найти в тексте слова, которые начинаются с гласной буквы";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Исходный текст:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(654, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Найденные слова:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(17, 119);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(342, 727);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"Но притворитесь! Этот взгляд \nВсе может выразить так чудно! \nАх, обмануть меня не"
				L" трудно!\nЯ сам обманываться рад!";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(645, 119);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(370, 727);
			this->richTextBox2->TabIndex = 4;
			this->richTextBox2->Text = L"";
			this->richTextBox2->Enabled = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(413, 743);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 103);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Поиск слов";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SearchWordsForm::button1_Click);
			// 
			// SearchWordsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1027, 1044);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label);
			this->Name = L"SearchWordsForm";
			this->Text = L"SearchWordsForm";
			this->Load += gcnew System::EventHandler(this, &SearchWordsForm::SearchWordsForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		FindWordsService^ service = gcnew FindWordsService();
		service->setTextForAnalyze(richTextBox1->Text);
		richTextBox2->Text = service->getVowelsStartingWords();
	}

private: System::Void SearchWordsForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
