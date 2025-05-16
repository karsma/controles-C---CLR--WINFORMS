#pragma once
#include "frmUsuarios.h"
namespace proyectoejemploLoginCPPMYSQL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMenu
	/// </summary>
	public ref class frmMenu : public System::Windows::Forms::Form
	{
	public:
		frmMenu(void)
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
		~frmMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ opcionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ listadoDeUsuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirDelProgramaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ listadoDeClientesToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->opcionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listadoDeUsuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirDelProgramaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listadoDeClientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->opcionesToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(733, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// opcionesToolStripMenuItem
			// 
			this->opcionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->usuariosToolStripMenuItem,
					this->salirDelProgramaToolStripMenuItem, this->clientesToolStripMenuItem
			});
			this->opcionesToolStripMenuItem->Name = L"opcionesToolStripMenuItem";
			this->opcionesToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->opcionesToolStripMenuItem->Text = L"Opciones";
			// 
			// usuariosToolStripMenuItem
			// 
			this->usuariosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->listadoDeUsuariosToolStripMenuItem });
			this->usuariosToolStripMenuItem->Name = L"usuariosToolStripMenuItem";
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->usuariosToolStripMenuItem->Text = L"Usuarios";
			// 
			// listadoDeUsuariosToolStripMenuItem
			// 
			this->listadoDeUsuariosToolStripMenuItem->Name = L"listadoDeUsuariosToolStripMenuItem";
			this->listadoDeUsuariosToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->listadoDeUsuariosToolStripMenuItem->Text = L"Listado de Usuarios";
			this->listadoDeUsuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenu::listadoDeUsuariosToolStripMenuItem_Click);
			// 
			// salirDelProgramaToolStripMenuItem
			// 
			this->salirDelProgramaToolStripMenuItem->Name = L"salirDelProgramaToolStripMenuItem";
			this->salirDelProgramaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->salirDelProgramaToolStripMenuItem->Text = L"Salir del Programa";
			this->salirDelProgramaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenu::salirDelProgramaToolStripMenuItem_Click);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->listadoDeClientesToolStripMenuItem });
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->clientesToolStripMenuItem->Text = L"clientes";
			// 
			// listadoDeClientesToolStripMenuItem
			// 
			this->listadoDeClientesToolStripMenuItem->Name = L"listadoDeClientesToolStripMenuItem";
			this->listadoDeClientesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->listadoDeClientesToolStripMenuItem->Text = L"listado de Clientes";
			// 
			// frmMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(733, 524);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmMenu";
			this->Text = L"frmMenu";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &frmMenu::frmMenu_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listadoDeUsuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmUsuarios^ abrirFrmUsuario = gcnew frmUsuarios();
		abrirFrmUsuario->Show();


	}
	private: System::Void salirDelProgramaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
	}
private: System::Void frmMenu_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
