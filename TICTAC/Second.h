#pragma once

namespace TICTAC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Second
	/// </summary>
	public ref class Second : public System::Windows::Forms::Form
	{
	public:
		Second(void)
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
		~Second()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Panel^ panel4;




	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Panel^ panel5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Second::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PapayaWhip;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(910, 537);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(3, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(506, 537);
			this->panel2->TabIndex = 0;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Control;
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Transparent;
			this->button9->Location = System::Drawing::Point(351, 370);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(147, 146);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Second::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Transparent;
			this->button8->Location = System::Drawing::Point(184, 370);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(147, 146);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Second::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Transparent;
			this->button7->Location = System::Drawing::Point(3, 370);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(147, 146);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Second::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Control;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Transparent;
			this->button6->Location = System::Drawing::Point(351, 193);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(147, 146);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Second::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Transparent;
			this->button5->Location = System::Drawing::Point(184, 193);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(147, 146);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Second::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Transparent;
			this->button4->Location = System::Drawing::Point(3, 193);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(147, 146);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Second::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Transparent;
			this->button3->Location = System::Drawing::Point(351, 18);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 146);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Second::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(184, 18);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 146);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Second::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(3, 18);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 146);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Second::button1_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->button12);
			this->panel3->Controls->Add(this->button11);
			this->panel3->Location = System::Drawing::Point(507, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(400, 534);
			this->panel3->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Location = System::Drawing::Point(155, 236);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(116, 40);
			this->panel5->TabIndex = 6;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Location = System::Drawing::Point(155, 181);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(116, 40);
			this->panel4->TabIndex = 5;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Gabriola", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button12->Location = System::Drawing::Point(239, 361);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(92, 75);
			this->button12->TabIndex = 2;
			this->button12->Text = L"Main Menu";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Second::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Gabriola", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button11->Location = System::Drawing::Point(72, 361);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(92, 75);
			this->button11->TabIndex = 1;
			this->button11->Text = L"NEW GAME";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Second::button11_Click);
			// 
			// Second
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(934, 561);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Second";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TICTACTOE";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		Boolean checker;
		int plusone;
		void Enable_False() {
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			button8->Enabled = false;
			button9->Enabled = false;
		}
		void score() {
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
				Enable_False();
			}
			if (button4->Text == "X" && button6->Text == "X" && button6->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
				Enable_False();
			}
			if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
				Enable_False();
			}
			if (button1->Text == "X" && button5->Text == "X" && button9->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			
				Enable_False();
			}
			if (button3->Text == "X" && button5->Text == "X" && button7->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
				Enable_False();
			}
			if (button1->Text == "X" && button4->Text == "X" && button7->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
				Enable_False();
			}
			if (button2->Text == "X" && button5->Text == "X" && button8->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
				Enable_False();
			}
			if (button3->Text == "X" && button6->Text == "X" && button9->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
				Enable_False();
			}
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
				Enable_False();
			}
			if (button4->Text == "X" && button6->Text == "X" && button6->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
				Enable_False();
			}
			if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
				Enable_False();
			}
			if (button1->Text == "X" && button5->Text == "X" && button9->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			
				Enable_False();
			}
			if (button3->Text == "X" && button5->Text == "X" && button7->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
				Enable_False();
			}
			if (button1->Text == "X" && button4->Text == "X" && button7->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
				Enable_False();
			}
			if (button2->Text == "X" && button5->Text == "X" && button8->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
				Enable_False();
			}
			if (button3->Text == "X" && button6->Text == "X" && button9->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
				Enable_False();
			}
			// FOR O
			if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O") {
				MessageBox::Show("The Winner is Player O", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);

				Enable_False();
			}
			if (button4->Text == "O" && button6->Text == "O" && button6->Text == "O") {
				MessageBox::Show("The Winner is Player O", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);

				Enable_False();
			}
			if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O") {
				MessageBox::Show("The Winner is Player O", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);

				Enable_False();
			}
			if (button1->Text == "O" && button5->Text == "O" && button9->Text == "O") {
				MessageBox::Show("The Winner is Player O", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);

				Enable_False();
			}
			if (button3->Text == "O" && button5->Text == "O" && button7->Text == "O") {
				MessageBox::Show("The Winner is Player O", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);

				Enable_False();
			}
			if (button1->Text == "O" && button4->Text == "O" && button7->Text == "O") {
				MessageBox::Show("The Winner is Player O", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);

				Enable_False();
			}
			if (button2->Text == "O" && button5->Text == "O" && button8->Text == "O") {
				MessageBox::Show("The Winner is Player O", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);

				Enable_False();
			}
			if (button3->Text == "O" && button6->Text == "O" && button9->Text == "O") {
				MessageBox::Show("The Winner is Player O", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);

				Enable_False();
			}
		}
//
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button1->Text = "X";
		checker = true;
}
	else {
		button1->Text = "O";
		checker = false;
	}
	score();
	button1->Enabled = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button2->Text = "X";
		checker = true;
	}
	else {
		button2->Text = "O";
		checker = false;
	}
	score();
	button2->Enabled = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button3->Text = "X";
		checker = true;
	}
	else {
		button3->Text = "O";
		checker = false;
	}
	score();
	button3->Enabled = false;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button4->Text = "X";
		checker = true;
	}
	else {
		button4->Text = "O";
		checker = false;
	}
	score();
	button4->Enabled = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button5->Text = "X";
		checker = true;
	}
	else {
		button5->Text = "O";
		checker = false;
	}
	score();
	button5->Enabled = false;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button6->Text = "X";
		checker = true;
	}
	else {
		button6->Text = "O";
		checker = false;
	}
	score();
	button6->Enabled = false;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button7->Text = "X";
		checker = true;
	}
	else {
		button7->Text = "O";
		checker = false;
	}
	score();
	button7->Enabled = false;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button8->Text = "X";
		checker = true;
	}
	else {
		button8->Text = "O";
		checker = false;
	}
	score();
	button8->Enabled = false;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button9->Text = "X";
		checker = true;
	}
	else {
		button9->Text = "O";
		checker = false;
	}
	score();
	button9->Enabled = false;
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;

	button1->Text = "";
	button2->Text = "";
	button3->Text = "";
	button4->Text = "";
	button5->Text = "";
	button6->Text = "";
	button7->Text = "";
	button8->Text = "";
	button9->Text = "";
}
};
}
