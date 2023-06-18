#pragma once

namespace Project1CPlusPlus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Zavdanna1
	/// </summary>
	public ref class Zavdanna0 : public System::Windows::Forms::Form
	{
	public:
		Zavdanna0(void)
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
		~Zavdanna0()
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
		System::ComponentModel::Container^ components;

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
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(403, 262);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Zavdanna0::pictureBox1_Paint);
			// 
			// Zavdanna0
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(428, 287);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Zavdanna0";
			this->Text = L"Zavdanna0";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
		System::Drawing::Pen^ myPen; // ������ ����������
		// �������� �������� ������
		myPen = gcnew System::Drawing::Pen(Color::Red, 2);
		e->Graphics->DrawRectangle(myPen, 10, 10, 100, 100);
		// �������� ������� ������ �������� 4 ������
		myPen->Width = 4;
		myPen->Color = Color::Green;
		e->Graphics->DrawRectangle(myPen, 150, 10, 100, 100);
		// ��������������� ������ ������������� �������, �������� 2 ������
		myPen->Width = 2;
		myPen->Color = Color::Orange;
		myPen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash;
		e->Graphics->DrawRectangle(myPen, 300, 10, 100, 100);

	}
	};
}
