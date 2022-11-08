#pragma once

namespace ñppSpammer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for sUI
	/// </summary>
	public ref class sUI : public System::Windows::Forms::Form
	{
	public:
		sUI(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~sUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonSpam;
	private: System::Windows::Forms::Timer^ Timer;
	private: System::Windows::Forms::RichTextBox^ richTextBox;
	private: System::Windows::Forms::Button^ buttonStop;
	private: System::Windows::Forms::Label^ creatorLabel;





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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(sUI::typeid));
			this->buttonSpam = (gcnew System::Windows::Forms::Button());
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->richTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->buttonStop = (gcnew System::Windows::Forms::Button());
			this->creatorLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonSpam
			// 
			this->buttonSpam->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonSpam->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonSpam->Font = (gcnew System::Drawing::Font(L"Verdana", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSpam->Location = System::Drawing::Point(200, 46);
			this->buttonSpam->Name = L"buttonSpam";
			this->buttonSpam->Size = System::Drawing::Size(83, 29);
			this->buttonSpam->TabIndex = 0;
			this->buttonSpam->Text = L"Spam";
			this->buttonSpam->UseVisualStyleBackColor = false;
			this->buttonSpam->Click += gcnew System::EventHandler(this, &sUI::buttonSpam_Click);
			// 
			// Timer
			// 
			this->Timer->Tick += gcnew System::EventHandler(this, &sUI::Timer_Tick);
			// 
			// richTextBox
			// 
			this->richTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->richTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->richTextBox->ForeColor = System::Drawing::Color::Black;
			this->richTextBox->Location = System::Drawing::Point(12, 12);
			this->richTextBox->Name = L"richTextBox";
			this->richTextBox->Size = System::Drawing::Size(146, 229);
			this->richTextBox->TabIndex = 2;
			this->richTextBox->Text = L" type ur shit here..";
			this->richTextBox->TextChanged += gcnew System::EventHandler(this, &sUI::richTextBox_TextChanged);
			// 
			// buttonStop
			// 
			this->buttonStop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonStop->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonStop->Location = System::Drawing::Point(200, 81);
			this->buttonStop->Name = L"buttonStop";
			this->buttonStop->Size = System::Drawing::Size(83, 29);
			this->buttonStop->TabIndex = 3;
			this->buttonStop->Text = L"Cancel\r\n";
			this->buttonStop->UseVisualStyleBackColor = false;
			this->buttonStop->Click += gcnew System::EventHandler(this, &sUI::button1_Click);
			// 
			// creatorLabel
			// 
			this->creatorLabel->AutoSize = true;
			this->creatorLabel->BackColor = System::Drawing::Color::Transparent;
			this->creatorLabel->ForeColor = System::Drawing::Color::Black;
			this->creatorLabel->Location = System::Drawing::Point(201, 232);
			this->creatorLabel->Name = L"creatorLabel";
			this->creatorLabel->Size = System::Drawing::Size(114, 13);
			this->creatorLabel->TabIndex = 4;
			this->creatorLabel->Text = L"íèêèòà äà ýææè";
			// 
			// sUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(317, 253);
			this->Controls->Add(this->creatorLabel);
			this->Controls->Add(this->buttonStop);
			this->Controls->Add(this->richTextBox);
			this->Controls->Add(this->buttonSpam);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"sUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"$pammer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonSpam_Click(System::Object^ sender, System::EventArgs^ e);
	private: bool spam;
	private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void richTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
