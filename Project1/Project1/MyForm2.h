#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		MyForm2(String^ nombreUsuario) // Constructor con parámetro
		{
			InitializeComponent();
			MensajeEnvUsuario = nombreUsuario;

			// Ejemplo de uso: mostrar en un label si tienes uno
			// label1->Text = "Bienvenido, " + usuario;
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblMensajeObtenido;
			 String^ MensajeEnvUsuario;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblMensajeObtenido = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label1->Location = System::Drawing::Point(41, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(201, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Hola Soy Otra Ventana";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(104, 197);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Cerrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// lblMensajeObtenido
			// 
			this->lblMensajeObtenido->AutoSize = true;
			this->lblMensajeObtenido->Location = System::Drawing::Point(125, 131);
			this->lblMensajeObtenido->Name = L"lblMensajeObtenido";
			this->lblMensajeObtenido->Size = System::Drawing::Size(35, 13);
			this->lblMensajeObtenido->TabIndex = 2;
			this->lblMensajeObtenido->Text = L"label2";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->lblMensajeObtenido);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		lblMensajeObtenido->Text = MensajeEnvUsuario;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Close();  // Cierra
		this->Hide();  // ocultar ventana
	}
	};
}
