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
	/// Resumen de Visita
	/// </summary>
	public ref class Visita : public System::Windows::Forms::Form
	{
	public:
		Visita(void)
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
		~Visita()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TBIDABuscar;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ labelIDPas;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::ListView^ listViewVisitas;
	private: System::Windows::Forms::Label^ label1;

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
			this->TBIDABuscar = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->labelIDPas = (gcnew System::Windows::Forms::Label());
			this->listViewVisitas = (gcnew System::Windows::Forms::ListView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// TBIDABuscar
			// 
			this->TBIDABuscar->Location = System::Drawing::Point(3, 19);
			this->TBIDABuscar->Name = L"TBIDABuscar";
			this->TBIDABuscar->Size = System::Drawing::Size(201, 22);
			this->TBIDABuscar->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnBuscar);
			this->panel1->Controls->Add(this->labelIDPas);
			this->panel1->Controls->Add(this->TBIDABuscar);
			this->panel1->Location = System::Drawing::Point(51, 43);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(242, 79);
			this->panel1->TabIndex = 1;
			// 
			// btnBuscar
			// 
			this->btnBuscar->BackColor = System::Drawing::Color::SteelBlue;
			this->btnBuscar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnBuscar->Location = System::Drawing::Point(18, 47);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(176, 29);
			this->btnBuscar->TabIndex = 2;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnBuscar->UseVisualStyleBackColor = false;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &Visita::btnBuscar_Click);
			// 
			// labelIDPas
			// 
			this->labelIDPas->AutoSize = true;
			this->labelIDPas->Dock = System::Windows::Forms::DockStyle::Top;
			this->labelIDPas->Location = System::Drawing::Point(0, 0);
			this->labelIDPas->Name = L"labelIDPas";
			this->labelIDPas->Size = System::Drawing::Size(103, 16);
			this->labelIDPas->TabIndex = 1;
			this->labelIDPas->Text = L"ID Del Paciente:";
			// 
			// listViewVisitas
			// 
			this->listViewVisitas->HideSelection = false;
			this->listViewVisitas->Location = System::Drawing::Point(123, 173);
			this->listViewVisitas->Name = L"listViewVisitas";
			this->listViewVisitas->Size = System::Drawing::Size(762, 295);
			this->listViewVisitas->TabIndex = 2;
			this->listViewVisitas->UseCompatibleStateImageBehavior = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(119, 148);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 22);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Visitas";
			// 
			// Visita
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(986, 573);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listViewVisitas);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Visita";
			this->Text = L"Visita";
			this->Load += gcnew System::EventHandler(this, &Visita::Visita_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: Conector^ conector = gcnew Conector();
	private: System::Void Visita_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		//Conector::Instancia->mostrarPacientesConect(listViewVisitas);

		conector->mostrarVisitasConnec(listViewVisitas, Convert::ToInt64(TBIDABuscar->Text));
	}
};
}
