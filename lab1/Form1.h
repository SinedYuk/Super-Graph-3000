#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

#include "graph.h"
//#include "node.h"

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
	protected: 
// Index node declaration
	private: Graph * oGraph;
			 int CellSize;
			 int CpuCount;
			 int StepSize;

	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteNodeToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  deleteLinkToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  editNodeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSplitButton^  tlCalculate;
	private: System::Windows::Forms::ToolStripMenuItem^  quickCalculationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  stepbyStepCalculationToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  grProperties;
	private: System::Windows::Forms::TextBox^  tbDepends;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::CheckedListBox^  chlDependents;

	private: System::Windows::Forms::CheckedListBox^  chlDepends;

	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;


	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addNodeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteNodeToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^  addLinkToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteLinkToolStripMenuItem1;
	private: System::Windows::Forms::Button^  btnCreateFile;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  numFNWeight;

	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuAbout;
	private: System::Windows::Forms::NumericUpDown^  numWeight;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  cbNodes;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnToggleProp;
	private: System::Windows::Forms::PictureBox^  pbGraph;


	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  tlNewFile;
	private: System::Windows::Forms::ToolStripButton^  tlOpenFile;
	private: System::Windows::Forms::ToolStripButton^  tlSaveFile;



	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  tlAddNode;
	private: System::Windows::Forms::ToolStripButton^  tlDeleteNode;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^  tlAddLink;

	private: System::Windows::Forms::ToolStripButton^  tlDeleteLink;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;

	private: System::Windows::Forms::PictureBox^  pbCpu;

	private: System::Windows::Forms::Button^  btnDefault;
	private: System::Windows::Forms::Button^  btnApply;
	private: System::Windows::Forms::GroupBox^  gpNewFile;
	private: System::Windows::Forms::MenuStrip^  menuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuExit;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteNodeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteLinkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->editNodeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grProperties = (gcnew System::Windows::Forms::GroupBox());
			this->chlDependents = (gcnew System::Windows::Forms::CheckedListBox());
			this->chlDepends = (gcnew System::Windows::Forms::CheckedListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnDefault = (gcnew System::Windows::Forms::Button());
			this->btnApply = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numWeight = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbNodes = (gcnew System::Windows::Forms::ComboBox());
			this->btnToggleProp = (gcnew System::Windows::Forms::Button());
			this->pbGraph = (gcnew System::Windows::Forms::PictureBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->tlNewFile = (gcnew System::Windows::Forms::ToolStripButton());
			this->tlOpenFile = (gcnew System::Windows::Forms::ToolStripButton());
			this->tlSaveFile = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tlAddNode = (gcnew System::Windows::Forms::ToolStripButton());
			this->tlDeleteNode = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tlAddLink = (gcnew System::Windows::Forms::ToolStripButton());
			this->tlDeleteLink = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tlCalculate = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->quickCalculationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stepbyStepCalculationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->pbCpu = (gcnew System::Windows::Forms::PictureBox());
			this->gpNewFile = (gcnew System::Windows::Forms::GroupBox());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numFNWeight = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnCreateFile = (gcnew System::Windows::Forms::Button());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->mnuExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addNodeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteNodeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->addLinkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteLinkToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuAbout = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->grProperties->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numWeight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbGraph))->BeginInit();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbCpu))->BeginInit();
			this->gpNewFile->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numFNWeight))->BeginInit();
			this->menuStrip->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			this->SuspendLayout();
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
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// deleteNodeToolStripMenuItem
			// 
			this->deleteNodeToolStripMenuItem->Name = L"deleteNodeToolStripMenuItem";
			this->deleteNodeToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			// 
			// deleteLinkToolStripMenuItem
			// 
			this->deleteLinkToolStripMenuItem->Name = L"deleteLinkToolStripMenuItem";
			this->deleteLinkToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(6, 6);
			// 
			// editNodeToolStripMenuItem
			// 
			this->editNodeToolStripMenuItem->Name = L"editNodeToolStripMenuItem";
			this->editNodeToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(32, 19);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			// 
			// grProperties
			// 
			this->grProperties->BackColor = System::Drawing::Color::White;
			this->grProperties->Controls->Add(this->chlDependents);
			this->grProperties->Controls->Add(this->chlDepends);
			this->grProperties->Controls->Add(this->label5);
			this->grProperties->Controls->Add(this->btnDefault);
			this->grProperties->Controls->Add(this->btnApply);
			this->grProperties->Controls->Add(this->label3);
			this->grProperties->Controls->Add(this->label2);
			this->grProperties->Controls->Add(this->numWeight);
			this->grProperties->Controls->Add(this->label1);
			this->grProperties->Controls->Add(this->cbNodes);
			this->grProperties->Location = System::Drawing::Point(2, 70);
			this->grProperties->Name = L"grProperties";
			this->grProperties->Size = System::Drawing::Size(126, 290);
			this->grProperties->TabIndex = 1;
			this->grProperties->TabStop = false;
			this->grProperties->Text = L"Properties";
			// 
			// chlDependents
			// 
			this->chlDependents->FormattingEnabled = true;
			this->chlDependents->Location = System::Drawing::Point(10, 178);
			this->chlDependents->Name = L"chlDependents";
			this->chlDependents->Size = System::Drawing::Size(110, 79);
			this->chlDependents->TabIndex = 16;
			// 
			// chlDepends
			// 
			this->chlDepends->FormattingEnabled = true;
			this->chlDepends->Location = System::Drawing::Point(9, 82);
			this->chlDepends->Name = L"chlDepends";
			this->chlDepends->Size = System::Drawing::Size(110, 79);
			this->chlDepends->TabIndex = 15;
			this->chlDepends->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::chlDepends_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Node:";
			// 
			// btnDefault
			// 
			this->btnDefault->Enabled = false;
			this->btnDefault->Location = System::Drawing::Point(62, 261);
			this->btnDefault->Name = L"btnDefault";
			this->btnDefault->Size = System::Drawing::Size(52, 23);
			this->btnDefault->TabIndex = 8;
			this->btnDefault->Text = L"Default";
			this->btnDefault->UseVisualStyleBackColor = true;
			this->btnDefault->Click += gcnew System::EventHandler(this, &Form1::btnDefault_Click);
			// 
			// btnApply
			// 
			this->btnApply->Enabled = false;
			this->btnApply->Location = System::Drawing::Point(6, 261);
			this->btnApply->Name = L"btnApply";
			this->btnApply->Size = System::Drawing::Size(50, 23);
			this->btnApply->TabIndex = 7;
			this->btnApply->Text = L"Apply";
			this->btnApply->UseVisualStyleBackColor = true;
			this->btnApply->Click += gcnew System::EventHandler(this, &Form1::btnApply_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Dependents:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Depends on:";
			// 
			// numWeight
			// 
			this->numWeight->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numWeight->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->numWeight->Location = System::Drawing::Point(54, 45);
			this->numWeight->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {20, 0, 0, 0});
			this->numWeight->Name = L"numWeight";
			this->numWeight->Size = System::Drawing::Size(60, 20);
			this->numWeight->TabIndex = 2;
			this->numWeight->ValueChanged += gcnew System::EventHandler(this, &Form1::numWeight_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Weight:";
			// 
			// cbNodes
			// 
			this->cbNodes->FormattingEnabled = true;
			this->cbNodes->Location = System::Drawing::Point(42, 18);
			this->cbNodes->Name = L"cbNodes";
			this->cbNodes->Size = System::Drawing::Size(72, 21);
			this->cbNodes->TabIndex = 0;
			this->cbNodes->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::cbNodes_SelectedIndexChanged);
			// 
			// btnToggleProp
			// 
			this->btnToggleProp->BackColor = System::Drawing::Color::White;
			this->btnToggleProp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnToggleProp->FlatAppearance->BorderSize = 0;
			this->btnToggleProp->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnToggleProp->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->btnToggleProp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnToggleProp->ForeColor = System::Drawing::Color::White;
			this->btnToggleProp->ImageKey = L"(отсутствует)";
			this->btnToggleProp->Location = System::Drawing::Point(1, 50);
			this->btnToggleProp->Name = L"btnToggleProp";
			this->btnToggleProp->Size = System::Drawing::Size(19, 20);
			this->btnToggleProp->TabIndex = 7;
			this->btnToggleProp->UseVisualStyleBackColor = false;
			this->btnToggleProp->Click += gcnew System::EventHandler(this, &Form1::btnToggleProp_Click);
			// 
			// pbGraph
			// 
			this->pbGraph->BackColor = System::Drawing::Color::White;
			this->pbGraph->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pbGraph->Location = System::Drawing::Point(0, 49);
			this->pbGraph->Name = L"pbGraph";
			this->pbGraph->Size = System::Drawing::Size(917, 328);
			this->pbGraph->TabIndex = 2;
			this->pbGraph->TabStop = false;
			// 
			// toolStrip1
			// 
			this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {this->tlNewFile, this->tlOpenFile, 
				this->tlSaveFile, this->toolStripSeparator1, this->tlAddNode, this->tlDeleteNode, this->toolStripSeparator2, this->tlAddLink, 
				this->tlDeleteLink, this->toolStripSeparator3, this->tlCalculate, this->toolStripButton1});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(917, 25);
			this->toolStrip1->TabIndex = 4;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::toolStrip1_ItemClicked);
			// 
			// tlNewFile
			// 
			this->tlNewFile->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tlNewFile->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tlNewFile.Image")));
			this->tlNewFile->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tlNewFile->Name = L"tlNewFile";
			this->tlNewFile->Size = System::Drawing::Size(23, 22);
			this->tlNewFile->Text = L"toolStripButton1";
			this->tlNewFile->ToolTipText = L"New File";
			// 
			// tlOpenFile
			// 
			this->tlOpenFile->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tlOpenFile->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tlOpenFile.Image")));
			this->tlOpenFile->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tlOpenFile->Name = L"tlOpenFile";
			this->tlOpenFile->Size = System::Drawing::Size(23, 22);
			this->tlOpenFile->Text = L"toolStripButton2";
			this->tlOpenFile->ToolTipText = L"Open File";
			// 
			// tlSaveFile
			// 
			this->tlSaveFile->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tlSaveFile->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tlSaveFile.Image")));
			this->tlSaveFile->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tlSaveFile->Name = L"tlSaveFile";
			this->tlSaveFile->Size = System::Drawing::Size(23, 22);
			this->tlSaveFile->Text = L"toolStripButton3";
			this->tlSaveFile->ToolTipText = L"Save File";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// tlAddNode
			// 
			this->tlAddNode->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tlAddNode->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tlAddNode.Image")));
			this->tlAddNode->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tlAddNode->Name = L"tlAddNode";
			this->tlAddNode->Size = System::Drawing::Size(23, 22);
			this->tlAddNode->Text = L"toolStripButton4";
			this->tlAddNode->ToolTipText = L"Add Node";
			this->tlAddNode->Click += gcnew System::EventHandler(this, &Form1::tlAddNode_Click);
			// 
			// tlDeleteNode
			// 
			this->tlDeleteNode->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tlDeleteNode->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tlDeleteNode.Image")));
			this->tlDeleteNode->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tlDeleteNode->Name = L"tlDeleteNode";
			this->tlDeleteNode->Size = System::Drawing::Size(23, 22);
			this->tlDeleteNode->Text = L"toolStripButton5";
			this->tlDeleteNode->ToolTipText = L"Delete Node";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// tlAddLink
			// 
			this->tlAddLink->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tlAddLink->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tlAddLink.Image")));
			this->tlAddLink->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tlAddLink->Name = L"tlAddLink";
			this->tlAddLink->Size = System::Drawing::Size(23, 22);
			this->tlAddLink->Text = L"toolStripButton1";
			this->tlAddLink->ToolTipText = L"Add Link";
			// 
			// tlDeleteLink
			// 
			this->tlDeleteLink->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tlDeleteLink->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tlDeleteLink.Image")));
			this->tlDeleteLink->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tlDeleteLink->Name = L"tlDeleteLink";
			this->tlDeleteLink->Size = System::Drawing::Size(23, 22);
			this->tlDeleteLink->Text = L"toolStripButton2";
			this->tlDeleteLink->ToolTipText = L"Delete Link";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// tlCalculate
			// 
			this->tlCalculate->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tlCalculate->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->quickCalculationToolStripMenuItem, 
				this->stepbyStepCalculationToolStripMenuItem});
			this->tlCalculate->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tlCalculate.Image")));
			this->tlCalculate->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tlCalculate->Name = L"tlCalculate";
			this->tlCalculate->Size = System::Drawing::Size(32, 22);
			this->tlCalculate->Text = L"toolStripButton1";
			this->tlCalculate->ToolTipText = L"Calculate";
			this->tlCalculate->Click += gcnew System::EventHandler(this, &Form1::tlCalculate_Click);
			this->tlCalculate->ButtonClick += gcnew System::EventHandler(this, &Form1::tlCalculate_ButtonClick);
			// 
			// quickCalculationToolStripMenuItem
			// 
			this->quickCalculationToolStripMenuItem->Name = L"quickCalculationToolStripMenuItem";
			this->quickCalculationToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->quickCalculationToolStripMenuItem->Text = L"Quick Calculation";
			this->quickCalculationToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::quickCalculationToolStripMenuItem_Click);
			// 
			// stepbyStepCalculationToolStripMenuItem
			// 
			this->stepbyStepCalculationToolStripMenuItem->Name = L"stepbyStepCalculationToolStripMenuItem";
			this->stepbyStepCalculationToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->stepbyStepCalculationToolStripMenuItem->Text = L"Step-by-Step Calculation";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"TestToggle";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
			// 
			// pbCpu
			// 
			this->pbCpu->BackColor = System::Drawing::Color::White;
			this->pbCpu->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pbCpu->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pbCpu.Image")));
			this->pbCpu->InitialImage = nullptr;
			this->pbCpu->Location = System::Drawing::Point(0, 383);
			this->pbCpu->Name = L"pbCpu";
			this->pbCpu->Size = System::Drawing::Size(917, 202);
			this->pbCpu->TabIndex = 5;
			this->pbCpu->TabStop = false;
			// 
			// gpNewFile
			// 
			this->gpNewFile->BackColor = System::Drawing::Color::White;
			this->gpNewFile->Controls->Add(this->btnExit);
			this->gpNewFile->Controls->Add(this->label4);
			this->gpNewFile->Controls->Add(this->numFNWeight);
			this->gpNewFile->Controls->Add(this->btnCreateFile);
			this->gpNewFile->Location = System::Drawing::Point(284, 136);
			this->gpNewFile->Name = L"gpNewFile";
			this->gpNewFile->Size = System::Drawing::Size(175, 86);
			this->gpNewFile->TabIndex = 6;
			this->gpNewFile->TabStop = false;
			this->gpNewFile->Text = L"New File";
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(95, 56);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(61, 23);
			this->btnExit->TabIndex = 3;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Form1::btnExit_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 33);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Weight of first node:";
			// 
			// numFNWeight
			// 
			this->numFNWeight->Location = System::Drawing::Point(115, 30);
			this->numFNWeight->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {20, 0, 0, 0});
			this->numFNWeight->Name = L"numFNWeight";
			this->numFNWeight->Size = System::Drawing::Size(52, 20);
			this->numFNWeight->TabIndex = 1;
			this->numFNWeight->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// btnCreateFile
			// 
			this->btnCreateFile->Location = System::Drawing::Point(19, 56);
			this->btnCreateFile->Name = L"btnCreateFile";
			this->btnCreateFile->Size = System::Drawing::Size(61, 23);
			this->btnCreateFile->TabIndex = 0;
			this->btnCreateFile->Text = L"Create";
			this->btnCreateFile->UseVisualStyleBackColor = true;
			this->btnCreateFile->Click += gcnew System::EventHandler(this, &Form1::btnCreateFile_Click);
			// 
			// menuStrip
			// 
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem1, 
				this->editToolStripMenuItem, this->toolStripMenuItem2});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(917, 24);
			this->menuStrip->TabIndex = 8;
			this->menuStrip->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem1
			// 
			this->fileToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->newToolStripMenuItem1, 
				this->toolStripMenuItem5, this->mnuExit});
			this->fileToolStripMenuItem1->Name = L"fileToolStripMenuItem1";
			this->fileToolStripMenuItem1->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem1->Text = L"File";
			// 
			// newToolStripMenuItem1
			// 
			this->newToolStripMenuItem1->Name = L"newToolStripMenuItem1";
			this->newToolStripMenuItem1->Size = System::Drawing::Size(98, 22);
			this->newToolStripMenuItem1->Text = L"New";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(95, 6);
			// 
			// mnuExit
			// 
			this->mnuExit->Name = L"mnuExit";
			this->mnuExit->Size = System::Drawing::Size(98, 22);
			this->mnuExit->Text = L"Exit";
			this->mnuExit->Click += gcnew System::EventHandler(this, &Form1::mnuExit_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->addNodeToolStripMenuItem, 
				this->deleteNodeToolStripMenuItem1, this->toolStripMenuItem6, this->addLinkToolStripMenuItem, this->deleteLinkToolStripMenuItem1});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// addNodeToolStripMenuItem
			// 
			this->addNodeToolStripMenuItem->Name = L"addNodeToolStripMenuItem";
			this->addNodeToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->addNodeToolStripMenuItem->Text = L"Add Node";
			this->addNodeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::addNodeToolStripMenuItem_Click_1);
			// 
			// deleteNodeToolStripMenuItem1
			// 
			this->deleteNodeToolStripMenuItem1->Name = L"deleteNodeToolStripMenuItem1";
			this->deleteNodeToolStripMenuItem1->Size = System::Drawing::Size(139, 22);
			this->deleteNodeToolStripMenuItem1->Text = L"Delete Node";
			this->deleteNodeToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::deleteNodeToolStripMenuItem1_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(136, 6);
			// 
			// addLinkToolStripMenuItem
			// 
			this->addLinkToolStripMenuItem->Name = L"addLinkToolStripMenuItem";
			this->addLinkToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->addLinkToolStripMenuItem->Text = L"Add Link";
			// 
			// deleteLinkToolStripMenuItem1
			// 
			this->deleteLinkToolStripMenuItem1->Name = L"deleteLinkToolStripMenuItem1";
			this->deleteLinkToolStripMenuItem1->Size = System::Drawing::Size(139, 22);
			this->deleteLinkToolStripMenuItem1->Text = L"Delete Link";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->mnuAbout});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(24, 20);
			this->toolStripMenuItem2->Text = L"\?";
			// 
			// mnuAbout
			// 
			this->mnuAbout->Name = L"mnuAbout";
			this->mnuAbout->Size = System::Drawing::Size(107, 22);
			this->mnuAbout->Text = L"About";
			this->mnuAbout->Click += gcnew System::EventHandler(this, &Form1::mnuAbout_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(178, 52);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 9;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(178, 70);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 10;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(178, 88);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 20);
			this->numericUpDown3->TabIndex = 12;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(178, 110);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 20);
			this->numericUpDown4->TabIndex = 13;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(178, 129);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(120, 20);
			this->numericUpDown5->TabIndex = 14;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(917, 584);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->gpNewFile);
			this->Controls->Add(this->pbCpu);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip);
			this->Controls->Add(this->btnToggleProp);
			this->Controls->Add(this->grProperties);
			this->Controls->Add(this->pbGraph);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Super Graph 3000";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->grProperties->ResumeLayout(false);
			this->grProperties->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numWeight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbGraph))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbCpu))->EndInit();
			this->gpNewFile->ResumeLayout(false);
			this->gpNewFile->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numFNWeight))->EndInit();
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {			 			 
			 // Interface Initialization
			 Image ^iDock = Image::FromFile("./down.png");
		 	 btnToggleProp->Image = iDock;
			 grProperties->Visible = false;
			 gpNewFile->Visible = true;
			 btnToggleProp->Enabled = false;
			 toolStrip1->Enabled = false;
			 editToolStripMenuItem->Enabled = false;
			 btnApply->Enabled = false;
			 btnDefault->Enabled = false;

			 // Drawing
			 Color ^col = gcnew Color();
			 Pen ^pen = gcnew Pen(col->Red);
			 Graphics ^cGraph = this->CreateGraphics();
			 cGraph->DrawEllipse(pen,150,320,15,15);
			 this->Refresh();			 
		 }

