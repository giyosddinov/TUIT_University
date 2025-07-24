#pragma once

namespace Project8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(588, 439);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Info;
			this->label1->Location = System::Drawing::Point(59, 157);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"LOGIN : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Info;
			this->label2->Location = System::Drawing::Point(59, 241);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 34);
			this->label2->TabIndex = 1;
			this->label2->Text = L"PAROL : ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(206, 145);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(262, 56);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(206, 229);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(262, 56);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(115, 346);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(352, 69);
			this->button1->TabIndex = 4;
			this->button1->Text = L"SAQLASH";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(583, 436);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ faylNomi = "malumot.txt";
		String^ login = textBox1->Text->Trim();
		String^ parol = textBox2->Text->Trim();

		try {
			// Agar fayl mavjud bo'lmasa, uni yaratib, boshlang'ich ma'lumot yozamiz
			if (!System::IO::File::Exists(faylNomi)) {
				System::IO::StreamWriter^ yozuvchi = gcnew System::IO::StreamWriter(faylNomi, false);
				yozuvchi->WriteLine("user1,pass1");
				yozuvchi->WriteLine("admin,1234");
				yozuvchi->Close();
				MessageBox::Show("Fayl yaratildi va boshlang'ich ma'lumotlar saqlandi.\nIltimos, qayta urinib ko'ring.");
				return; // Fayl yaratildi, endi login tekshirish uchun qayta tugmani bosish kerak
			}

			// Fayl mavjud bo'lsa, login va parolni tekshiramiz
			bool topildi = false;
			array<String^>^ satrlar = System::IO::File::ReadAllLines(faylNomi);

			for each (String ^ satr in satrlar) {
				array<String^>^ parts = satr->Split(',');
				if (parts->Length == 2) {
					String^ fLogin = parts[0]->Trim();
					String^ fParol = parts[1]->Trim();

					if (login->Equals(fLogin, StringComparison::OrdinalIgnoreCase) && parol == fParol) {
						topildi = true;
						break;
					}
				}
			}

			if (topildi) {
				MessageBox::Show("Kirish muvaffaqiyatli!");
			}
			else {
				MessageBox::Show("Login yoki parol noto'g'ri.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Xatolik yuz berdi: " + ex->Message);
		}
	}
};
}
