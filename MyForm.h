#pragma once
#include "Conector.h"
//#include "Pacientes.h"


namespace Consultorio {

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

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

		// Declaración de los controles
		System::Windows::Forms::TextBox^ textBoxNombre;
		System::Windows::Forms::TextBox^ textBoxApellido;
		System::Windows::Forms::TextBox^ textBoxTelefono;
		System::Windows::Forms::TextBox^ textBoxCorreo;
		System::Windows::Forms::TextBox^ textBoxEdad;
		System::Windows::Forms::TextBox^ textBoxGenero;
		System::Windows::Forms::Button^ buttonAgregarPaciente;
		System::Windows::Forms::Button^ buttonMostrarPacientes;
		System::Windows::Forms::Button^ buttonMostrarProximoPaciente;
		System::Windows::Forms::Button^ buttonAtenderPaciente;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::TextBox^ textBoxTratamiento;
	private: System::Windows::Forms::TextBox^ textBoxConsulta;
	private: System::Windows::Forms::TextBox^ textBoxFecha;

	private: System::Windows::Forms::NumericUpDown^ NUP_Costo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButtonPagadoOrNot;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBoxMotConsul;
		   System::Windows::Forms::ListBox^ listBoxPacientes;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->textBoxApellido = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTelefono = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCorreo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEdad = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGenero = (gcnew System::Windows::Forms::TextBox());
			this->buttonAgregarPaciente = (gcnew System::Windows::Forms::Button());
			this->buttonMostrarPacientes = (gcnew System::Windows::Forms::Button());
			this->buttonMostrarProximoPaciente = (gcnew System::Windows::Forms::Button());
			this->buttonAtenderPaciente = (gcnew System::Windows::Forms::Button());
			this->listBoxPacientes = (gcnew System::Windows::Forms::ListBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->textBoxTratamiento = (gcnew System::Windows::Forms::TextBox());
			this->textBoxConsulta = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFecha = (gcnew System::Windows::Forms::TextBox());
			this->NUP_Costo = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButtonPagadoOrNot = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMotConsul = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUP_Costo))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxNombre
			// 
			this->textBoxNombre->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBoxNombre->Location = System::Drawing::Point(141, 12);
			this->textBoxNombre->Name = L"textBoxNombre";
			this->textBoxNombre->Size = System::Drawing::Size(100, 22);
			this->textBoxNombre->TabIndex = 0;
			this->textBoxNombre->Text = L"Nombre";
			this->textBoxNombre->Click += gcnew System::EventHandler(this, &MyForm::textBoxNombre_Click);
			// 
			// textBoxApellido
			// 
			this->textBoxApellido->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBoxApellido->Location = System::Drawing::Point(141, 40);
			this->textBoxApellido->Name = L"textBoxApellido";
			this->textBoxApellido->Size = System::Drawing::Size(100, 22);
			this->textBoxApellido->TabIndex = 1;
			this->textBoxApellido->Text = L"Apellido";
			this->textBoxApellido->Click += gcnew System::EventHandler(this, &MyForm::textBoxApellido_Click);
			// 
			// textBoxTelefono
			// 
			this->textBoxTelefono->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBoxTelefono->Location = System::Drawing::Point(141, 68);
			this->textBoxTelefono->Name = L"textBoxTelefono";
			this->textBoxTelefono->Size = System::Drawing::Size(100, 22);
			this->textBoxTelefono->TabIndex = 2;
			this->textBoxTelefono->Text = L"Teléfono";
			this->textBoxTelefono->Click += gcnew System::EventHandler(this, &MyForm::textBoxTelefono_Click);
			// 
			// textBoxCorreo
			// 
			this->textBoxCorreo->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBoxCorreo->Location = System::Drawing::Point(141, 96);
			this->textBoxCorreo->Name = L"textBoxCorreo";
			this->textBoxCorreo->Size = System::Drawing::Size(100, 22);
			this->textBoxCorreo->TabIndex = 3;
			this->textBoxCorreo->Text = L"Correo";
			this->textBoxCorreo->Click += gcnew System::EventHandler(this, &MyForm::textBoxCorreo_Click);
			// 
			// textBoxEdad
			// 
			this->textBoxEdad->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBoxEdad->Location = System::Drawing::Point(141, 123);
			this->textBoxEdad->Name = L"textBoxEdad";
			this->textBoxEdad->Size = System::Drawing::Size(100, 22);
			this->textBoxEdad->TabIndex = 4;
			this->textBoxEdad->Text = L"Edad";
			this->textBoxEdad->Click += gcnew System::EventHandler(this, &MyForm::textBoxEdad_Click);
			// 
			// textBoxGenero
			// 
			this->textBoxGenero->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBoxGenero->Location = System::Drawing::Point(141, 151);
			this->textBoxGenero->Name = L"textBoxGenero";
			this->textBoxGenero->Size = System::Drawing::Size(100, 22);
			this->textBoxGenero->TabIndex = 5;
			this->textBoxGenero->Text = L"Género";
			this->textBoxGenero->Click += gcnew System::EventHandler(this, &MyForm::textBoxGenero_Click);
			// 
			// buttonAgregarPaciente
			// 
			this->buttonAgregarPaciente->BackColor = System::Drawing::Color::AliceBlue;
			this->buttonAgregarPaciente->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->buttonAgregarPaciente->Location = System::Drawing::Point(12, 304);
			this->buttonAgregarPaciente->Name = L"buttonAgregarPaciente";
			this->buttonAgregarPaciente->Size = System::Drawing::Size(154, 25);
			this->buttonAgregarPaciente->TabIndex = 6;
			this->buttonAgregarPaciente->Text = L"Agregar Paciente";
			this->buttonAgregarPaciente->UseVisualStyleBackColor = false;
			this->buttonAgregarPaciente->Click += gcnew System::EventHandler(this, &MyForm::buttonAgregarPaciente_Click);
			// 
			// buttonMostrarPacientes
			// 
			this->buttonMostrarPacientes->BackColor = System::Drawing::Color::AliceBlue;
			this->buttonMostrarPacientes->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->buttonMostrarPacientes->Location = System::Drawing::Point(224, 304);
			this->buttonMostrarPacientes->Name = L"buttonMostrarPacientes";
			this->buttonMostrarPacientes->Size = System::Drawing::Size(163, 25);
			this->buttonMostrarPacientes->TabIndex = 7;
			this->buttonMostrarPacientes->Text = L"Mostrar Pacientes";
			this->buttonMostrarPacientes->UseVisualStyleBackColor = false;
			this->buttonMostrarPacientes->Click += gcnew System::EventHandler(this, &MyForm::buttonMostrarPacientes_Click);
			// 
			// buttonMostrarProximoPaciente
			// 
			this->buttonMostrarProximoPaciente->BackColor = System::Drawing::Color::AliceBlue;
			this->buttonMostrarProximoPaciente->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->buttonMostrarProximoPaciente->Location = System::Drawing::Point(470, 304);
			this->buttonMostrarProximoPaciente->Name = L"buttonMostrarProximoPaciente";
			this->buttonMostrarProximoPaciente->Size = System::Drawing::Size(181, 25);
			this->buttonMostrarProximoPaciente->TabIndex = 8;
			this->buttonMostrarProximoPaciente->Text = L"Mostrar Próximo Paciente";
			this->buttonMostrarProximoPaciente->UseVisualStyleBackColor = false;
			this->buttonMostrarProximoPaciente->Click += gcnew System::EventHandler(this, &MyForm::buttonMostrarProximoPaciente_Click);
			// 
			// buttonAtenderPaciente
			// 
			this->buttonAtenderPaciente->BackColor = System::Drawing::Color::AliceBlue;
			this->buttonAtenderPaciente->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->buttonAtenderPaciente->Location = System::Drawing::Point(695, 304);
			this->buttonAtenderPaciente->Name = L"buttonAtenderPaciente";
			this->buttonAtenderPaciente->Size = System::Drawing::Size(169, 25);
			this->buttonAtenderPaciente->TabIndex = 9;
			this->buttonAtenderPaciente->Text = L"Atender Paciente";
			this->buttonAtenderPaciente->UseVisualStyleBackColor = false;
			this->buttonAtenderPaciente->Click += gcnew System::EventHandler(this, &MyForm::buttonAtenderPaciente_Click);
			// 
			// listBoxPacientes
			// 
			this->listBoxPacientes->ItemHeight = 16;
			this->listBoxPacientes->Location = System::Drawing::Point(12, 353);
			this->listBoxPacientes->Name = L"listBoxPacientes";
			this->listBoxPacientes->Size = System::Drawing::Size(897, 116);
			this->listBoxPacientes->TabIndex = 10;
			this->listBoxPacientes->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBoxPacientes_SelectedIndexChanged);
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(398, 23);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(538, 236);
			this->listView1->TabIndex = 11;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listView1_SelectedIndexChanged);
			// 
			// textBoxTratamiento
			// 
			this->textBoxTratamiento->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBoxTratamiento->Location = System::Drawing::Point(141, 179);
			this->textBoxTratamiento->Name = L"textBoxTratamiento";
			this->textBoxTratamiento->Size = System::Drawing::Size(100, 22);
			this->textBoxTratamiento->TabIndex = 12;
			this->textBoxTratamiento->Text = L"Tratamiento";
			this->textBoxTratamiento->Click += gcnew System::EventHandler(this, &MyForm::textBoxTratamiento_Click);
			this->textBoxTratamiento->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxTratamiento_TextChanged);
			// 
			// textBoxConsulta
			// 
			this->textBoxConsulta->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBoxConsulta->Location = System::Drawing::Point(141, 207);
			this->textBoxConsulta->Name = L"textBoxConsulta";
			this->textBoxConsulta->Size = System::Drawing::Size(100, 22);
			this->textBoxConsulta->TabIndex = 13;
			this->textBoxConsulta->Text = L"Consulta";
			this->textBoxConsulta->Click += gcnew System::EventHandler(this, &MyForm::textBoxConsulta_Click);
			this->textBoxConsulta->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxConsulta_TextChanged);
			// 
			// textBoxFecha
			// 
			this->textBoxFecha->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBoxFecha->Location = System::Drawing::Point(253, 207);
			this->textBoxFecha->Name = L"textBoxFecha";
			this->textBoxFecha->Size = System::Drawing::Size(100, 22);
			this->textBoxFecha->TabIndex = 14;
			this->textBoxFecha->Text = L"Fecha";
			this->textBoxFecha->Click += gcnew System::EventHandler(this, &MyForm::textBoxFecha_Click);
			// 
			// NUP_Costo
			// 
			this->NUP_Costo->Location = System::Drawing::Point(121, 249);
			this->NUP_Costo->Name = L"NUP_Costo";
			this->NUP_Costo->Size = System::Drawing::Size(120, 22);
			this->NUP_Costo->TabIndex = 15;
			this->NUP_Costo->ValueChanged += gcnew System::EventHandler(this, &MyForm::NUP_Costo_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 249);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 16);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Costo:";
			// 
			// radioButtonPagadoOrNot
			// 
			this->radioButtonPagadoOrNot->AutoSize = true;
			this->radioButtonPagadoOrNot->Location = System::Drawing::Point(269, 250);
			this->radioButtonPagadoOrNot->Name = L"radioButtonPagadoOrNot";
			this->radioButtonPagadoOrNot->Size = System::Drawing::Size(84, 20);
			this->radioButtonPagadoOrNot->TabIndex = 17;
			this->radioButtonPagadoOrNot->TabStop = true;
			this->radioButtonPagadoOrNot->Text = L"Pagado\?";
			this->radioButtonPagadoOrNot->UseVisualStyleBackColor = true;
			this->radioButtonPagadoOrNot->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButtonPagadoOrNot_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 16);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 16);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Apellido:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 16);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Telefono:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(38, 96);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 16);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Correo:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(38, 123);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 16);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Edad:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(38, 154);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 16);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Genero:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(38, 182);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(82, 16);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Tratamiento:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(38, 210);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 16);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Consulta:";
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->Location = System::Drawing::Point(269, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 26;
			this->textBox1->Text = L"Identificador";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBoxMotConsul
			// 
			this->textBoxMotConsul->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBoxMotConsul->Location = System::Drawing::Point(253, 176);
			this->textBoxMotConsul->Name = L"textBoxMotConsul";
			this->textBoxMotConsul->Size = System::Drawing::Size(100, 22);
			this->textBoxMotConsul->TabIndex = 27;
			this->textBoxMotConsul->Text = L"MotivoConsulta";
			this->textBoxMotConsul->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxMotConsul_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(968, 526);
			this->Controls->Add(this->textBoxMotConsul);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->radioButtonPagadoOrNot);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NUP_Costo);
			this->Controls->Add(this->textBoxFecha);
			this->Controls->Add(this->textBoxConsulta);
			this->Controls->Add(this->textBoxTratamiento);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->listBoxPacientes);
			this->Controls->Add(this->buttonAtenderPaciente);
			this->Controls->Add(this->buttonMostrarProximoPaciente);
			this->Controls->Add(this->buttonMostrarPacientes);
			this->Controls->Add(this->buttonAgregarPaciente);
			this->Controls->Add(this->textBoxGenero);
			this->Controls->Add(this->textBoxEdad);
			this->Controls->Add(this->textBoxCorreo);
			this->Controls->Add(this->textBoxTelefono);
			this->Controls->Add(this->textBoxApellido);
			this->Controls->Add(this->textBoxNombre);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"Gestión de Pacientes";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUP_Costo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		///sdcw