private: System::Void addNodeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void toolStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }

private: System::Void numWeight_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 btnApply->Enabled = true;
			 btnDefault->Enabled = true;
		 }

private: System::Void btnDefault_Click(System::Object^  sender, System::EventArgs^  e) {
			 numWeight->Value = oGraph->GetWeight( cbNodes->SelectedIndex );
			 btnApply->Enabled = false;
			 btnDefault->Enabled = false;

			 // Скопировать часть кода из cbNodes.ChangeSelection
		 }

//private: System::Void tbDepends_TextChanged(System::Object^  sender, System::EventArgs^  e) {
//			 btnApply->Enabled = true;
//			 btnDefault->Enabled = true;
//		 }
//private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
//			 btnApply->Enabled = true;
//			 btnDefault->Enabled = true;
//		 }
private: System::Void btnApply_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 oGraph->SetItem( cbNodes->SelectedIndex, (int)numWeight->Value );
			 
			 // Apply a Parents List
			 if ( cbNodes->SelectedIndex > 0 )
			 {
				 ApplyParents();
				 //int * TempPar = oGraph->GetParents ( cbNodes->SelectedIndex );
				 //numericUpDown5->Value = TempPar[0];
			 }

			 DrawGraph();
			 btnApply->Enabled = false;
			 btnDefault->Enabled = false;
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void btnToggleProp_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (grProperties->Visible){
				 Image ^iDock = Image::FromFile("./down.png");
				 btnToggleProp->Image = iDock;
				 grProperties->Visible = false;
			 }
			 else
			 {
				 Image ^iDock = Image::FromFile("./up.png");
				 btnToggleProp->Image = iDock;
				 grProperties->Visible = true;
			 }
		 }
 
