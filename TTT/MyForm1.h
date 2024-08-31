#pragma once

namespace TTT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;








	private: System::Windows::Forms::Button^ button1;





	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;





	private: System::Windows::Forms::Label^ lblplayerO;
	private: System::Windows::Forms::Label^ lblplayerX;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblplayerO = (gcnew System::Windows::Forms::Label());
			this->lblplayerX = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel1->Controls->Add(this->lblplayerO);
			this->panel1->Controls->Add(this->lblplayerX);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(951, 476);
			this->panel1->TabIndex = 0;
			// 
			// lblplayerO
			// 
			this->lblplayerO->Location = System::Drawing::Point(704, 226);
			this->lblplayerO->Name = L"lblplayerO";
			this->lblplayerO->Size = System::Drawing::Size(65, 41);
			this->lblplayerO->TabIndex = 13;
			// 
			// lblplayerX
			// 
			this->lblplayerX->Location = System::Drawing::Point(717, 159);
			this->lblplayerX->Name = L"lblplayerX";
			this->lblplayerX->Size = System::Drawing::Size(65, 41);
			this->lblplayerX->TabIndex = 12;
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel6->Location = System::Drawing::Point(690, 36);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(102, 87);
			this->panel6->TabIndex = 6;
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Location = System::Drawing::Point(559, 226);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(139, 41);
			this->panel5->TabIndex = 5;
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Location = System::Drawing::Point(559, 159);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(139, 41);
			this->panel4->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(498, 470);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->button9);
			this->panel3->Controls->Add(this->button8);
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Location = System::Drawing::Point(79, 86);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(338, 315);
			this->panel3->TabIndex = 0;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::LightGray;
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(240, 224);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(95, 88);
			this->button9->TabIndex = 9;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::LightGray;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(122, 224);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(95, 88);
			this->button8->TabIndex = 8;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightGray;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(3, 224);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(95, 88);
			this->button7->TabIndex = 7;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LightGray;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(240, 113);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(95, 88);
			this->button6->TabIndex = 6;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightGray;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(122, 113);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(95, 88);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightGray;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(3, 113);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(95, 88);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightGray;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(240, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(95, 93);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightGray;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(123, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 93);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightGray;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 93);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(975, 500);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
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
		void score(){
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X") {
				MessageBox::Show("The Winner is Player X","TICTACTOE",MessageBoxButtons::OK,MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerX->Text);
				lblplayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (button4->Text == "X" && button5->Text == "X" && button6->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TICTACTOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerX->Text);
				lblplayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (button3->Text == "X" && button5->Text == "X" && button9->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TICTACTOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerX->Text);
				lblplayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (button3->Text == "X" && button5->Text == "X" && button7->Text == "X") {
				MessageBox::Show("The Winner is Player X", "TICTACTOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerX->Text);
				lblplayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			/////////////////////////////////////////
			if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O") {
				MessageBox::Show("The Winner is Player O", "TICTACTOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerO->Text);
				lblplayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (button4->Text == "O" && button5->Text == "O" && button6->Text == "O") {
				MessageBox::Show("The Winner is Player O", "TICTACTOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerO->Text);
				lblplayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O") {
				MessageBox::Show("The Winner is Player O", "TICTACTOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerO->Text);
				lblplayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (button3->Text == "O" && button5->Text == "O" && button7->Text == "O") {
				MessageBox::Show("The Winner is Player O", "TICTACTOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerO->Text);
				lblplayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (button1->Text == "O" && button5->Text == "O" && button9->Text == "O") {
				MessageBox::Show("The Winner is Player O", "TICTACTOE", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblplayerO->Text);
				lblplayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			

		}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button1->Text = "X";
		checker = true;
	}
	else
	{
		button1->Text = "O";
		checker = false;
	}
	score();
	button1->Enabled = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button2->Text = "X";
		checker = true;
	}
	else
	{
		button2->Text = "O";
		checker = false;
	}
	score();
	button2->Enabled = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button3->Text = "X";
		checker = true;
	}
	else
	{
		button3->Text = "O";
		checker = false;
	}
	score();
	button3->Enabled = false;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button4->Text = "X";
		checker = true;
	}
	else
	{
		button4->Text = "O";
		checker = false;
	}
	score();
	button4->Enabled = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button5->Text = "X";
		checker = true;
	}
	else
	{
		button5->Text = "O";
		checker = false;
	}
	score();
	button5->Enabled = false;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button6->Text = "X";
		checker = true;
	}
	else
	{
		button6->Text = "O";
		checker = false;
	}
	score();
	button6->Enabled = false;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button7->Text = "X";
		checker = true;
	}
	else
	{
		button7->Text = "O";
		checker = false;
	}
	score();
	button7->Enabled = false;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button8->Text = "X";
		checker = true;
	}
	else
	{
		button8->Text = "O";
		checker = false;
	}
	score();
	button8->Enabled = false;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		button9->Text = "X";
		checker = true;
	}
	else
	{
		button9->Text = "O";
		checker = false;
	}
	score();
	button9->Enabled = false;
}
};
}
