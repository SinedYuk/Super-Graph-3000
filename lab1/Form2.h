#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

#include "node.h"


namespace lab1 {
		


	/// <summary>
	/// Сводка для Form1
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//

			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuAddNode;

	private: System::Windows::Forms::ToolStripMenuItem^  deleteNodeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  addLinkToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteLinkToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  editNodeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  grProperties;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  numWeight;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  cbNodes;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  lb5;



	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuAddNode = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteNodeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->addLinkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteLinkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->editNodeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grProperties = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbDepends = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numWeight = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbNodes = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lb5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->grProperties->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numWeight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->editToolStripMenuItem, this->toolStripMenuItem4});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(631, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->newToolStripMenuItem, 
				this->toolStripMenuItem1, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->newToolStripMenuItem->Text = L"&New";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(95, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->exitToolStripMenuItem->Text = L"E&xit";
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->mnuAddNode, 
				this->deleteNodeToolStripMenuItem, this->toolStripMenuItem2, this->addLinkToolStripMenuItem, this->deleteLinkToolStripMenuItem, 
				this->toolStripMenuItem3, this->editNodeToolStripMenuItem});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"&Edit";
			// 
			// mnuAddNode
			// 
			this->mnuAddNode->Name = L"mnuAddNode";
			this->mnuAddNode->Size = System::Drawing::Size(139, 22);
			this->mnuAddNode->Text = L"Add Node";
			this->mnuAddNode->Click += gcnew System::EventHandler(this, &Form1::addNodeToolStripMenuItem_Click);
			// 
			// deleteNodeToolStripMenuItem
			// 
			this->deleteNodeToolStripMenuItem->Name = L"deleteNodeToolStripMenuItem";
			this->deleteNodeToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->deleteNodeToolStripMenuItem->Text = L"Delete Node";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(136, 6);
			// 
			// addLinkToolStripMenuItem
			// 
			this->addLinkToolStripMenuItem->Name = L"addLinkToolStripMenuItem";
			this->addLinkToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->addLinkToolStripMenuItem->Text = L"Add Link";
			// 
			// deleteLinkToolStripMenuItem
			// 
			this->deleteLinkToolStripMenuItem->Name = L"deleteLinkToolStripMenuItem";
			this->deleteLinkToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->deleteLinkToolStripMenuItem->Text = L"Delete Link";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(136, 6);
			// 
			// editNodeToolStripMenuItem
			// 
			this->editNodeToolStripMenuItem->Name = L"editNodeToolStripMenuItem";
			this->editNodeToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->editNodeToolStripMenuItem->Text = L"Edit Node";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutToolStripMenuItem});
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(24, 20);
			this->toolStripMenuItem4->Text = L"&\?";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"&About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// grProperties
			// 
			this->grProperties->BackColor = System::Drawing::Color::White;
			this->grProperties->Controls->Add(this->textBox2);
			this->grProperties->Controls->Add(this->label3);
			this->grProperties->Controls->Add(this->tbDepends);
			this->grProperties->Controls->Add(this->label2);
			this->grProperties->Controls->Add(this->numWeight);
			this->grProperties->Controls->Add(this->label1);
			this->grProperties->Controls->Add(this->cbNodes);
			this->grProperties->Location = System::Drawing::Point(2, 65);
			this->grProperties->Name = L"grProperties";
			this->grProperties->Size = System::Drawing::Size(126, 153);
			this->grProperties->TabIndex = 1;
			this->grProperties->TabStop = false;
			this->grProperties->Text = L"Properties";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 121);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(108, 20);
			this->textBox2->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Dependents:";
			// 
			// tbDepends
			// 
			this->tbDepends->Location = System::Drawing::Point(6, 82);
			this->tbDepends->Name = L"tbDepends";
			this->tbDepends->Size = System::Drawing::Size(108, 20);
			this->tbDepends->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Depends on:";
			// 
			// numWeight
			// 
			this->numWeight->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numWeight->Location = System::Drawing::Point(54, 43);
			this->numWeight->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {20, 0, 0, 0});
			this->numWeight->Name = L"numWeight";
			this->numWeight->Size = System::Drawing::Size(60, 20);
			this->numWeight->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Weight:";
			// 
			// cbNodes
			// 
			this->cbNodes->FormattingEnabled = true;
			this->cbNodes->Location = System::Drawing::Point(6, 19);
			this->cbNodes->Name = L"cbNodes";
			this->cbNodes->Size = System::Drawing::Size(108, 21);
			this->cbNodes->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(2, 220);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 21);
			this->button1->TabIndex = 2;
			this->button1->Text = L"<<<";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(0, 47);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(631, 256);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// lb5
			// 
			this->lb5->AutoSize = true;
			this->lb5->Location = System::Drawing::Point(204, 101);
			this->lb5->Name = L"lb5";
			this->lb5->Size = System::Drawing::Size(35, 13);
			this->lb5->TabIndex = 3;
			this->lb5->Text = L"label4";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(631, 455);
			this->Controls->Add(this->lb5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->grProperties);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Super Graph 3000";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->grProperties->ResumeLayout(false);
			this->grProperties->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numWeight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 
				 MessageBox::Show("Super Graph 3000\nAuthor: Kuyanov Denis\nGroup: PVK-170","About");

			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (grProperties->Visible){
				 button1->Text = ">>>";
				 grProperties->Visible = false;
			 }
			 else
			 {
				 grProperties->Visible = true;
			 }
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 
			 Node * indexNode = new Node;
			 cbNodes->Text = "Вершина - 0";
			 cbNodes->Items->Add( "Вершина - 0" );
			 indexNode->SetWeight(5);
			 numWeight->Value = indexNode->getWeight();
			 tbDepends->Text = "";
			 tbDepends->Enabled = false;
			 
		 }
private: System::Void addNodeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