private: System::Void mnuExit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void mnuAbout_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Super Graph 3000\nAuthor: Kuyanov Denis\nGroup: PVK-170","About");
		 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void btnCreateFile_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Interface
			 editToolStripMenuItem->Enabled = true;
			 gpNewFile->Visible = false;
			 btnToggleProp->Enabled = true;
			 toolStrip1->Enabled = true;

			 // Create Graph
			 oGraph = new Graph(0);
			 oGraph->SetItem(0,(int(numFNWeight->Value)));
			 numWeight->Value = oGraph->GetWeight (0);
			 cbNodes->Text = "1" ;
			 cbNodes->Items->Add( "1" );
			 chlDepends->Text = "";
			 chlDepends->Items->Add ( "Index",0 );
			 chlDepends->Enabled = false;
			 chlDependents->Items->Add( "Index",0);
			 btnApply->Enabled = false;
			 btnDefault->Enabled = false;
		 }
private: System::Void addNodeToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 oGraph->AddItem(0);

			 //numWeight->Value = oGraph->GetWeight( cbNodes->SelectedIndex );
			 //chlDepends->Enabled = true;
			 chlDepends->Items->Add( oGraph->GetCount(), false);
			 chlDependents->Items->Add( oGraph->GetCount(), false);
			 cbNodes->Items->Add( oGraph->GetCount() );
			 cbNodes->SelectedItem = oGraph->GetCount();
			//// Test information
			 numericUpDown1->Value = oGraph->GetWeight(0);
			 numericUpDown2->Value = oGraph->GetWeight(1);
			 numericUpDown3->Value = oGraph->GetWeight(2);
			 numericUpDown4->Value = oGraph->GetWeight(3);

}
private: System::Void cbNodes_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
					 
			 if ( cbNodes->SelectedIndex  == 0 )
			 {
				 chlDepends->Enabled = false;
				 deleteNodeToolStripMenuItem1->Enabled = false;
				 
			 }
			 else 
			 {
				 chlDepends->Enabled = true;
				 deleteNodeToolStripMenuItem1->Enabled = true;			 
			 }

			 numWeight->Value = oGraph->GetWeight ( cbNodes->SelectedIndex ); 
			 btnApply->Enabled = false;
			 btnDefault->Enabled = false;	
			 for ( int i = 0; i < cbNodes->Items->Count ; ++i )
			 {
				 chlDepends->SetItemChecked ( i , false );
			 }
			 // Parents change
			 if ( cbNodes->SelectedIndex )
			 {
				 int * TempParents = oGraph->GetParents( cbNodes->SelectedIndex ) ;//new int [ oGraph->GetParentsCount( cbNodes->SelectedIndex ) ] ;
				 for ( int i = 1; i <= TempParents[0]; ++i)
				 {
					 chlDepends->SetItemChecked ( TempParents[i], true );
				 }
			 }
			 //////////////////////////////////////////////////
			 for ( int i = 0; i < cbNodes->Items->Count ; ++i )
			 {
				 chlDependents->SetItemChecked ( i , false );
			 }

			int * TempChilds = oGraph->GetChilds( cbNodes->SelectedIndex ) ;//new int [ oGraph->GetParentsCount( cbNodes->SelectedIndex ) ] ;
			for ( int i = 1; i <= TempChilds[0]; ++i)
			{
				chlDependents->SetItemChecked ( TempChilds[i], true );
			}

		 }
