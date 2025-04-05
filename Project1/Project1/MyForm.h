#pragma once
#include "MyForm2.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnClick;
	private: System::Windows::Forms::Label^ lblMensaje;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ txtResultado;

	private: System::Windows::Forms::TextBox^ txtNum2;

	private: System::Windows::Forms::TextBox^ txtNum1;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnMostrarResultado;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtNombreCompleto;

	private: System::Windows::Forms::TextBox^ txtApellidos;

	private: System::Windows::Forms::TextBox^ txtNombres;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ btnAgregarAlComboBox;
	private: System::Windows::Forms::TextBox^ txtAgregarAlCmb;
	private: System::Windows::Forms::ComboBox^ cmbListaInformacion;
	private: System::Windows::Forms::CheckBox^ checkRojo;

	private: System::Windows::Forms::CheckBox^ checkAzul;

	private: System::Windows::Forms::CheckBox^ checkAmarillo;

	private: System::Windows::Forms::Button^ btnObtenerEstadoCheck;
	private: System::Windows::Forms::RadioButton^ rbnExtraTerrestre;

	private: System::Windows::Forms::RadioButton^ rbnFemenino;

	private: System::Windows::Forms::RadioButton^ rbnMasculino;

	private: System::Windows::Forms::Button^ btnRadioButton;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::CheckBox^ chkActivo;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ txtApellidosGRD;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ txtNombresGRD;

	private: System::Windows::Forms::TextBox^ txtID;

	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::DataGridView^ grdListadoPersonal;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cl_Nombres;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cl_Apellidos;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ cl_Activo;
	private: System::Windows::Forms::Button^ btnAgregarAFila;




	protected:


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->BtnClick = (gcnew System::Windows::Forms::Button());
			this->lblMensaje = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtNombreCompleto = (gcnew System::Windows::Forms::TextBox());
			this->txtApellidos = (gcnew System::Windows::Forms::TextBox());
			this->txtNombres = (gcnew System::Windows::Forms::TextBox());
			this->btnMostrarResultado = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtResultado = (gcnew System::Windows::Forms::TextBox());
			this->txtNum2 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btnRadioButton = (gcnew System::Windows::Forms::Button());
			this->rbnExtraTerrestre = (gcnew System::Windows::Forms::RadioButton());
			this->rbnFemenino = (gcnew System::Windows::Forms::RadioButton());
			this->rbnMasculino = (gcnew System::Windows::Forms::RadioButton());
			this->btnObtenerEstadoCheck = (gcnew System::Windows::Forms::Button());
			this->checkRojo = (gcnew System::Windows::Forms::CheckBox());
			this->checkAzul = (gcnew System::Windows::Forms::CheckBox());
			this->checkAmarillo = (gcnew System::Windows::Forms::CheckBox());
			this->btnAgregarAlComboBox = (gcnew System::Windows::Forms::Button());
			this->txtAgregarAlCmb = (gcnew System::Windows::Forms::TextBox());
			this->cmbListaInformacion = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->btnAgregarAFila = (gcnew System::Windows::Forms::Button());
			this->chkActivo = (gcnew System::Windows::Forms::CheckBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtApellidosGRD = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->txtNombresGRD = (gcnew System::Windows::Forms::TextBox());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->grdListadoPersonal = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cl_Nombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cl_Apellidos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cl_Activo = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdListadoPersonal))->BeginInit();
			this->SuspendLayout();
			// 
			// BtnClick
			// 
			this->BtnClick->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->BtnClick->Location = System::Drawing::Point(37, 25);
			this->BtnClick->Name = L"BtnClick";
			this->BtnClick->Size = System::Drawing::Size(209, 61);
			this->BtnClick->TabIndex = 0;
			this->BtnClick->Text = L"Cambiar Texto";
			this->BtnClick->UseVisualStyleBackColor = true;
			this->BtnClick->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// lblMensaje
			// 
			this->lblMensaje->AutoSize = true;
			this->lblMensaje->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->lblMensaje->Location = System::Drawing::Point(100, 89);
			this->lblMensaje->Name = L"lblMensaje";
			this->lblMensaje->Size = System::Drawing::Size(81, 29);
			this->lblMensaje->TabIndex = 1;
			this->lblMensaje->Text = L"label1";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->button1->Location = System::Drawing::Point(37, 128);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(209, 61);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Mostrar Alerta";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button2->Location = System::Drawing::Point(37, 220);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(209, 61);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Mostrar otra Ventana";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button3->Location = System::Drawing::Point(37, 287);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(209, 61);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Cerrar Programa";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->BtnClick);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->lblMensaje);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(382, 373);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ejemplo 1";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->txtNombreCompleto);
			this->groupBox2->Controls->Add(this->txtApellidos);
			this->groupBox2->Controls->Add(this->txtNombres);
			this->groupBox2->Controls->Add(this->btnMostrarResultado);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->txtResultado);
			this->groupBox2->Controls->Add(this->txtNum2);
			this->groupBox2->Controls->Add(this->txtNum1);
			this->groupBox2->Location = System::Drawing::Point(414, 25);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(408, 360);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ejemplo 2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label7->Location = System::Drawing::Point(38, 242);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(144, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Nombre Completo";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label8->Location = System::Drawing::Point(38, 203);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(77, 20);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Apellidos";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(38, 242);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label10->Location = System::Drawing::Point(38, 164);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(77, 20);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Nombres";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(38, 203);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 13);
			this->label11->TabIndex = 13;
			this->label11->Text = L"label11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(38, 164);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 11;
			this->label12->Text = L"label12";
			// 
			// txtNombreCompleto
			// 
			this->txtNombreCompleto->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtNombreCompleto->Enabled = false;
			this->txtNombreCompleto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->txtNombreCompleto->Location = System::Drawing::Point(42, 274);
			this->txtNombreCompleto->Name = L"txtNombreCompleto";
			this->txtNombreCompleto->Size = System::Drawing::Size(269, 26);
			this->txtNombreCompleto->TabIndex = 9;
			this->txtNombreCompleto->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtApellidos
			// 
			this->txtApellidos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->txtApellidos->Location = System::Drawing::Point(126, 200);
			this->txtApellidos->Name = L"txtApellidos";
			this->txtApellidos->Size = System::Drawing::Size(183, 26);
			this->txtApellidos->TabIndex = 8;
			this->txtApellidos->TextChanged += gcnew System::EventHandler(this, &MyForm::txtApellidos_TextChanged);
			// 
			// txtNombres
			// 
			this->txtNombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->txtNombres->Location = System::Drawing::Point(126, 161);
			this->txtNombres->Name = L"txtNombres";
			this->txtNombres->Size = System::Drawing::Size(183, 26);
			this->txtNombres->TabIndex = 7;
			this->txtNombres->TextChanged += gcnew System::EventHandler(this, &MyForm::txtNombres_TextChanged);
			// 
			// btnMostrarResultado
			// 
			this->btnMostrarResultado->Location = System::Drawing::Point(315, 45);
			this->btnMostrarResultado->Name = L"btnMostrarResultado";
			this->btnMostrarResultado->Size = System::Drawing::Size(75, 37);
			this->btnMostrarResultado->TabIndex = 6;
			this->btnMostrarResultado->Text = L"Resultado";
			this->btnMostrarResultado->UseVisualStyleBackColor = true;
			this->btnMostrarResultado->Click += gcnew System::EventHandler(this, &MyForm::btnMostrarResultado_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label6->Location = System::Drawing::Point(38, 108);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Resultado";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label5->Location = System::Drawing::Point(38, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Numero 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label4->Location = System::Drawing::Point(38, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Numero 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"label2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			// 
			// txtResultado
			// 
			this->txtResultado->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtResultado->Enabled = false;
			this->txtResultado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->txtResultado->Location = System::Drawing::Point(128, 105);
			this->txtResultado->Name = L"txtResultado";
			this->txtResultado->Size = System::Drawing::Size(183, 26);
			this->txtResultado->TabIndex = 2;
			this->txtResultado->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtNum2
			// 
			this->txtNum2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->txtNum2->Location = System::Drawing::Point(126, 66);
			this->txtNum2->Name = L"txtNum2";
			this->txtNum2->Size = System::Drawing::Size(183, 26);
			this->txtNum2->TabIndex = 1;
			// 
			// txtNum1
			// 
			this->txtNum1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->txtNum1->Location = System::Drawing::Point(126, 27);
			this->txtNum1->Name = L"txtNum1";
			this->txtNum1->Size = System::Drawing::Size(183, 26);
			this->txtNum1->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->btnRadioButton);
			this->groupBox3->Controls->Add(this->rbnExtraTerrestre);
			this->groupBox3->Controls->Add(this->rbnFemenino);
			this->groupBox3->Controls->Add(this->rbnMasculino);
			this->groupBox3->Controls->Add(this->btnObtenerEstadoCheck);
			this->groupBox3->Controls->Add(this->checkRojo);
			this->groupBox3->Controls->Add(this->checkAzul);
			this->groupBox3->Controls->Add(this->checkAmarillo);
			this->groupBox3->Controls->Add(this->btnAgregarAlComboBox);
			this->groupBox3->Controls->Add(this->txtAgregarAlCmb);
			this->groupBox3->Controls->Add(this->cmbListaInformacion);
			this->groupBox3->Location = System::Drawing::Point(843, 37);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(235, 348);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ejemplo 3";
			// 
			// btnRadioButton
			// 
			this->btnRadioButton->Location = System::Drawing::Point(133, 250);
			this->btnRadioButton->Name = L"btnRadioButton";
			this->btnRadioButton->Size = System::Drawing::Size(58, 26);
			this->btnRadioButton->TabIndex = 16;
			this->btnRadioButton->Text = L"Obtener Estado";
			this->btnRadioButton->UseVisualStyleBackColor = true;
			this->btnRadioButton->Click += gcnew System::EventHandler(this, &MyForm::btnRadioButton_Click);
			// 
			// rbnExtraTerrestre
			// 
			this->rbnExtraTerrestre->AutoSize = true;
			this->rbnExtraTerrestre->Location = System::Drawing::Point(29, 285);
			this->rbnExtraTerrestre->Name = L"rbnExtraTerrestre";
			this->rbnExtraTerrestre->Size = System::Drawing::Size(91, 17);
			this->rbnExtraTerrestre->TabIndex = 15;
			this->rbnExtraTerrestre->TabStop = true;
			this->rbnExtraTerrestre->Text = L"Extra-Terreste";
			this->rbnExtraTerrestre->UseVisualStyleBackColor = true;
			// 
			// rbnFemenino
			// 
			this->rbnFemenino->AutoSize = true;
			this->rbnFemenino->Location = System::Drawing::Point(29, 259);
			this->rbnFemenino->Name = L"rbnFemenino";
			this->rbnFemenino->Size = System::Drawing::Size(71, 17);
			this->rbnFemenino->TabIndex = 14;
			this->rbnFemenino->TabStop = true;
			this->rbnFemenino->Text = L"Femenino";
			this->rbnFemenino->UseVisualStyleBackColor = true;
			// 
			// rbnMasculino
			// 
			this->rbnMasculino->AutoSize = true;
			this->rbnMasculino->Location = System::Drawing::Point(29, 236);
			this->rbnMasculino->Name = L"rbnMasculino";
			this->rbnMasculino->Size = System::Drawing::Size(73, 17);
			this->rbnMasculino->TabIndex = 13;
			this->rbnMasculino->TabStop = true;
			this->rbnMasculino->Text = L"Masculino";
			this->rbnMasculino->UseVisualStyleBackColor = true;
			// 
			// btnObtenerEstadoCheck
			// 
			this->btnObtenerEstadoCheck->Location = System::Drawing::Point(133, 146);
			this->btnObtenerEstadoCheck->Name = L"btnObtenerEstadoCheck";
			this->btnObtenerEstadoCheck->Size = System::Drawing::Size(58, 26);
			this->btnObtenerEstadoCheck->TabIndex = 12;
			this->btnObtenerEstadoCheck->Text = L"Obtener Estado";
			this->btnObtenerEstadoCheck->UseVisualStyleBackColor = true;
			this->btnObtenerEstadoCheck->Click += gcnew System::EventHandler(this, &MyForm::btnObtenerEstadoCheck_Click);
			// 
			// checkRojo
			// 
			this->checkRojo->AutoSize = true;
			this->checkRojo->Location = System::Drawing::Point(39, 179);
			this->checkRojo->Name = L"checkRojo";
			this->checkRojo->Size = System::Drawing::Size(48, 17);
			this->checkRojo->TabIndex = 11;
			this->checkRojo->Text = L"Rojo";
			this->checkRojo->UseVisualStyleBackColor = true;
			// 
			// checkAzul
			// 
			this->checkAzul->AutoSize = true;
			this->checkAzul->Location = System::Drawing::Point(35, 152);
			this->checkAzul->Name = L"checkAzul";
			this->checkAzul->Size = System::Drawing::Size(46, 17);
			this->checkAzul->TabIndex = 10;
			this->checkAzul->Text = L"Azul";
			this->checkAzul->UseVisualStyleBackColor = true;
			// 
			// checkAmarillo
			// 
			this->checkAmarillo->AutoSize = true;
			this->checkAmarillo->Location = System::Drawing::Point(35, 125);
			this->checkAmarillo->Name = L"checkAmarillo";
			this->checkAmarillo->Size = System::Drawing::Size(62, 17);
			this->checkAmarillo->TabIndex = 9;
			this->checkAmarillo->Text = L"Amarillo";
			this->checkAmarillo->UseVisualStyleBackColor = true;
			// 
			// btnAgregarAlComboBox
			// 
			this->btnAgregarAlComboBox->Location = System::Drawing::Point(160, 27);
			this->btnAgregarAlComboBox->Name = L"btnAgregarAlComboBox";
			this->btnAgregarAlComboBox->Size = System::Drawing::Size(58, 26);
			this->btnAgregarAlComboBox->TabIndex = 8;
			this->btnAgregarAlComboBox->Text = L"Agregar";
			this->btnAgregarAlComboBox->UseVisualStyleBackColor = true;
			this->btnAgregarAlComboBox->Click += gcnew System::EventHandler(this, &MyForm::btnAgregarAlComboBox_Click);
			// 
			// txtAgregarAlCmb
			// 
			this->txtAgregarAlCmb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->txtAgregarAlCmb->Location = System::Drawing::Point(19, 27);
			this->txtAgregarAlCmb->Name = L"txtAgregarAlCmb";
			this->txtAgregarAlCmb->Size = System::Drawing::Size(135, 26);
			this->txtAgregarAlCmb->TabIndex = 7;
			// 
			// cmbListaInformacion
			// 
			this->cmbListaInformacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->cmbListaInformacion->FormattingEnabled = true;
			this->cmbListaInformacion->Location = System::Drawing::Point(19, 59);
			this->cmbListaInformacion->Name = L"cmbListaInformacion";
			this->cmbListaInformacion->Size = System::Drawing::Size(199, 28);
			this->cmbListaInformacion->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->btnAgregarAFila);
			this->groupBox4->Controls->Add(this->chkActivo);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->txtApellidosGRD);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->txtNombresGRD);
			this->groupBox4->Controls->Add(this->txtID);
			this->groupBox4->Location = System::Drawing::Point(16, 393);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(378, 189);
			this->groupBox4->TabIndex = 8;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Informacion Personal";
			// 
			// btnAgregarAFila
			// 
			this->btnAgregarAFila->Location = System::Drawing::Point(247, 150);
			this->btnAgregarAFila->Name = L"btnAgregarAFila";
			this->btnAgregarAFila->Size = System::Drawing::Size(75, 23);
			this->btnAgregarAFila->TabIndex = 23;
			this->btnAgregarAFila->Text = L"Agregar";
			this->btnAgregarAFila->UseVisualStyleBackColor = true;
			this->btnAgregarAFila->Click += gcnew System::EventHandler(this, &MyForm::btnAgregarAFila_Click);
			// 
			// chkActivo
			// 
			this->chkActivo->AutoSize = true;
			this->chkActivo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->chkActivo->Location = System::Drawing::Point(160, 115);
			this->chkActivo->Name = L"chkActivo";
			this->chkActivo->Size = System::Drawing::Size(88, 24);
			this->chkActivo->TabIndex = 22;
			this->chkActivo->Text = L"Activo \?";
			this->chkActivo->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label17->Location = System::Drawing::Point(13, 86);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(103, 20);
			this->label17->TabIndex = 21;
			this->label17->Text = L"APELLIDOS";
			// 
			// txtApellidosGRD
			// 
			this->txtApellidosGRD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->txtApellidosGRD->Location = System::Drawing::Point(122, 83);
			this->txtApellidosGRD->Name = L"txtApellidosGRD";
			this->txtApellidosGRD->Size = System::Drawing::Size(162, 26);
			this->txtApellidosGRD->TabIndex = 20;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label13->Location = System::Drawing::Point(13, 54);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(94, 20);
			this->label13->TabIndex = 18;
			this->label13->Text = L"NOMBRES";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label14->Location = System::Drawing::Point(13, 22);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(26, 20);
			this->label14->TabIndex = 16;
			this->label14->Text = L"ID";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(13, 61);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 19;
			this->label15->Text = L"label15";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(13, 22);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 13);
			this->label16->TabIndex = 17;
			this->label16->Text = L"label16";
			// 
			// txtNombresGRD
			// 
			this->txtNombresGRD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->txtNombresGRD->Location = System::Drawing::Point(122, 51);
			this->txtNombresGRD->Name = L"txtNombresGRD";
			this->txtNombresGRD->Size = System::Drawing::Size(162, 26);
			this->txtNombresGRD->TabIndex = 15;
			// 
			// txtID
			// 
			this->txtID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->txtID->Location = System::Drawing::Point(122, 19);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(162, 26);
			this->txtID->TabIndex = 14;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->grdListadoPersonal);
			this->groupBox5->Location = System::Drawing::Point(414, 393);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(583, 189);
			this->groupBox5->TabIndex = 9;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Lista";
			// 
			// grdListadoPersonal
			// 
			this->grdListadoPersonal->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grdListadoPersonal->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ID,
					this->cl_Nombres, this->cl_Apellidos, this->cl_Activo
			});
			this->grdListadoPersonal->Location = System::Drawing::Point(58, 33);
			this->grdListadoPersonal->Name = L"grdListadoPersonal";
			this->grdListadoPersonal->Size = System::Drawing::Size(452, 150);
			this->grdListadoPersonal->TabIndex = 0;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			// 
			// cl_Nombres
			// 
			this->cl_Nombres->HeaderText = L"Nombres";
			this->cl_Nombres->Name = L"cl_Nombres";
			this->cl_Nombres->ReadOnly = true;
			// 
			// cl_Apellidos
			// 
			this->cl_Apellidos->HeaderText = L"Apellidos";
			this->cl_Apellidos->Name = L"cl_Apellidos";
			this->cl_Apellidos->ReadOnly = true;
			// 
			// cl_Activo
			// 
			this->cl_Activo->HeaderText = L"Estado";
			this->cl_Activo->Name = L"cl_Activo";
			this->cl_Activo->ReadOnly = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1122, 611);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdListadoPersonal))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		lblMensaje->Text = "HOLA MUNDO";

		

	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

		MessageBox::Show("Hola este Boton Muestra una Alerta para el Usuario");
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		//agregar #include  "MyForm2.h"
		
	MyForm2^ f = gcnew MyForm2("Hola UMG PROGRA 1"); //creamos la instancia del formulario 2
	f->Show(); //mostrar el formulario


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnMostrarResultado_Click(System::Object^ sender, System::EventArgs^ e) {
	// Convertir los textos a enteros (puedes usar float o double si deseas)
	int numero1 = Convert::ToInt32(txtNum1->Text);
	int numero2 = Convert::ToInt32(txtNum2->Text);

	// Sumar
	int resultado = numero1 + numero2;

	// Mostrar el resultado en el tercer TextBox
	txtResultado->Text = resultado.ToString();

}

