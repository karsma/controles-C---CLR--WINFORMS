#pragma once
#include "Usuario.h"

namespace proyectoejemploLoginCPPMYSQL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			conexion = gcnew ConexionMySQL();  // Inicializamos la conexión
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtusuario;
	private: System::Windows::Forms::TextBox^ txtContraseña;


	private: System::Windows::Forms::Button^ btnIniciarSesion;

	private: System::Windows::Forms::Button^ btnVerificarConexion;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
		ConexionMySQL^ conexion;  // Crear una instancia de la clase ConexionMySQL

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtusuario = (gcnew System::Windows::Forms::TextBox());
			this->txtContraseña = (gcnew System::Windows::Forms::TextBox());
			this->btnIniciarSesion = (gcnew System::Windows::Forms::Button());
			this->btnVerificarConexion = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label1->Location = System::Drawing::Point(29, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"USUARIO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label2->Location = System::Drawing::Point(29, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(165, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"CONTRASEÑA";
			// 
			// txtusuario
			// 
			this->txtusuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->txtusuario->Location = System::Drawing::Point(34, 123);
			this->txtusuario->Name = L"txtusuario";
			this->txtusuario->Size = System::Drawing::Size(384, 32);
			this->txtusuario->TabIndex = 2;
			// 
			// txtContraseña
			// 
			this->txtContraseña->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->txtContraseña->Location = System::Drawing::Point(34, 225);
			this->txtContraseña->Name = L"txtContraseña";
			this->txtContraseña->Size = System::Drawing::Size(384, 32);
			this->txtContraseña->TabIndex = 3;
			// 
			// btnIniciarSesion
			// 
			this->btnIniciarSesion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIniciarSesion->Location = System::Drawing::Point(75, 304);
			this->btnIniciarSesion->Name = L"btnIniciarSesion";
			this->btnIniciarSesion->Size = System::Drawing::Size(289, 63);
			this->btnIniciarSesion->TabIndex = 4;
			this->btnIniciarSesion->Text = L"INICIAR SESION";
			this->btnIniciarSesion->UseVisualStyleBackColor = true;
			this->btnIniciarSesion->Click += gcnew System::EventHandler(this, &Login::btnIniciarSesion_Click);
			// 
			// btnVerificarConexion
			// 
			this->btnVerificarConexion->Location = System::Drawing::Point(294, 12);
			this->btnVerificarConexion->Name = L"btnVerificarConexion";
			this->btnVerificarConexion->Size = System::Drawing::Size(124, 35);
			this->btnVerificarConexion->TabIndex = 5;
			this->btnVerificarConexion->Text = L"Probar Conexion";
			this->btnVerificarConexion->UseVisualStyleBackColor = true;
			this->btnVerificarConexion->Click += gcnew System::EventHandler(this, &Login::btnVerificarConexion_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(439, 441);
			this->Controls->Add(this->btnVerificarConexion);
			this->Controls->Add(this->btnIniciarSesion);
			this->Controls->Add(this->txtContraseña);
			this->Controls->Add(this->txtusuario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Login";
			this->ShowIcon = false;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {





	}
private: System::Void btnVerificarConexion_Click(System::Object^ sender, System::EventArgs^ e) {

// agregar #include "Usuario.h"
//agregar al constructor del formulario: conexion = gcnew ConexionMySQL();  // Inicializamos la conexión

	if (conexion->verificarConexion()) {  // Usamos el método de verificar conexión
		MessageBox::Show( "Conexión exitosa!");
		
	}
	else {
		MessageBox::Show("Conexión fallida!");
	}



}
private: System::Void btnIniciarSesion_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ usuario = txtusuario->Text;  // Obtenemos el texto del textbox de usuario
	String^ contrasena = txtContraseña->Text;  // Obtenemos el texto del textbox de contraseña

	// Crear un objeto Usuario con los datos ingresados
	Usuario^ nuevoUsuario = gcnew Usuario(usuario, contrasena);

	// Verificar si el usuario existe y es válido
	if (nuevoUsuario->verificarUsuario()) {
		MessageBox::Show("Inicio de sesión exitoso.");
	}
	else {
		MessageBox::Show("Usuario o contraseña incorrectos.");
	}
}
};
}