private: System::Void tlAddNode_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void chlDepends_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 btnApply->Enabled = true;
			 btnDefault->Enabled = true;
		 }
private: void DrawGraph()
{
	 pbGraph->Refresh();
	 oGraph->ClearXY();
	 if ( grProperties->Visible == true )
	 {
		 numericUpDown5->Value = oGraph->PrepareToDrawGraph( 0, 0, 20, pbGraph->Width );
	 }
	 else
	 {
 		 numericUpDown5->Value = oGraph->PrepareToDrawGraph( 0, 0, 20, pbGraph->Width - grProperties->Width - 30 );
	 }
	 oGraph->DoUnready();	 
	 QuickDraw();
}
private: void QuickDraw()
 {
	 Graphics  ^cGraph = pbGraph->CreateGraphics();
	 Color  ^col = gcnew Color();
	 Pen  ^pen = gcnew Pen( col->Black, 1);
	 System::Drawing::Font ^font = gcnew System::Drawing::Font( "Arial",12);
     SolidBrush^ brush = gcnew SolidBrush( Color::Black );
	for ( int i = 0; i < oGraph->GetCount(); ++i )
	 {
		 cGraph->DrawEllipse(pen,oGraph->GetX(i), oGraph->GetY(i),20,20);
		 cGraph->DrawString( (i+1).ToString()  , font,brush,(float)oGraph->GetX(i),(float)oGraph->GetY(i));
	 }
 }
