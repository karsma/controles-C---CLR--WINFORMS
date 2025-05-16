#pragma once

namespace proyectoejemploLoginCPPMYSQL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMenu2
	/// </summary>
	public ref class frmMenu2 : public System::Windows::Forms::Form
	{
	public:
		frmMenu2(void)
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
		~frmMenu2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ listadoDeClientesToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ listadoDeClientesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarProgramaToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->clienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listadoDeClientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->clienteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listadoDeClientesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarProgramaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->clienteToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(110, 26);
			// 
			// clienteToolStripMenuItem
			// 
			this->clienteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->listadoDeClientesToolStripMenuItem });
			this->clienteToolStripMenuItem->Name = L"clienteToolStripMenuItem";
			this->clienteToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->clienteToolStripMenuItem->Text = L"cliente";
			// 
			// listadoDeClientesToolStripMenuItem
			// 
			this->listadoDeClientesToolStripMenuItem->Name = L"listadoDeClientesToolStripMenuItem";
			this->listadoDeClientesToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->listadoDeClientesToolStripMenuItem->Text = L"Listado de clientes";
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->clienteToolStripMenuItem1,
					this->cerrarProgramaToolStripMenuItem
			});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(160, 48);
			// 
			// clienteToolStripMenuItem1
			// 
			this->clienteToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->listadoDeClientesToolStripMenuItem1 });
			this->clienteToolStripMenuItem1->Name = L"clienteToolStripMenuItem1";
			this->clienteToolStripMenuItem1->Size = System::Drawing::Size(159, 22);
			this->clienteToolStripMenuItem1->Text = L"cliente";
			// 
			// listadoDeClientesToolStripMenuItem1
			// 
			this->listadoDeClientesToolStripMenuItem1->Name = L"listadoDeClientesToolStripMenuItem1";
			this->listadoDeClientesToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->listadoDeClientesToolStripMenuItem1->Text = L"listado de Clientes";
			// 
			// cerrarProgramaToolStripMenuItem
			// 
			this->cerrarProgramaToolStripMenuItem->Name = L"cerrarProgramaToolStripMenuItem";
			this->cerrarProgramaToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->cerrarProgramaToolStripMenuItem->Text = L"cerrar programa";
			// 
			// frmMenu2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1067, 603);
			this->Name = L"frmMenu2";
			this->Text = L"frmMenu2";
			this->contextMenuStrip1->ResumeLayout(false);
			this->contextMenuStrip2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