void ActualizarResultado() {
		   String^ nombres = txtNombres->Text;
		   String^ apellidos = txtApellidos->Text;
		   txtNombreCompleto->Text = nombres + " " + apellidos;
}
private: System::Void txtNombres_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	ActualizarResultado();
}
private: System::Void txtApellidos_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	ActualizarResultado();

}
private: System::Void btnAgregarAlComboBox_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nuevoTexto = txtAgregarAlCmb->Text;

	// Validar que no esté vacío
	if (!String::IsNullOrWhiteSpace(nuevoTexto)) {
		cmbListaInformacion->Items->Add(nuevoTexto);
		txtAgregarAlCmb->Clear(); // Opcional: limpiar el textbox después de agregar
	}
	else {
		MessageBox::Show("Por favor, escriba un valor antes de agregar.");
	}

}
private: System::Void btnObtenerEstadoCheck_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ mensaje = "";

	if (checkAmarillo->Checked)
		mensaje += "Amarillo está marcado.\n";
	else
		mensaje += "Amarillo NO está marcado.\n";

	if (checkAzul->Checked)
		mensaje += "Azul está marcado.\n";
	else
		mensaje += "Azul NO está marcado.\n";

	if (checkRojo->Checked)
		mensaje += "Rojo está marcado.\n";
	else
		mensaje += "Rojo  NO está marcado.\n";

	MessageBox::Show(mensaje, "Estados de los CheckBox");

}
private: System::Void btnRadioButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (rbnMasculino->Checked) {
		MessageBox::Show("Seleccionaste Masculino");
	}
	else if (rbnFemenino->Checked) {
		MessageBox::Show("Seleccionaste Femenino");
	}
	else if (rbnExtraTerrestre->Checked) {
		MessageBox::Show("Seleccionaste Extra - Terrestre");
	}
	else {
		MessageBox::Show("No se ha seleccionado ninguna opción");
	}
}
private: System::Void btnAgregarAFila_Click(System::Object^ sender, System::EventArgs^ e) {
	// Obtener valores de los controles
	String^ id = txtID->Text;
	String^ nombres = txtNombresGRD->Text;
	String^ apellidos = txtApellidosGRD->Text;
	bool estado = chkActivo->Checked;

	// Validar si todos los campos requeridos están llenos (opcional)
	if (String::IsNullOrWhiteSpace(id) || String::IsNullOrWhiteSpace(nombres) || String::IsNullOrWhiteSpace(apellidos)) {
		MessageBox::Show("Por favor, llene todos los campos.");
		return;
	}

	// Agregar fila al DataGridView
	grdListadoPersonal->Rows->Add(id, nombres, apellidos, estado);

	// Limpiar los controles (opcional)
	txtID->Clear();
	txtNombres->Clear();
	txtApellidos->Clear();
	chkActivo->Checked = false;
}
};
}