private: void ApplyParents()
		 {
			 // Delete this item from unchecked parents
			 chlDepends->SetItemChecked ( cbNodes->SelectedIndex, false );
				 
			 int * Parents4Check = oGraph->GetParents( cbNodes->SelectedIndex );	 
			 for ( int i = 1; i <= Parents4Check[0]; ++i)		 
			 {
				 if ( !chlDepends->GetItemChecked( Parents4Check[i] ) )
				 {
					 oGraph->DeleteFromParent( cbNodes->SelectedIndex, Parents4Check[i] );
				 }
			 }
			 
			 // Link this item with parents and parents with this item
			 int * ParentsTemp = new int [chlDepends->CheckedItems->Count + 1];
			 int ParentsCounter = 0;
			 for ( int i = 0; i < chlDepends->Items->Count; ++i)
			 {
				 if ( chlDepends->GetItemChecked(i) )
				 {
					 ++ParentsCounter;
					 ParentsTemp[ParentsCounter] = i;
					 if ( !oGraph->isChildExist( i,cbNodes->SelectedIndex ) )
					 {
						 oGraph->AddChild( i, cbNodes->SelectedIndex ); 			
					 }
				 }
				 
			 }
			 ParentsTemp[0] = ParentsCounter;
			 oGraph->AddParents( cbNodes->SelectedIndex, ParentsTemp );
		 }
