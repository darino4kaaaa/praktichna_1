#pragma once
#include "Zavdanna0.h";
#include "Zavdanna1.h";
#include "Zavdanna1_1.h";
#include "Zavdanna1_2.h";
#include "Zavdanna1_3.h";
#include "Zavdanna1_4.h";
#include "Zavdanna1_5.h";
#include "Zavdanna1_6.h";
#include "Zavdanna2.h";
#include "Zavdanna3.h";
#include "Zavdanna4.h";
namespace Project1CPlusPlus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

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

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;

	protected:







	private: System::ComponentModel::IContainer^ components;

	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"������ ������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(97, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 41);
			this->button2->TabIndex = 1;
			this->button2->Text = L"�������� 1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(187, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(79, 42);
			this->button3->TabIndex = 2;
			this->button3->Text = L"��������1.1";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(272, 13);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(79, 42);
			this->button4->TabIndex = 3;
			this->button4->Text = L"��������1.2";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(357, 13);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(79, 42);
			this->button5->TabIndex = 4;
			this->button5->Text = L"��������1.3";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 60);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(79, 42);
			this->button6->TabIndex = 5;
			this->button6->Text = L"��������1.4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(97, 60);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(79, 42);
			this->button7->TabIndex = 6;
			this->button7->Text = L"��������1.5";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(187, 60);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(79, 42);
			this->button8->TabIndex = 7;
			this->button8->Text = L"��������1.6";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(272, 61);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(79, 42);
			this->button9->TabIndex = 8;
			this->button9->Text = L"��������2";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(357, 61);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(79, 42);
			this->button10->TabIndex = 9;
			this->button10->Text = L"��������3";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(187, 108);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(79, 42);
			this->button11->TabIndex = 10;
			this->button11->Text = L"��������4";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(491, 168);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Pracktichna";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		Zavdanna0^ zavd0 = gcnew Zavdanna0();
		zavd0->Show(); // ������� �������� 

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Zavdanna1^ zavd1 = gcnew Zavdanna1();
		zavd1->Show(); // ��������� ���� ��� ��������� 
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Zavdanna1_1^ zavd1_1 = gcnew Zavdanna1_1();
		zavd1_1->Show(); // ��������� ���
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Zavdanna1_2^ zavd1_2 = gcnew Zavdanna1_2();
		zavd1_2->Show(); // ��������� ������������
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Zavdanna1_3^ zavd1_3 = gcnew Zavdanna1_3();
		zavd1_3->Show(); // �������������� ������������
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Zavdanna1_4^ zavd1_4 = gcnew Zavdanna1_4();
		zavd1_4->Show(); // ��������� �����
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Zavdanna1_5^ zavd1_5 = gcnew Zavdanna1_5();
		zavd1_5->Show(); // �������������� ����� 
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Zavdanna1_6^ zavd1_6 = gcnew Zavdanna1_6();
		zavd1_6->Show(); // ��������� �������
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Zavdanna2^ zavd2 = gcnew Zavdanna2();
		zavd2->Show(); // ��������� �������
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Zavdanna3^ zavd3 = gcnew Zavdanna3();
		zavd3->Show(); // ��������� �������
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Zavdanna4^ zavd4 = gcnew Zavdanna4();
		zavd4->Show(); // ����������� 
	}
	};
}
