#pragma once

namespace Project1CPlusPlus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Zavdanna4
	/// </summary>
	public ref class Zavdanna4 : public System::Windows::Forms::Form
	{
	public:
		Zavdanna4(void)
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
		~Zavdanna4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox4;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Red;
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(128, 128);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Green;
			this->pictureBox2->Location = System::Drawing::Point(177, 13);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(128, 128);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Yellow;
			this->pictureBox3->Location = System::Drawing::Point(353, 13);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(128, 128);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Blue;
			this->pictureBox4->Location = System::Drawing::Point(518, 13);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(128, 128);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 148);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 47);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Voice";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Zavdanna4::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(177, 148);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 47);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Voice";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Zavdanna4::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 202);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(128, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"Red - ��������";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(177, 202);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(128, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"Green - ������� ";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(353, 148);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 47);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Voice";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Zavdanna4::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(353, 202);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(128, 20);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"Yellow - ������";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(518, 148);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(128, 47);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Voice";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Zavdanna4::button4_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(518, 201);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(128, 20);
			this->textBox4->TabIndex = 11;
			this->textBox4->Text = L"Blue - ����";
			// 
			// Zavdanna4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(888, 542);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Zavdanna4";
			this->Text = L"Zavdanna4";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Media::SoundPlayer^ player;
		player = gcnew System::Media::SoundPlayer("C:\Red.wav");
		player->Play();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Media::SoundPlayer^ player;
		player = gcnew System::Media::SoundPlayer("C:\Green.wav");
		player->Play();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Media::SoundPlayer^ player;
		player = gcnew System::Media::SoundPlayer("C:\Yellow.wav");
		player->Play();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Media::SoundPlayer^ player;
		player = gcnew System::Media::SoundPlayer("C:\Blue.wav");
		player->Play();
	}
	};
}