#pragma endregion

	private: Conector^ conector = gcnew Conector();
	//	private: Cola^ colax = gcnew Cola();

	private: bool estadoPago = false;

	private: String^ consulta = nullptr;

	private: String^ tratamiento = nullptr;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	//	listView1
			//Conector::mostrarPacientesConect(listView1);
           
            conector->mostrarPacientesConect(listView1);
		//colax->mostrarPacientesView(listView1);


	}
	private: System::Void buttonAgregarPaciente_Click(System::Object^ sender, System::EventArgs^ e) {

		/*	if()
		DateTime a = DateTime::Now;

        conector->agregarPacienteConec(Convert::ToInt64(textBox1->Text), textBoxNombre->Text, textBoxApellido->Text, Convert::ToInt32(textBoxEdad->Text), textBoxGenero->Text, Convert::ToInt64(NUP_Costo->Text), true, textBoxTelefono->Text, textBoxCorreo->Text, textBoxConsulta->Text, textBoxMotConsul->Text, a);
		conector->mostrarPacientesConect(listView1);
	*/	//colax->agregarPaciente(textBoxNombre->Text, textBoxApellido->Text, Convert::ToInt32(textBoxEdad->Text), textBoxGenero->Text, Convert::ToInt64(NUP_Costo->Text), true, textBoxTelefono->Text, textBoxCorreo->Text, textBoxConsulta->Text, textBoxMotConsul->Text, Convert::ToInt64(textBox1->Text), a);
		//colax->mostrarPacientesView(listView1);

	}
	private: System::Void buttonMostrarPacientes_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void buttonMostrarProximoPaciente_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void buttonAtenderPaciente_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBoxPacientes_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBoxNombre_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxNombre->Text == "Nombre") {
		textBoxNombre->Clear();
		textBoxNombre->ForeColor = System::Drawing::Color::Black;
	}
	
	
}
private: System::Void textBoxApellido_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxApellido->Text == "Apellido"){
		textBoxApellido->Clear();
		textBoxApellido->ForeColor = System::Drawing::Color::Black;
	}
	//textBoxApellido->ForeColor = System::Drawing::Color::Black;
}
	private: System::Void textBoxTelefono_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxTelefono->Text == "Teléfono"){
			textBoxTelefono->Clear();
			textBoxTelefono->ForeColor = System::Drawing::Color::Black;
		}
	//	textBoxTelefono->ForeColor = System::Drawing::Color::Black;


	}
