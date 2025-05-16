#pragma once
#include "Usuario.h"


namespace proyectoejemploLoginCPPMYSQL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace proyectoejemploLoginCPPMYSQL;

	/// <summary>
	/// Resumen de frmUsuarios
	/// </summary>
	public ref class frmUsuarios : public System::Windows::Forms::Form
	{
	public:
		

		frmUsuarios(void)
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
		~frmUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ grdUsuarios;
	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckBox^ chkActivoUsuario;

	private: System::Windows::Forms::TextBox^ txtContrasena;

	private: System::Windows::Forms::TextBox^ txtUsuarios;

	private: System::Windows::Forms::TextBox^ txtIdLogin;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnNuevo;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ idLogin;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Usuarios;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Contraseña;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Activo;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ idCliente;











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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->grdUsuarios = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->chkActivoUsuario = (gcnew System::Windows::Forms::CheckBox());
			this->txtContrasena = (gcnew System::Windows::Forms::TextBox());
			this->txtUsuarios = (gcnew System::Windows::Forms::TextBox());
			this->txtIdLogin = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnNuevo = (gcnew System::Windows::Forms::Button());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->idLogin = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Usuarios = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Contraseña = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Activo = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->idCliente = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdUsuarios))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::OrangeRed;
			this->label1->Location = System::Drawing::Point(315, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"USUARIOS";
			// 
			// grdUsuarios
			// 
			this->grdUsuarios->AllowUserToAddRows = false;
			this->grdUsuarios->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->grdUsuarios->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grdUsuarios->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->idLogin,
					this->Usuarios, this->Contraseña, this->Activo, this->idCliente
			});
			this->grdUsuarios->Location = System::Drawing::Point(12, 274);
			this->grdUsuarios->Name = L"grdUsuarios";
			this->grdUsuarios->Size = System::Drawing::Size(808, 220);
			this->grdUsuarios->TabIndex = 1;
			this->grdUsuarios->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmUsuarios::grdUsuarios_CellClick);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 29);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(808, 58);
			this->panel1->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->chkActivoUsuario);
			this->panel2->Controls->Add(this->txtContrasena);
			this->panel2->Controls->Add(this->txtUsuarios);
			this->panel2->Controls->Add(this->txtIdLogin);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(12, 101);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(808, 167);
			this->panel2->TabIndex = 3;
			// 
			// chkActivoUsuario
			// 
			this->chkActivoUsuario->AutoSize = true;
			this->chkActivoUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->chkActivoUsuario->Location = System::Drawing::Point(641, 111);
			this->chkActivoUsuario->Name = L"chkActivoUsuario";
			this->chkActivoUsuario->Size = System::Drawing::Size(145, 33);
			this->chkActivoUsuario->TabIndex = 6;
			this->chkActivoUsuario->Text = L"ACTIVO \?";
			this->chkActivoUsuario->UseVisualStyleBackColor = true;
			// 
			// txtContrasena
			// 
			this->txtContrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->txtContrasena->Location = System::Drawing::Point(216, 102);
			this->txtContrasena->Name = L"txtContrasena";
			this->txtContrasena->Size = System::Drawing::Size(304, 35);
			this->txtContrasena->TabIndex = 5;
			// 
			// txtUsuarios
			// 
			this->txtUsuarios->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->txtUsuarios->Location = System::Drawing::Point(216, 50);
			this->txtUsuarios->Name = L"txtUsuarios";
			this->txtUsuarios->Size = System::Drawing::Size(304, 35);
			this->txtUsuarios->TabIndex = 4;
			// 
			// txtIdLogin
			// 
			this->txtIdLogin->Enabled = false;
			this->txtIdLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->txtIdLogin->Location = System::Drawing::Point(216, 9);
			this->txtIdLogin->Name = L"txtIdLogin";
			this->txtIdLogin->Size = System::Drawing::Size(154, 35);
			this->txtIdLogin->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label4->Location = System::Drawing::Point(23, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(187, 29);
			this->label4->TabIndex = 2;
			this->label4->Text = L"CONTRASEÑA";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label3->Location = System::Drawing::Point(23, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 29);
			this->label3->TabIndex = 1;
			this->label3->Text = L"USUARIO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label2->Location = System::Drawing::Point(23, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 29);
			this->label2->TabIndex = 0;
			this->label2->Text = L"ID LOGIN";
			// 
			// btnNuevo
			// 
			this->btnNuevo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->btnNuevo->Location = System::Drawing::Point(475, 500);
			this->btnNuevo->Name = L"btnNuevo";
			this->btnNuevo->Size = System::Drawing::Size(172, 56);
			this->btnNuevo->TabIndex = 7;
			this->btnNuevo->Text = L"Nuevo";
			this->btnNuevo->UseVisualStyleBackColor = true;
			this->btnNuevo->Click += gcnew System::EventHandler(this, &frmUsuarios::button1_Click);
			// 
			// btnGuardar
			// 
			this->btnGuardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->btnGuardar->Location = System::Drawing::Point(653, 500);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(156, 56);
			this->btnGuardar->TabIndex = 8;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &frmUsuarios::button2_Click);
			// 
			// idLogin
			// 
			this->idLogin->HeaderText = L"idLogin";
			this->idLogin->Name = L"idLogin";
			this->idLogin->ReadOnly = true;
			// 
			// Usuarios
			// 
			this->Usuarios->HeaderText = L"Usuario";
			this->Usuarios->Name = L"Usuarios";
			this->Usuarios->ReadOnly = true;
			// 
			// Contraseña
			// 
			this->Contraseña->HeaderText = L"Contraseña";
			this->Contraseña->Name = L"Contraseña";
			this->Contraseña->ReadOnly = true;
			// 
			// Activo
			// 
			this->Activo->HeaderText = L"Activo";
			this->Activo->Name = L"Activo";
			this->Activo->ReadOnly = true;
			// 
			// idCliente
			// 
			this->idCliente->HeaderText = L"idCliente";
			this->idCliente->Name = L"idCliente";
			// 
			// frmUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(832, 568);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->btnNuevo);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->grdUsuarios);
			this->Name = L"frmUsuarios";
			this->Text = L"frmUsuarios";
			this->Load += gcnew System::EventHandler(this, &frmUsuarios::frmUsuarios_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdUsuarios))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//manda a llamar a la funcion limpiar controles.
		LimpiarControles();

	}


		   private: System::Void LimpiarControles() 
		   {
			   txtIdLogin->Text = "";
			   txtContrasena->Text = "";
			   txtUsuarios->Text = "";
			   chkActivoUsuario->Checked = false;
			   btnGuardar->Text = "Guardar";

		   }
