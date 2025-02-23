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
	/// Resumen de ConsNexPaciente
	/// </summary>
	public ref class ConsNexPaciente : public System::Windows::Forms::Form
	{
	public:
		ConsNexPaciente(void)
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
		~ConsNexPaciente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ CHDiagnostico;
	private: System::Windows::Forms::ColumnHeader^ CHTratamiento;
	private: System::Windows::Forms::Label^ lblNombreSigPac;
	private: System::Windows::Forms::Label^ lblEdadSigPac;
	private: System::Windows::Forms::Label^ lblApellidoSigPac;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->CHDiagnostico = (gcnew System::Windows::Forms::ColumnHeader());
			this->CHTratamiento = (gcnew System::Windows::Forms::ColumnHeader());
			this->lblNombreSigPac = (gcnew System::Windows::Forms::Label());
			this->lblEdadSigPac = (gcnew System::Windows::Forms::Label());
			this->lblApellidoSigPac = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->listView1);
			this->panel1->Controls->Add(this->lblNombreSigPac);
			this->panel1->Controls->Add(this->lblEdadSigPac);
			this->panel1->Controls->Add(this->lblApellidoSigPac);
			this->panel1->Location = System::Drawing::Point(100, 73);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(758, 352);
			this->panel1->TabIndex = 4;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->CHDiagnostico, this->CHTratamiento });
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(92, 159);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(546, 175);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// CHDiagnostico
			// 
			this->CHDiagnostico->Text = L"Diagnosticos:";
			this->CHDiagnostico->Width = 270;
			// 
			// CHTratamiento
			// 
			this->CHTratamiento->Text = L"Tratamientos";
			this->CHTratamiento->Width = 269;
			// 
			// lblNombreSigPac
			// 
			this->lblNombreSigPac->AutoSize = true;
			this->lblNombreSigPac->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblNombreSigPac->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombreSigPac->Location = System::Drawing::Point(0, 0);
			this->lblNombreSigPac->Name = L"lblNombreSigPac";
			this->lblNombreSigPac->Padding = System::Windows::Forms::Padding(10);
			this->lblNombreSigPac->Size = System::Drawing::Size(108, 44);
			this->lblNombreSigPac->TabIndex = 0;
			this->lblNombreSigPac->Text = L"Nombre";
			this->lblNombreSigPac->Click += gcnew System::EventHandler(this, &ConsNexPaciente::lblNombreSigPac_Click);
			// 
			// lblEdadSigPac
			// 
			this->lblEdadSigPac->AutoSize = true;
			this->lblEdadSigPac->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEdadSigPac->Location = System::Drawing::Point(3, 88);
			this->lblEdadSigPac->Name = L"lblEdadSigPac";
			this->lblEdadSigPac->Padding = System::Windows::Forms::Padding(10);
			this->lblEdadSigPac->Size = System::Drawing::Size(78, 44);
			this->lblEdadSigPac->TabIndex = 2;
			this->lblEdadSigPac->Text = L"Edad";
			this->lblEdadSigPac->Click += gcnew System::EventHandler(this, &ConsNexPaciente::lblEdadSigPac_Click);
			// 
			// lblApellidoSigPac
			// 
			this->lblApellidoSigPac->AutoSize = true;
			this->lblApellidoSigPac->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblApellidoSigPac->Location = System::Drawing::Point(3, 44);
			this->lblApellidoSigPac->Name = L"lblApellidoSigPac";
			this->lblApellidoSigPac->Padding = System::Windows::Forms::Padding(10);
			this->lblApellidoSigPac->Size = System::Drawing::Size(110, 44);
			this->lblApellidoSigPac->TabIndex = 1;
			this->lblApellidoSigPac->Text = L"Apellido";
			this->lblApellidoSigPac->Click += gcnew System::EventHandler(this, &ConsNexPaciente::lblApellidoSigPac_Click);
			// 
			// ConsNexPaciente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(986, 573);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ConsNexPaciente";
			this->Text = L"ConsNexPaciente";
			this->Load += gcnew System::EventHandler(this, &ConsNexPaciente::ConsNexPaciente_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: Conector^ Conec = gcnew Conector();
	private: System::Void lblNombreSigPac_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ConsNexPaciente_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void lblApellidoSigPac_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblEdadSigPac_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