private: void DrawCpu( int ProcessorsCount )
		 {
			CpuCount = ProcessorsCount;
			CellSize = (pbCpu->Height - 50) / CpuCount;
			Graphics  ^cGraph = pbCpu->CreateGraphics();
			Color  ^col = gcnew Color();
			Pen  ^pen = gcnew Pen( col->Black, 1);
			cGraph->DrawLine (pen, 25,10,25,pbCpu->Height - 25);
			cGraph->DrawLine (pen, 25,pbCpu->Height - 25, pbCpu->Width - 20, pbCpu->Height - 25);
			for ( int i = 1; i <= CpuCount; ++i )
			{
				cGraph->DrawLine (pen, 20,pbCpu->Height - 25 - CellSize*i,30,pbCpu->Height - 25 - CellSize*i);
			}

		 }
private: void DrawCell( int Number, int Cpu, int Step, int Weight )
		 {
			StepSize = 30;
			Graphics  ^cGraph = pbCpu->CreateGraphics();
			Color  ^col = gcnew Color();
			System::Drawing::Font ^font = gcnew System::Drawing::Font( "Arial",12);
			SolidBrush^ brush = gcnew SolidBrush( Color::Black );
			Pen  ^pen = gcnew Pen( col->Green, 1);
			cGraph->DrawRectangle(pen, 26 + StepSize * Step, pbCpu->Height - 24 - CellSize * (Cpu + 1), StepSize * Weight, CellSize - 2);
			cGraph->DrawString( Number.ToString(), font, brush, (StepSize * Weight + StepSize * Step) , pbCpu->Height - CellSize * (Cpu+1) )  ;   
		 }