private: System::Void textBoxCorreo_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxCorreo->Text == "Correo"){
		textBoxCorreo->Clear();
		textBoxCorreo->ForeColor = System::Drawing::Color::Black;
	}
	//textBoxCorreo->ForeColor = System::Drawing::Color::Black;

}
private: System::Void textBoxEdad_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxEdad->Text == "Edad"){
		textBoxEdad->Clear();
		textBoxEdad->ForeColor = System::Drawing::Color::Black;
	}
}
private: System::Void textBoxGenero_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxGenero->Text == "Género") {
		textBoxGenero->Clear();
		textBoxGenero->ForeColor = System::Drawing::Color::Black;
	}

}
	   ////////////////////////*

	   /*
	   private: System::Void textBoxNombre_Click(System::Object^ sender, System::EventArgs^ e) {
		   if (textBoxNombre->Text == "Nombre") {
			   textBoxNombre->Clear();
			   textBoxNombre->ForeColor = System::Drawing::SystemColors::ScrollBar;
		   }

	   }
private: System::Void textBoxApellido_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxApellido->Text == "Apellido") {
		textBoxApellido->Clear();
		textBoxApellido->ForeColor = System::Drawing::SystemColors::ScrollBar;
	}
}
	private: System::Void textBoxTelefono_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxTelefono->Text == "Teléfono") {
			textBoxTelefono->Clear();
			textBoxTelefono->ForeColor = System::Drawing::SystemColors::ScrollBar;
		}


	}
private: System::Void textBoxCorreo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxCorreo->Text == "Correo") {
		textBoxCorreo->Clear();
		textBoxCorreo->ForeColor = System::Drawing::SystemColors::ScrollBar;
	}


}
private: System::Void textBoxEdad_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxEdad->Text == "Edad") {
		textBoxEdad->Clear();
		textBoxCorreo->ForeColor = System::Drawing::SystemColors::ScrollBar;
	}
}
private: System::Void textBoxGenero_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxGenero->Text == "Género") {
		textBoxGenero->Clear();
		textBoxGenero->ForeColor = System::Drawing::SystemColors::ScrollBar;
	}


}*/
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxTratamiento_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxTratamiento->Text == "Tratamiento") {
		textBoxTratamiento->Clear();
		textBoxTratamiento->ForeColor = System::Drawing::Color::Black;
	}
}
private: System::Void textBoxConsulta_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxConsulta->Text == "Consulta") {
		textBoxConsulta->Clear();
		textBoxConsulta->ForeColor = System::Drawing::Color::Black;
	}
}
private: System::Void textBoxFecha_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxFecha->Text == "Fecha") {
		textBoxFecha->Clear();
		textBoxFecha->ForeColor = System::Drawing::Color::Black;
	}


}
private: System::Void NUP_Costo_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void radioButtonPagadoOrNot_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 
}
private: System::Void textBoxConsulta_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	consulta = textBoxConsulta->Text;

}
private: System::Void textBoxTratamiento_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	tratamiento = textBoxTratamiento->Text;
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBoxMotConsul_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}