#pragma once

namespace Project1CPlusPlus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Summary for Zavdanna1_1
	/// </summary>
	public ref class Zavdanna1_1 : public System::Windows::Forms::Form
	{
	public:
		Zavdanna1_1(void)
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
		~Zavdanna1_1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(309, 243);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Zavdanna1_1::pictureBox1_Paint);
			// 
			// Zavdanna1_1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(333, 267);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Zavdanna1_1";
			this->Text = L"Zavdanna1_1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
	{
		System::Drawing::Pen^ myPen; // олівець програміста
		myPen = gcnew System::Drawing::Pen(Color::Red, 2); // його параметри
		e->Graphics->DrawRectangle(myPen, 10, 10, 300, 380); // сам квадрат
		HatchBrush^ hBrush = gcnew HatchBrush(HatchStyle::DottedGrid,
		Color::Black, Color::SkyBlue);// параметри клітинок заповнення
		e->Graphics->FillRectangle(hBrush, 10, 10, 300, 380); // розташування заповнення
		System::Drawing::Pen^ myNewPen;
		myNewPen = gcnew System::Drawing::Pen(Color::Black, 3);
		e->Graphics->DrawLine(myNewPen, 30, 20, 150, 100);

	}
	};
}
