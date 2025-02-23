#pragma once
#include "Conector.h"

namespace Consultorio {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Gestion
	/// </summary>
	public ref class Gestion : public System::Windows::Forms::Form
	{
	public:
		Gestion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			// 
			Conector^ Conec = gcnew Conector();
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Gestion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ columnHeaderNombre;
	private: System::Windows::Forms::ColumnHeader^ columnHeaderApellido;
	private: System::Windows::Forms::ColumnHeader^ columnHeaderEdad;
	private: System::Windows::Forms::ColumnHeader^ columnHeaderDiagnostico;
	private: System::Windows::Forms::ColumnHeader^ columnHeaderTrtatamiento;
	private: System::Windows::Forms::ColumnHeader^ columnHeaderpagos;
	private: System::Windows::Forms::ColumnHeader^ columnHeaderTelefono;
	private: System::Windows::Forms::ColumnHeader^ columnHeaderCorreo;

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
			System::Windows::Forms::ListViewGroup^ listViewGroup1 = (gcnew System::Windows::Forms::ListViewGroup(L"xd", System::Windows::Forms::HorizontalAlignment::Left));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeaderNombre = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderApellido = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderEdad = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderDiagnostico = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderTrtatamiento = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderpagos = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderTelefono = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderCorreo = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->columnHeaderNombre,
					this->columnHeaderApellido, this->columnHeaderEdad, this->columnHeaderDiagnostico, this->columnHeaderTrtatamiento, this->columnHeaderpagos,
					this->columnHeaderTelefono, this->columnHeaderCorreo
			});
			listViewGroup1->Header = L"xd";
			listViewGroup1->Name = L"listViewGroup1";
			this->listView1->Groups->AddRange(gcnew cli::array< System::Windows::Forms::ListViewGroup^  >(1) { listViewGroup1 });
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(78, 45);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(795, 390);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &Gestion::listView1_SelectedIndexChanged);
			// 
			// columnHeaderNombre
			// 
			this->columnHeaderNombre->Text = L"Nombre:";
			// 
			// columnHeaderApellido
			// 
			this->columnHeaderApellido->Text = L"Apellido";
			// 
			// columnHeaderEdad
			// 
			this->columnHeaderEdad->Text = L"Edad";
			// 
			// columnHeaderDiagnostico
			// 
			this->columnHeaderDiagnostico->Text = L"Diagnostico";
			// 
			// columnHeaderTrtatamiento
			// 
			this->columnHeaderTrtatamiento->Text = L"Tratamiento";
			// 
			// columnHeaderpagos
			// 
			this->columnHeaderpagos->Text = L"Pagos";
			// 
			// columnHeaderTelefono
			// 
			this->columnHeaderTelefono->Text = L"Telefono";
			// 
			// columnHeaderCorreo
			// 
			this->columnHeaderCorreo->Text = L"Correo";
			// 
			// Gestion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(986, 573);
			this->Controls->Add(this->listView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Gestion";
			this->Text = L"Gestion";
			this->Load += gcnew System::EventHandler(this, &Gestion::Gestion_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: Conector^ Conec;

	private: System::Void Gestion_Load(System::Object^ sender, System::EventArgs^ e) {
		Conec->mostrarPacientesConect(listView1);
	
	}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