private: int QuickCalculation( int Number )
		 {
			 if( Number >= 0 && Number < oGraph->GetCount() )
			 {
				 int Size = oGraph->GetChildsCount( Number );
				 int Result = 0;
				 if ( !Size ) return 1;
				 int *tChilds = oGraph->GetChilds( Number );

				 for( int i = 1; i <= Size; ++i )
				 {
					 if ( Size <= CpuCount )
					 {
						 Result += QuickCalculation( tChilds[i] );
					 }
					 else
					 {
						 for( int j = 1; j <= Size; ++j )
						 {
							 if ( i == j ) continue;

							 if ( !oGraph->isChildExist( tChilds[i], tChilds[j] ) )
							 {
								oGraph->AddChild( tChilds[i], tChilds[j] );
								oGraph->DeleteFromParent( tChilds[j], Number );
							 }
							 else continue;

						 }
						 Result += QuickCalculation( tChilds[i] );
						 for ( int j = 1; j <= Size; ++j )
						 {
							 oGraph->DeleteFromChilds( tChilds[i], tChilds[j] );
							 oGraph->AddParent( tChilds[j], Number );
						 }
					 }
				 }
				return Result; 
			 }
		 }
private: void DrawNonCpu()
{
	oGraph->PrepareToDrawChart(0,0,0);
	for( int i = 0; i < oGraph->GetCount(); ++i )
	{
		DrawCell( i + 1, oGraph->GetCpu(i), oGraph->GetStep(i), oGraph->GetWeight(i) );
	}
}
private: System::Void tlCalculate_Click(System::Object^  sender, System::EventArgs^  e) {
		 	DrawGraph();
			oGraph->DoUnready();
			DrawCpu(3);
			//DrawCell(0,0,oGraph->GetWeight(0));
			DrawNonCpu();
			oGraph->DoUnready();
			//DrawCell(0,0,3);
			//DrawCell(1,1,4);
			//DrawCell(2,0,2);
		 }
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 numericUpDown1->Visible = false;
			 numericUpDown2->Visible = false;
			 numericUpDown3->Visible = false;
			 numericUpDown4->Visible = false;
			 numericUpDown5->Visible = false;
		 }
private: System::Void deleteNodeToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 oGraph->DeleteItem( cbNodes->SelectedIndex );
			 for( int i = oGraph->GetCount(); i >= 0; --i )
			 {
				 chlDepends->Items->RemoveAt(i);
				 chlDependents->Items->RemoveAt(i);
				 cbNodes->Items->RemoveAt(i);
			 }

			 chlDepends->Items->Add( "Index", false );
			 chlDependents->Items->Add( "Index", false );
			 cbNodes->Items->Add("1");

			 for( int i = 2; i <= oGraph->GetCount(); ++i )
			 {
				 chlDepends->Items->Add( i, false );
				 chlDependents->Items->Add( i, false );
				 cbNodes->Items->Add( i );
				 
			 }
			 cbNodes->SelectedItem = oGraph->GetCount();

		 }
private: System::Void quickCalculationToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //numericUpDown5->Value = QuickCalculation(0);
		 }
private: System::Void tlCalculate_ButtonClick(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
