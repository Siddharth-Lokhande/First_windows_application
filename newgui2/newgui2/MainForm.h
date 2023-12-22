
namespace newgui2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ frst;
	private: System::Windows::Forms::Label^ last;
	protected:



	private: System::Windows::Forms::TextBox^ lastnametext;
	private: System::Windows::Forms::TextBox^ firstnametxt;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ welcome;
	private: System::Windows::Forms::TableLayoutPanel^ btnok;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ clrbtn;
	private: System::Windows::Forms::Label^ label1;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->frst = (gcnew System::Windows::Forms::Label());
			this->last = (gcnew System::Windows::Forms::Label());
			this->lastnametext = (gcnew System::Windows::Forms::TextBox());
			this->firstnametxt = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->welcome = (gcnew System::Windows::Forms::Label());
			this->btnok = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->clrbtn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->btnok->SuspendLayout();
			this->SuspendLayout();
			// 
			// frst
			// 
			this->frst->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->frst->AutoSize = true;
			this->frst->BackColor = System::Drawing::Color::Lime;
			this->frst->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->frst->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->frst->Location = System::Drawing::Point(12, 9);
			this->frst->Name = L"frst";
			this->frst->Size = System::Drawing::Size(162, 33);
			this->frst->TabIndex = 0;
			this->frst->Text = L"FIRST NAME";
			this->frst->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// last
			// 
			this->last->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->last->AutoSize = true;
			this->last->BackColor = System::Drawing::Color::Lime;
			this->last->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->last->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->last->Location = System::Drawing::Point(12, 80);
			this->last->Name = L"last";
			this->last->Size = System::Drawing::Size(155, 33);
			this->last->TabIndex = 2;
			this->last->Text = L"LAST NAME";
			this->last->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lastnametext
			// 
			this->lastnametext->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lastnametext->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->lastnametext->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastnametext->Location = System::Drawing::Point(209, 83);
			this->lastnametext->Name = L"lastnametext";
			this->lastnametext->Size = System::Drawing::Size(230, 30);
			this->lastnametext->TabIndex = 3;
			// 
			// firstnametxt
			// 
			this->firstnametxt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->firstnametxt->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->firstnametxt->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->firstnametxt->Location = System::Drawing::Point(209, 12);
			this->firstnametxt->Name = L"firstnametxt";
			this->firstnametxt->Size = System::Drawing::Size(230, 30);
			this->firstnametxt->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(492, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(323, 325);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// welcome
			// 
			this->welcome->AutoSize = true;
			this->welcome->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->welcome->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->welcome->Location = System::Drawing::Point(12, 170);
			this->welcome->Name = L"welcome";
			this->welcome->Size = System::Drawing::Size(0, 40);
			this->welcome->TabIndex = 6;
			this->welcome->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnok
			// 
			this->btnok->ColumnCount = 2;
			this->btnok->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->btnok->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->btnok->Controls->Add(this->clrbtn, 1, 0);
			this->btnok->Controls->Add(this->button1, 0, 0);
			this->btnok->Location = System::Drawing::Point(12, 269);
			this->btnok->Name = L"btnok";
			this->btnok->RowCount = 1;
			this->btnok->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->btnok->Size = System::Drawing::Size(427, 65);
			this->btnok->TabIndex = 7;
			// 
			// clrbtn
			// 
			this->clrbtn->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->clrbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->clrbtn->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clrbtn->Location = System::Drawing::Point(216, 3);
			this->clrbtn->Name = L"clrbtn";
			this->clrbtn->Size = System::Drawing::Size(207, 46);
			this->clrbtn->TabIndex = 8;
			this->clrbtn->Text = L"CLEAR";
			this->clrbtn->UseVisualStyleBackColor = false;
			this->clrbtn->Click += gcnew System::EventHandler(this, &MainForm::clrbtn_Click);
			// 
			// button1
			// 
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(2);
			this->button1->Size = System::Drawing::Size(207, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label1->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(18, 170);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 35);
			this->label1->TabIndex = 8;
			this->label1->Text = L"label1";
			this->label1->UseMnemonic = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1243, 733);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnok);
			this->Controls->Add(this->welcome);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->firstnametxt);
			this->Controls->Add(this->lastnametext);
			this->Controls->Add(this->last);
			this->Controls->Add(this->frst);
			this->Name = L"MainForm";
			this->Text = L"HELLO!!!";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->btnok->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ firstname = this->firstnametxt->Text;
		String^ lastname = this->lastnametext->Text;
		this->label1->Text = " HELLO " + firstname + " " + lastname;
	}
		   private: System::Void clrbtn_Click(System::Object^ sender, System::EventArgs^ e) {
			   this->label1->Text = "";
			   this->firstnametxt->Text = "";
			   this->lastnametext->Text = "";
		   }
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "";	}

};
}