private: System::Void grdUsuarios_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{
	//verificar si hay algo en la grid,  si hay mas de alguna fila. 
	if (e->RowIndex >= 0) {
		//obtenemos el indice de la fila si es mayor a 0, osea si hay mas algun dato

		DataGridViewRow^ fila = grdUsuarios->Rows[e->RowIndex]; // click a la fila , obtiene la informacion de las celdas. 

		//si la celda idLogin esta vacia / usuario esta vacia , no entra al if
		if ((fila->Cells["idLogin"]->Value != nullptr) && (fila->Cells["Usuarios"]->Value != nullptr))
		{
			// Asignar valores a tus controles
			txtIdLogin->Text = fila->Cells["idLogin"]->Value->ToString();
			txtUsuarios->Text = fila->Cells["Usuarios"]->Value->ToString();
			txtContrasena->Text = fila->Cells["Contraseña"]->Value->ToString();
			chkActivoUsuario->Checked = Convert::ToBoolean(fila->Cells["Activo"]->Value);
			btnGuardar->Text = "Modificar";
		}
	}

}

	   //boton para guardar
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ usuario = txtUsuarios->Text;
		String^ contrasena = txtContrasena->Text;
		bool activo = chkActivoUsuario->Checked;

		if (btnGuardar->Text == "Guardar") {
			// CREAR USUARIO
			Usuario^ nuevoUsuario = gcnew Usuario(usuario, contrasena, activo);



			if (nuevoUsuario->crearUsuario()) {
				MessageBox::Show("Usuario creado exitosamente.");
				LimpiarControles();
				CargarUsuarios(); // esta función debe volver a llenar el DataGridView
			}
			else {
				MessageBox::Show("Error al crear el usuario.");
			}
		}
		else if (btnGuardar->Text == "Modificar") {
			// MODIFICAR USUARIO
			int id = Convert::ToInt32(txtIdLogin->Text); // asegúrate de tener este textbox invisible o visible según lo manejes

			Usuario^ usuarioExistente = gcnew Usuario();
			usuarioExistente->setIdLogin(id);             // propiedad interna
			usuarioExistente->setUsuario(usuario);         // también deberás hacerla pública o crear setters si prefieres
			usuarioExistente->setContraseña(contrasena);
			usuarioExistente->setActivo(activo);

			if (usuarioExistente->actualizarUsuario()) {
				MessageBox::Show("Usuario modificado correctamente.");
				LimpiarControles();
				CargarUsuarios(); // esta función debe volver a llenar el DataGridView
			}
			else {
				MessageBox::Show("Error al modificar el usuario.");
			}

		}
	}
private: System::Void frmUsuarios_Load(System::Object^ sender, System::EventArgs^ e) {
	
	//CargarUsuarios();

	
}

	   private: System::Void CargarUsuarios() 
	   {
		   Usuario^ listausuario = gcnew Usuario();
		   List<proyectoejemploLoginCPPMYSQL::Usuario^>^ lista = listausuario->listarUsuarios();

		   //limpiamos la grid
		   grdUsuarios->Rows->Clear();

		   for each(proyectoejemploLoginCPPMYSQL::Usuario ^ u in lista) {
			   grdUsuarios->Rows->Add(u->getIdLogin(), u->getUsuario(), u->getContraseña(), u->getActivo());
		   }
	   }
};
}
