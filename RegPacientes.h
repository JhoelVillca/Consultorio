#pragma once
#include "Pacientes.h"
#include "Conector.h"

#include "AddGood.h"

namespace Consultorio {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RegPacientes
	/// </summary>

	public ref class RegPacientes : public System::Windows::Forms::Form
	{
	public:
		RegPacientes(void)
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
		~RegPacientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelRegPacientes;

	private: System::Windows::Forms::Panel^ panelRegistro;

	private: System::Windows::Forms::Panel^ panelNombre;

	private: System::Windows::Forms::TextBox^ TBNombre;


	private: System::Windows::Forms::Label^ labelNombre;
	private: System::Windows::Forms::Panel^ panelApellido;
	private: System::Windows::Forms::TextBox^ TBApellido;




	private: System::Windows::Forms::Label^ lblApellido;
	private: System::Windows::Forms::Panel^ panelEdad;


	private: System::Windows::Forms::Label^ lblEdad;
	private: System::Windows::Forms::Panel^ panelGenero;


	private: System::Windows::Forms::Label^ lblGenero;

	private: System::Windows::Forms::NumericUpDown^ NUDEdad;
	private: System::Windows::Forms::ComboBox^ CB_Genero;
	private: System::Windows::Forms::Panel^ panelCostos;
	private: System::Windows::Forms::Label^ labelCostoConsul;
	private: System::Windows::Forms::Label^ lblCostoTitulo;
	private: System::Windows::Forms::Panel^ panelPagado;

	private: System::Windows::Forms::Panel^ panelCDCons;
	private: System::Windows::Forms::NumericUpDown^ NUDCostoConsul;
	private: System::Windows::Forms::RadioButton^ RBtnSinPagar;

	private: System::Windows::Forms::RadioButton^ RBtnSiPago;
	private: System::Windows::Forms::Label^ lblPagado;
	private: System::Windows::Forms::Panel^ panelCorreoElectronico;
	private: System::Windows::Forms::TextBox^ TBCorreo;
	private: System::Windows::Forms::Label^ labelCorreo;
	private: System::Windows::Forms::Panel^ panelTelefono;
	private: System::Windows::Forms::TextBox^ TBTelefono;
	private: System::Windows::Forms::Label^ lblTelefono;
	private: System::Windows::Forms::TabControl^ TBRegistro;
	private: System::Windows::Forms::TabPage^ TCRegDatos;

	private: System::Windows::Forms::TabPage^ TCHistMed;

	private: System::Windows::Forms::TabPage^ TPConsultList;
	private: System::Windows::Forms::Panel^ panelRegistrador;
	private: FontAwesome::Sharp::IconButton^ btnRegistrar;


	private: FontAwesome::Sharp::IconButton^ BtnOlvidar;



	private: System::Windows::Forms::Panel^ panelRegistrador3;
	private: FontAwesome::Sharp::IconButton^ BtnOlvidar3;

	private: FontAwesome::Sharp::IconButton^ btnRegistrar3;

	private: System::Windows::Forms::Panel^ panelRegistrador2;
	private: FontAwesome::Sharp::IconButton^ BtnOlvidar2;

	private: FontAwesome::Sharp::IconButton^ btnRegistrar2;
	private: System::Windows::Forms::Panel^ panelListaDeCosultas;
	private: System::Windows::Forms::ListView^ listView1;

	private: System::Windows::Forms::ColumnHeader^ columnHeaderConsulta;
	private: System::Windows::Forms::ColumnHeader^ columnHeaderFecha;
	private: System::Windows::Forms::ColumnHeader^ columnHeaderTratamiento;
	private: System::Windows::Forms::ColumnHeader^ columnHeaderMotConsulta;
	private: System::Windows::Forms::Panel^ panelLisConsulta;
	private: System::Windows::Forms::Panel^ panelFecha;
	private: System::Windows::Forms::CheckBox^ CBAuto;
	private: System::Windows::Forms::TextBox^ TBFecha;
	private: System::Windows::Forms::Label^ lblFecha;
	private: System::Windows::Forms::Panel^ panelTratamientoadd;
	private: System::Windows::Forms::TextBox^ textBoxTratamiento;
	private: System::Windows::Forms::Label^ labelTratamiento;
	private: System::Windows::Forms::Panel^ panelMetivoConsulta;
	private: System::Windows::Forms::TextBox^ TBMotConsulta;
	private: System::Windows::Forms::Label^ labelMotConsulta;
	private: System::Windows::Forms::Panel^ panelConsultaadd;
	private: System::Windows::Forms::TextBox^ textBoxConsulta;
	private: System::Windows::Forms::Label^ lblCosulta;
private: System::Windows::Forms::Panel^ panelAddHistorial;
private: System::Windows::Forms::ListView^ listView2;
private: System::Windows::Forms::ColumnHeader^ columnHeaderDiagnAnt;
private: System::Windows::Forms::ColumnHeader^ columnHeaderTratAnt;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label2;
private: FontAwesome::Sharp::IconButton^ btnIconMas;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::TextBox^ TBId;

private: System::Windows::Forms::Label^ lblID;


private: System::Windows::Forms::Timer^ timer1;
private: System::Windows::Forms::Label^ SiOrNot;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::TextBox^ TBDirecion;

private: System::Windows::Forms::Label^ lblDirecion;
private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::TextBox^ TBHoraVisita;

private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Panel^ panel10;

private: System::Windows::Forms::Label^ lvlFecha;

private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::TextBox^ TBDirecionVisita;

private: System::Windows::Forms::Label^ lblDireccion;

private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::TextBox^ TBIdVisita;

private: System::Windows::Forms::Label^ lvlId;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::TextBox^ TBMotivoVisita;

private: System::Windows::Forms::Label^ lvlmotivo;

private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::TextBox^ TBNombreVisita;

private: System::Windows::Forms::Label^ lvlNVis;
private: System::Windows::Forms::DateTimePicker^ DTVFechaVisita;

private: FontAwesome::Sharp::IconButton^ iconButton1;
private: System::Windows::Forms::Label^ labelIDPACIENTE;
private: System::ComponentModel::IContainer^ components;


























































	protected:


	protected:

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
			this->panelRegPacientes = (gcnew System::Windows::Forms::Panel());
			this->TBRegistro = (gcnew System::Windows::Forms::TabControl());
			this->TCRegDatos = (gcnew System::Windows::Forms::TabPage());
			this->panelRegistro = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->TBDirecion = (gcnew System::Windows::Forms::TextBox());
			this->lblDirecion = (gcnew System::Windows::Forms::Label());
			this->SiOrNot = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->TBId = (gcnew System::Windows::Forms::TextBox());
			this->lblID = (gcnew System::Windows::Forms::Label());
			this->panelRegistrador = (gcnew System::Windows::Forms::Panel());
			this->BtnOlvidar = (gcnew FontAwesome::Sharp::IconButton());
			this->btnRegistrar = (gcnew FontAwesome::Sharp::IconButton());
			this->panelCorreoElectronico = (gcnew System::Windows::Forms::Panel());
			this->TBCorreo = (gcnew System::Windows::Forms::TextBox());
			this->labelCorreo = (gcnew System::Windows::Forms::Label());
			this->panelTelefono = (gcnew System::Windows::Forms::Panel());
			this->TBTelefono = (gcnew System::Windows::Forms::TextBox());
			this->lblTelefono = (gcnew System::Windows::Forms::Label());
			this->panelCostos = (gcnew System::Windows::Forms::Panel());
			this->panelPagado = (gcnew System::Windows::Forms::Panel());
			this->RBtnSinPagar = (gcnew System::Windows::Forms::RadioButton());
			this->RBtnSiPago = (gcnew System::Windows::Forms::RadioButton());
			this->lblPagado = (gcnew System::Windows::Forms::Label());
			this->panelCDCons = (gcnew System::Windows::Forms::Panel());
			this->NUDCostoConsul = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelCostoConsul = (gcnew System::Windows::Forms::Label());
			this->lblCostoTitulo = (gcnew System::Windows::Forms::Label());
			this->panelGenero = (gcnew System::Windows::Forms::Panel());
			this->CB_Genero = (gcnew System::Windows::Forms::ComboBox());
			this->lblGenero = (gcnew System::Windows::Forms::Label());
			this->panelEdad = (gcnew System::Windows::Forms::Panel());
			this->NUDEdad = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblEdad = (gcnew System::Windows::Forms::Label());
			this->panelApellido = (gcnew System::Windows::Forms::Panel());
			this->TBApellido = (gcnew System::Windows::Forms::TextBox());
			this->lblApellido = (gcnew System::Windows::Forms::Label());
			this->panelNombre = (gcnew System::Windows::Forms::Panel());
			this->TBNombre = (gcnew System::Windows::Forms::TextBox());
			this->labelNombre = (gcnew System::Windows::Forms::Label());
			this->TPConsultList = (gcnew System::Windows::Forms::TabPage());
			this->panelListaDeCosultas = (gcnew System::Windows::Forms::Panel());
			this->panelLisConsulta = (gcnew System::Windows::Forms::Panel());
			this->panelFecha = (gcnew System::Windows::Forms::Panel());
			this->CBAuto = (gcnew System::Windows::Forms::CheckBox());
			this->TBFecha = (gcnew System::Windows::Forms::TextBox());
			this->lblFecha = (gcnew System::Windows::Forms::Label());
			this->panelTratamientoadd = (gcnew System::Windows::Forms::Panel());
			this->textBoxTratamiento = (gcnew System::Windows::Forms::TextBox());
			this->labelTratamiento = (gcnew System::Windows::Forms::Label());
			this->panelMetivoConsulta = (gcnew System::Windows::Forms::Panel());
			this->TBMotConsulta = (gcnew System::Windows::Forms::TextBox());
			this->labelMotConsulta = (gcnew System::Windows::Forms::Label());
			this->panelConsultaadd = (gcnew System::Windows::Forms::Panel());
			this->textBoxConsulta = (gcnew System::Windows::Forms::TextBox());
			this->lblCosulta = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeaderConsulta = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderFecha = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderTratamiento = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderMotConsulta = (gcnew System::Windows::Forms::ColumnHeader());
			this->panelRegistrador3 = (gcnew System::Windows::Forms::Panel());
			this->BtnOlvidar3 = (gcnew FontAwesome::Sharp::IconButton());
			this->btnRegistrar3 = (gcnew FontAwesome::Sharp::IconButton());
			this->TCHistMed = (gcnew System::Windows::Forms::TabPage());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeaderDiagnAnt = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderTratAnt = (gcnew System::Windows::Forms::ColumnHeader());
			this->panelAddHistorial = (gcnew System::Windows::Forms::Panel());
			this->btnIconMas = (gcnew FontAwesome::Sharp::IconButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panelRegistrador2 = (gcnew System::Windows::Forms::Panel());
			this->BtnOlvidar2 = (gcnew FontAwesome::Sharp::IconButton());
			this->btnRegistrar2 = (gcnew FontAwesome::Sharp::IconButton());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->labelIDPACIENTE = (gcnew System::Windows::Forms::Label());
			this->iconButton1 = (gcnew FontAwesome::Sharp::IconButton());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->TBHoraVisita = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->DTVFechaVisita = (gcnew System::Windows::Forms::DateTimePicker());
			this->lvlFecha = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->TBDirecionVisita = (gcnew System::Windows::Forms::TextBox());
			this->lblDireccion = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->TBIdVisita = (gcnew System::Windows::Forms::TextBox());
			this->lvlId = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->TBMotivoVisita = (gcnew System::Windows::Forms::TextBox());
			this->lvlmotivo = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->TBNombreVisita = (gcnew System::Windows::Forms::TextBox());
			this->lvlNVis = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelRegPacientes->SuspendLayout();
			this->TBRegistro->SuspendLayout();
			this->TCRegDatos->SuspendLayout();
			this->panelRegistro->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panelRegistrador->SuspendLayout();
			this->panelCorreoElectronico->SuspendLayout();
			this->panelTelefono->SuspendLayout();
			this->panelCostos->SuspendLayout();
			this->panelPagado->SuspendLayout();
			this->panelCDCons->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDCostoConsul))->BeginInit();
			this->panelGenero->SuspendLayout();
			this->panelEdad->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDEdad))->BeginInit();
			this->panelApellido->SuspendLayout();
			this->panelNombre->SuspendLayout();
			this->TPConsultList->SuspendLayout();
			this->panelListaDeCosultas->SuspendLayout();
			this->panelLisConsulta->SuspendLayout();
			this->panelFecha->SuspendLayout();
			this->panelTratamientoadd->SuspendLayout();
			this->panelMetivoConsulta->SuspendLayout();
			this->panelConsultaadd->SuspendLayout();
			this->panelRegistrador3->SuspendLayout();
			this->TCHistMed->SuspendLayout();
			this->panelAddHistorial->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panelRegistrador2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelRegPacientes
			// 
			this->panelRegPacientes->AutoScroll = true;
			this->panelRegPacientes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->panelRegPacientes->Controls->Add(this->TBRegistro);
			this->panelRegPacientes->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelRegPacientes->Location = System::Drawing::Point(0, 0);
			this->panelRegPacientes->Name = L"panelRegPacientes";
			this->panelRegPacientes->Size = System::Drawing::Size(986, 573);
			this->panelRegPacientes->TabIndex = 0;
			// 
			// TBRegistro
			// 
			this->TBRegistro->Controls->Add(this->TCRegDatos);
			this->TBRegistro->Controls->Add(this->TPConsultList);
			this->TBRegistro->Controls->Add(this->TCHistMed);
			this->TBRegistro->Controls->Add(this->tabPage1);
			this->TBRegistro->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TBRegistro->Font = (gcnew System::Drawing::Font(L"Roboto", 16.2F, System::Drawing::FontStyle::Bold));
			this->TBRegistro->ItemSize = System::Drawing::Size(134, 34);
			this->TBRegistro->Location = System::Drawing::Point(0, 0);
			this->TBRegistro->Name = L"TBRegistro";
			this->TBRegistro->SelectedIndex = 0;
			this->TBRegistro->Size = System::Drawing::Size(986, 573);
			this->TBRegistro->TabIndex = 2;
			// 
			// TCRegDatos
			// 
			this->TCRegDatos->Controls->Add(this->panelRegistro);
			this->TCRegDatos->Location = System::Drawing::Point(4, 38);
			this->TCRegDatos->Name = L"TCRegDatos";
			this->TCRegDatos->Padding = System::Windows::Forms::Padding(3);
			this->TCRegDatos->Size = System::Drawing::Size(978, 531);
			this->TCRegDatos->TabIndex = 0;
			this->TCRegDatos->Text = L"Registro De Datos";
			this->TCRegDatos->UseVisualStyleBackColor = true;
			// 
			// panelRegistro
			// 
			this->panelRegistro->Controls->Add(this->panel4);
			this->panelRegistro->Controls->Add(this->SiOrNot);
			this->panelRegistro->Controls->Add(this->panel3);
			this->panelRegistro->Controls->Add(this->panelRegistrador);
			this->panelRegistro->Controls->Add(this->panelCorreoElectronico);
			this->panelRegistro->Controls->Add(this->panelTelefono);
			this->panelRegistro->Controls->Add(this->panelCostos);
			this->panelRegistro->Controls->Add(this->panelGenero);
			this->panelRegistro->Controls->Add(this->panelEdad);
			this->panelRegistro->Controls->Add(this->panelApellido);
			this->panelRegistro->Controls->Add(this->panelNombre);
			this->panelRegistro->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelRegistro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panelRegistro->Location = System::Drawing::Point(3, 3);
			this->panelRegistro->Name = L"panelRegistro";
			this->panelRegistro->Size = System::Drawing::Size(972, 525);
			this->panelRegistro->TabIndex = 1;
			this->panelRegistro->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &RegPacientes::panelRegistro_Paint);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->TBDirecion);
			this->panel4->Controls->Add(this->lblDirecion);
			this->panel4->Location = System::Drawing::Point(59, 354);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(332, 55);
			this->panel4->TabIndex = 5;
			// 
			// TBDirecion
			// 
			this->TBDirecion->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TBDirecion->Font = (gcnew System::Drawing::Font(L"Roboto", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBDirecion->Location = System::Drawing::Point(0, 18);
			this->TBDirecion->Name = L"TBDirecion";
			this->TBDirecion->Size = System::Drawing::Size(332, 28);
			this->TBDirecion->TabIndex = 1;
			this->TBDirecion->TextChanged += gcnew System::EventHandler(this, &RegPacientes::textBox3_TextChanged);
			// 
			// lblDirecion
			// 
			this->lblDirecion->AutoSize = true;
			this->lblDirecion->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblDirecion->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDirecion->Location = System::Drawing::Point(0, 0);
			this->lblDirecion->Name = L"lblDirecion";
			this->lblDirecion->Size = System::Drawing::Size(86, 18);
			this->lblDirecion->TabIndex = 0;
			this->lblDirecion->Text = L"Direccion:";
			// 
			// SiOrNot
			// 
			this->SiOrNot->AutoSize = true;
			this->SiOrNot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SiOrNot->Location = System::Drawing::Point(641, 372);
			this->SiOrNot->Name = L"SiOrNot";
			this->SiOrNot->Size = System::Drawing::Size(0, 22);
			this->SiOrNot->TabIndex = 7;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->TBId);
			this->panel3->Controls->Add(this->lblID);
			this->panel3->Location = System::Drawing::Point(435, 354);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(161, 55);
			this->panel3->TabIndex = 4;
			// 
			// TBId
			// 
			this->TBId->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TBId->Font = (gcnew System::Drawing::Font(L"Roboto", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBId->Location = System::Drawing::Point(0, 18);
			this->TBId->Name = L"TBId";
			this->TBId->Size = System::Drawing::Size(161, 28);
			this->TBId->TabIndex = 1;
			this->TBId->TextChanged += gcnew System::EventHandler(this, &RegPacientes::TBId_TextChanged);
			this->TBId->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RegPacientes::TBId_KeyPress);
			// 
			// lblID
			// 
			this->lblID->AutoSize = true;
			this->lblID->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblID->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblID->Location = System::Drawing::Point(0, 0);
			this->lblID->Name = L"lblID";
			this->lblID->Size = System::Drawing::Size(121, 18);
			this->lblID->TabIndex = 0;
			this->lblID->Text = L"Nro. Identidad:";
			this->lblID->Click += gcnew System::EventHandler(this, &RegPacientes::label3_Click);
			// 
			// panelRegistrador
			// 
			this->panelRegistrador->Controls->Add(this->BtnOlvidar);
			this->panelRegistrador->Controls->Add(this->btnRegistrar);
			this->panelRegistrador->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelRegistrador->Location = System::Drawing::Point(0, 419);
			this->panelRegistrador->Name = L"panelRegistrador";
			this->panelRegistrador->Size = System::Drawing::Size(972, 106);
			this->panelRegistrador->TabIndex = 6;
			// 
			// BtnOlvidar
			// 
			this->BtnOlvidar->BackColor = System::Drawing::Color::AliceBlue;
			this->BtnOlvidar->Dock = System::Windows::Forms::DockStyle::Top;
			this->BtnOlvidar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BtnOlvidar->FlatAppearance->BorderSize = 5;
			this->BtnOlvidar->Font = (gcnew System::Drawing::Font(L"Roboto", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnOlvidar->IconChar = FontAwesome::Sharp::IconChar::Trash;
			this->BtnOlvidar->IconColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->BtnOlvidar->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->BtnOlvidar->Location = System::Drawing::Point(0, 55);
			this->BtnOlvidar->Name = L"BtnOlvidar";
			this->BtnOlvidar->Padding = System::Windows::Forms::Padding(200, 0, 0, 0);
			this->BtnOlvidar->Size = System::Drawing::Size(972, 55);
			this->BtnOlvidar->TabIndex = 1;
			this->BtnOlvidar->Text = L"Lipiar Datos";
			this->BtnOlvidar->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->BtnOlvidar->UseVisualStyleBackColor = false;
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->BackColor = System::Drawing::Color::AliceBlue;
			this->btnRegistrar->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnRegistrar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnRegistrar->FlatAppearance->BorderSize = 5;
			this->btnRegistrar->Font = (gcnew System::Drawing::Font(L"Roboto", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->btnRegistrar->IconChar = FontAwesome::Sharp::IconChar::AddressCard;
			this->btnRegistrar->IconColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->btnRegistrar->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnRegistrar->Location = System::Drawing::Point(0, 0);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Padding = System::Windows::Forms::Padding(200, 0, 0, 0);
			this->btnRegistrar->Size = System::Drawing::Size(972, 55);
			this->btnRegistrar->TabIndex = 0;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnRegistrar->UseVisualStyleBackColor = false;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &RegPacientes::btnRegistrar_Click);
			// 
			// panelCorreoElectronico
			// 
			this->panelCorreoElectronico->Controls->Add(this->TBCorreo);
			this->panelCorreoElectronico->Controls->Add(this->labelCorreo);
			this->panelCorreoElectronico->Location = System::Drawing::Point(471, 293);
			this->panelCorreoElectronico->Name = L"panelCorreoElectronico";
			this->panelCorreoElectronico->Size = System::Drawing::Size(400, 55);
			this->panelCorreoElectronico->TabIndex = 4;
			// 
			// TBCorreo
			// 
			this->TBCorreo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TBCorreo->Font = (gcnew System::Drawing::Font(L"Roboto", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBCorreo->Location = System::Drawing::Point(0, 18);
			this->TBCorreo->Name = L"TBCorreo";
			this->TBCorreo->Size = System::Drawing::Size(400, 28);
			this->TBCorreo->TabIndex = 1;
			this->TBCorreo->TextChanged += gcnew System::EventHandler(this, &RegPacientes::TBCorreo_TextChanged);
			// 
			// labelCorreo
			// 
			this->labelCorreo->AutoSize = true;
			this->labelCorreo->Dock = System::Windows::Forms::DockStyle::Top;
			this->labelCorreo->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCorreo->Location = System::Drawing::Point(0, 0);
			this->labelCorreo->Name = L"labelCorreo";
			this->labelCorreo->Size = System::Drawing::Size(158, 18);
			this->labelCorreo->TabIndex = 0;
			this->labelCorreo->Text = L"Correo Electronico:";
			// 
			// panelTelefono
			// 
			this->panelTelefono->Controls->Add(this->TBTelefono);
			this->panelTelefono->Controls->Add(this->lblTelefono);
			this->panelTelefono->Location = System::Drawing::Point(59, 293);
			this->panelTelefono->Name = L"panelTelefono";
			this->panelTelefono->Size = System::Drawing::Size(400, 55);
			this->panelTelefono->TabIndex = 3;
			// 
			// TBTelefono
			// 
			this->TBTelefono->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TBTelefono->Font = (gcnew System::Drawing::Font(L"Roboto", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBTelefono->Location = System::Drawing::Point(0, 18);
			this->TBTelefono->Name = L"TBTelefono";
			this->TBTelefono->Size = System::Drawing::Size(400, 28);
			this->TBTelefono->TabIndex = 1;
			this->TBTelefono->TextChanged += gcnew System::EventHandler(this, &RegPacientes::TBTelefono_TextChanged);
			// 
			// lblTelefono
			// 
			this->lblTelefono->AutoSize = true;
			this->lblTelefono->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblTelefono->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTelefono->Location = System::Drawing::Point(0, 0);
			this->lblTelefono->Name = L"lblTelefono";
			this->lblTelefono->Size = System::Drawing::Size(80, 18);
			this->lblTelefono->TabIndex = 0;
			this->lblTelefono->Text = L"Telefono:";
			// 
			// panelCostos
			// 
			this->panelCostos->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelCostos->Controls->Add(this->panelPagado);
			this->panelCostos->Controls->Add(this->panelCDCons);
			this->panelCostos->Controls->Add(this->lblCostoTitulo);
			this->panelCostos->Location = System::Drawing::Point(59, 175);
			this->panelCostos->Name = L"panelCostos";
			this->panelCostos->Size = System::Drawing::Size(806, 90);
			this->panelCostos->TabIndex = 5;
			// 
			// panelPagado
			// 
			this->panelPagado->Controls->Add(this->RBtnSinPagar);
			this->panelPagado->Controls->Add(this->RBtnSiPago);
			this->panelPagado->Controls->Add(this->lblPagado);
			this->panelPagado->Location = System::Drawing::Point(322, 29);
			this->panelPagado->Name = L"panelPagado";
			this->panelPagado->Size = System::Drawing::Size(453, 56);
			this->panelPagado->TabIndex = 3;
			// 
			// RBtnSinPagar
			// 
			this->RBtnSinPagar->AutoSize = true;
			this->RBtnSinPagar->FlatAppearance->BorderSize = 7;
			this->RBtnSinPagar->FlatAppearance->CheckedBackColor = System::Drawing::Color::Red;
			this->RBtnSinPagar->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->RBtnSinPagar->Location = System::Drawing::Point(288, 21);
			this->RBtnSinPagar->Name = L"RBtnSinPagar";
			this->RBtnSinPagar->Size = System::Drawing::Size(100, 23);
			this->RBtnSinPagar->TabIndex = 2;
			this->RBtnSinPagar->TabStop = true;
			this->RBtnSinPagar->Text = L"Sin pagar";
			this->RBtnSinPagar->UseVisualStyleBackColor = true;
			this->RBtnSinPagar->CheckedChanged += gcnew System::EventHandler(this, &RegPacientes::RBtnSinPagar_CheckedChanged);
			// 
			// RBtnSiPago
			// 
			this->RBtnSiPago->AutoSize = true;
			this->RBtnSiPago->FlatAppearance->BorderSize = 3;
			this->RBtnSiPago->FlatAppearance->CheckedBackColor = System::Drawing::Color::Lime;
			this->RBtnSiPago->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->RBtnSiPago->Location = System::Drawing::Point(112, 21);
			this->RBtnSiPago->Name = L"RBtnSiPago";
			this->RBtnSiPago->Size = System::Drawing::Size(89, 23);
			this->RBtnSiPago->TabIndex = 1;
			this->RBtnSiPago->TabStop = true;
			this->RBtnSiPago->Text = L"Pagado";
			this->RBtnSiPago->UseVisualStyleBackColor = true;
			this->RBtnSiPago->CheckedChanged += gcnew System::EventHandler(this, &RegPacientes::RBtnSiPago_CheckedChanged);
			// 
			// lblPagado
			// 
			this->lblPagado->AutoSize = true;
			this->lblPagado->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblPagado->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold));
			this->lblPagado->Location = System::Drawing::Point(0, 0);
			this->lblPagado->Name = L"lblPagado";
			this->lblPagado->Size = System::Drawing::Size(137, 18);
			this->lblPagado->TabIndex = 0;
			this->lblPagado->Text = L"Estado del Pago:";
			// 
			// panelCDCons
			// 
			this->panelCDCons->Controls->Add(this->NUDCostoConsul);
			this->panelCDCons->Controls->Add(this->labelCostoConsul);
			this->panelCDCons->Location = System::Drawing::Point(3, 31);
			this->panelCDCons->Name = L"panelCDCons";
			this->panelCDCons->Size = System::Drawing::Size(285, 56);
			this->panelCDCons->TabIndex = 2;
			// 
			// NUDCostoConsul
			// 
			this->NUDCostoConsul->Dock = System::Windows::Forms::DockStyle::Top;
			this->NUDCostoConsul->Location = System::Drawing::Point(0, 18);
			this->NUDCostoConsul->Name = L"NUDCostoConsul";
			this->NUDCostoConsul->Size = System::Drawing::Size(285, 24);
			this->NUDCostoConsul->TabIndex = 2;
			this->NUDCostoConsul->ValueChanged += gcnew System::EventHandler(this, &RegPacientes::NUDCostoConsul_ValueChanged);
			// 
			// labelCostoConsul
			// 
			this->labelCostoConsul->AutoSize = true;
			this->labelCostoConsul->Dock = System::Windows::Forms::DockStyle::Top;
			this->labelCostoConsul->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold));
			this->labelCostoConsul->Location = System::Drawing::Point(0, 0);
			this->labelCostoConsul->Name = L"labelCostoConsul";
			this->labelCostoConsul->Size = System::Drawing::Size(157, 18);
			this->labelCostoConsul->TabIndex = 1;
			this->labelCostoConsul->Text = L"Costo De Consulta:";
			// 
			// lblCostoTitulo
			// 
			this->lblCostoTitulo->AutoSize = true;
			this->lblCostoTitulo->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblCostoTitulo->Font = (gcnew System::Drawing::Font(L"Roboto", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCostoTitulo->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->lblCostoTitulo->Location = System::Drawing::Point(0, 0);
			this->lblCostoTitulo->Name = L"lblCostoTitulo";
			this->lblCostoTitulo->Size = System::Drawing::Size(86, 27);
			this->lblCostoTitulo->TabIndex = 0;
			this->lblCostoTitulo->Text = L"Costos:";
			// 
			// panelGenero
			// 
			this->panelGenero->Controls->Add(this->CB_Genero);
			this->panelGenero->Controls->Add(this->lblGenero);
			this->panelGenero->Location = System::Drawing::Point(468, 98);
			this->panelGenero->Name = L"panelGenero";
			this->panelGenero->Size = System::Drawing::Size(400, 55);
			this->panelGenero->TabIndex = 4;
			// 
			// CB_Genero
			// 
			this->CB_Genero->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CB_Genero->Font = (gcnew System::Drawing::Font(L"Roboto", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_Genero->FormattingEnabled = true;
			this->CB_Genero->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Masculino", L"Femenino", L"Otro" });
			this->CB_Genero->Location = System::Drawing::Point(0, 18);
			this->CB_Genero->Name = L"CB_Genero";
			this->CB_Genero->Size = System::Drawing::Size(400, 28);
			this->CB_Genero->TabIndex = 1;
			this->CB_Genero->SelectedIndexChanged += gcnew System::EventHandler(this, &RegPacientes::CB_Genero_SelectedIndexChanged);
			// 
			// lblGenero
			// 
			this->lblGenero->AutoSize = true;
			this->lblGenero->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblGenero->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGenero->Location = System::Drawing::Point(0, 0);
			this->lblGenero->Name = L"lblGenero";
			this->lblGenero->Size = System::Drawing::Size(67, 18);
			this->lblGenero->TabIndex = 0;
			this->lblGenero->Text = L"Genero:";
			// 
			// panelEdad
			// 
			this->panelEdad->Controls->Add(this->NUDEdad);
			this->panelEdad->Controls->Add(this->lblEdad);
			this->panelEdad->Location = System::Drawing::Point(62, 98);
			this->panelEdad->Name = L"panelEdad";
			this->panelEdad->Size = System::Drawing::Size(400, 55);
			this->panelEdad->TabIndex = 3;
			// 
			// NUDEdad
			// 
			this->NUDEdad->Dock = System::Windows::Forms::DockStyle::Fill;
			this->NUDEdad->Font = (gcnew System::Drawing::Font(L"Roboto", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NUDEdad->Location = System::Drawing::Point(0, 18);
			this->NUDEdad->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->NUDEdad->Name = L"NUDEdad";
			this->NUDEdad->Size = System::Drawing::Size(400, 28);
			this->NUDEdad->TabIndex = 1;
			this->NUDEdad->ValueChanged += gcnew System::EventHandler(this, &RegPacientes::NUDEdad_ValueChanged);
			// 
			// lblEdad
			// 
			this->lblEdad->AutoSize = true;
			this->lblEdad->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblEdad->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEdad->Location = System::Drawing::Point(0, 0);
			this->lblEdad->Name = L"lblEdad";
			this->lblEdad->Size = System::Drawing::Size(50, 18);
			this->lblEdad->TabIndex = 0;
			this->lblEdad->Text = L"Edad:";
			// 
			// panelApellido
			// 
			this->panelApellido->Controls->Add(this->TBApellido);
			this->panelApellido->Controls->Add(this->lblApellido);
			this->panelApellido->Location = System::Drawing::Point(465, 22);
			this->panelApellido->Name = L"panelApellido";
			this->panelApellido->Size = System::Drawing::Size(400, 55);
			this->panelApellido->TabIndex = 3;
			// 
			// TBApellido
			// 
			this->TBApellido->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TBApellido->Font = (gcnew System::Drawing::Font(L"Roboto", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBApellido->Location = System::Drawing::Point(0, 18);
			this->TBApellido->Name = L"TBApellido";
			this->TBApellido->Size = System::Drawing::Size(400, 28);
			this->TBApellido->TabIndex = 1;
			this->TBApellido->TextChanged += gcnew System::EventHandler(this, &RegPacientes::TBApellido_TextChanged);
			// 
			// lblApellido
			// 
			this->lblApellido->AutoSize = true;
			this->lblApellido->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblApellido->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblApellido->Location = System::Drawing::Point(0, 0);
			this->lblApellido->Name = L"lblApellido";
			this->lblApellido->Size = System::Drawing::Size(76, 18);
			this->lblApellido->TabIndex = 0;
			this->lblApellido->Text = L"Apellido:";
			// 
			// panelNombre
			// 
			this->panelNombre->Controls->Add(this->TBNombre);
			this->panelNombre->Controls->Add(this->labelNombre);
			this->panelNombre->Location = System::Drawing::Point(59, 22);
			this->panelNombre->Name = L"panelNombre";
			this->panelNombre->Size = System::Drawing::Size(400, 55);
			this->panelNombre->TabIndex = 2;
			// 
			// TBNombre
			// 
			this->TBNombre->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TBNombre->Font = (gcnew System::Drawing::Font(L"Roboto", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBNombre->Location = System::Drawing::Point(0, 18);
			this->TBNombre->Name = L"TBNombre";
			this->TBNombre->Size = System::Drawing::Size(400, 28);
			this->TBNombre->TabIndex = 1;
			this->TBNombre->TextChanged += gcnew System::EventHandler(this, &RegPacientes::TBNombre_TextChanged);
			// 
			// labelNombre
			// 
			this->labelNombre->AutoSize = true;
			this->labelNombre->Dock = System::Windows::Forms::DockStyle::Top;
			this->labelNombre->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNombre->Location = System::Drawing::Point(0, 0);
			this->labelNombre->Name = L"labelNombre";
			this->labelNombre->Size = System::Drawing::Size(73, 18);
			this->labelNombre->TabIndex = 0;
			this->labelNombre->Text = L"Nombre:";
			// 
			// TPConsultList
			// 
			this->TPConsultList->Controls->Add(this->panelListaDeCosultas);
			this->TPConsultList->Controls->Add(this->panelRegistrador3);
			this->TPConsultList->Location = System::Drawing::Point(4, 38);
			this->TPConsultList->Name = L"TPConsultList";
			this->TPConsultList->Padding = System::Windows::Forms::Padding(3);
			this->TPConsultList->Size = System::Drawing::Size(978, 531);
			this->TPConsultList->TabIndex = 2;
			this->TPConsultList->Text = L"Lista De Consultas";
			this->TPConsultList->UseVisualStyleBackColor = true;
			// 
			// panelListaDeCosultas
			// 
			this->panelListaDeCosultas->Controls->Add(this->panelLisConsulta);
			this->panelListaDeCosultas->Controls->Add(this->listView1);
			this->panelListaDeCosultas->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelListaDeCosultas->Location = System::Drawing::Point(3, 3);
			this->panelListaDeCosultas->Name = L"panelListaDeCosultas";
			this->panelListaDeCosultas->Size = System::Drawing::Size(972, 419);
			this->panelListaDeCosultas->TabIndex = 8;
			this->panelListaDeCosultas->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &RegPacientes::panelListaDeCosultas_Paint);
			// 
			// panelLisConsulta
			// 
			this->panelLisConsulta->Controls->Add(this->panelFecha);
			this->panelLisConsulta->Controls->Add(this->panelTratamientoadd);
			this->panelLisConsulta->Controls->Add(this->panelMetivoConsulta);
			this->panelLisConsulta->Controls->Add(this->panelConsultaadd);
			this->panelLisConsulta->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelLisConsulta->Location = System::Drawing::Point(0, 224);
			this->panelLisConsulta->Name = L"panelLisConsulta";
			this->panelLisConsulta->Size = System::Drawing::Size(972, 195);
			this->panelLisConsulta->TabIndex = 5;
			// 
			// panelFecha
			// 
			this->panelFecha->Controls->Add(this->CBAuto);
			this->panelFecha->Controls->Add(this->TBFecha);
			this->panelFecha->Controls->Add(this->lblFecha);
			this->panelFecha->Location = System::Drawing::Point(526, 117);
			this->panelFecha->Name = L"panelFecha";
			this->panelFecha->Size = System::Drawing::Size(406, 54);
			this->panelFecha->TabIndex = 8;
			// 
			// CBAuto
			// 
			this->CBAuto->AutoSize = true;
			this->CBAuto->Checked = true;
			this->CBAuto->CheckState = System::Windows::Forms::CheckState::Checked;
			this->CBAuto->Font = (gcnew System::Drawing::Font(L"Roboto", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CBAuto->Location = System::Drawing::Point(4, 25);
			this->CBAuto->Name = L"CBAuto";
			this->CBAuto->Size = System::Drawing::Size(93, 19);
			this->CBAuto->TabIndex = 2;
			this->CBAuto->Text = L"automatico";
			this->CBAuto->UseVisualStyleBackColor = true;
			// 
			// TBFecha
			// 
			this->TBFecha->Dock = System::Windows::Forms::DockStyle::Right;
			this->TBFecha->Location = System::Drawing::Point(121, 0);
			this->TBFecha->Name = L"TBFecha";
			this->TBFecha->Size = System::Drawing::Size(285, 40);
			this->TBFecha->TabIndex = 1;
			// 
			// lblFecha
			// 
			this->lblFecha->AutoSize = true;
			this->lblFecha->Dock = System::Windows::Forms::DockStyle::Left;
			this->lblFecha->Font = (gcnew System::Drawing::Font(L"Roboto", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFecha->Location = System::Drawing::Point(0, 0);
			this->lblFecha->Name = L"lblFecha";
			this->lblFecha->Size = System::Drawing::Size(63, 22);
			this->lblFecha->TabIndex = 0;
			this->lblFecha->Text = L"Fecha:";
			// 
			// panelTratamientoadd
			// 
			this->panelTratamientoadd->Controls->Add(this->textBoxTratamiento);
			this->panelTratamientoadd->Controls->Add(this->labelTratamiento);
			this->panelTratamientoadd->Location = System::Drawing::Point(526, 40);
			this->panelTratamientoadd->Name = L"panelTratamientoadd";
			this->panelTratamientoadd->Size = System::Drawing::Size(406, 54);
			this->panelTratamientoadd->TabIndex = 6;
			// 
			// textBoxTratamiento
			// 
			this->textBoxTratamiento->Dock = System::Windows::Forms::DockStyle::Right;
			this->textBoxTratamiento->Location = System::Drawing::Point(121, 0);
			this->textBoxTratamiento->Name = L"textBoxTratamiento";
			this->textBoxTratamiento->Size = System::Drawing::Size(285, 40);
			this->textBoxTratamiento->TabIndex = 1;
			// 
			// labelTratamiento
			// 
			this->labelTratamiento->AutoSize = true;
			this->labelTratamiento->Dock = System::Windows::Forms::DockStyle::Left;
			this->labelTratamiento->Font = (gcnew System::Drawing::Font(L"Roboto", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTratamiento->Location = System::Drawing::Point(0, 0);
			this->labelTratamiento->Name = L"labelTratamiento";
			this->labelTratamiento->Size = System::Drawing::Size(112, 22);
			this->labelTratamiento->TabIndex = 0;
			this->labelTratamiento->Text = L"Tratamiento:";
			// 
			// panelMetivoConsulta
			// 
			this->panelMetivoConsulta->Controls->Add(this->TBMotConsulta);
			this->panelMetivoConsulta->Controls->Add(this->labelMotConsulta);
			this->panelMetivoConsulta->Location = System::Drawing::Point(41, 117);
			this->panelMetivoConsulta->Name = L"panelMetivoConsulta";
			this->panelMetivoConsulta->Size = System::Drawing::Size(411, 54);
			this->panelMetivoConsulta->TabIndex = 7;
			// 
			// TBMotConsulta
			// 
			this->TBMotConsulta->Dock = System::Windows::Forms::DockStyle::Right;
			this->TBMotConsulta->Location = System::Drawing::Point(174, 0);
			this->TBMotConsulta->Name = L"TBMotConsulta";
			this->TBMotConsulta->Size = System::Drawing::Size(237, 40);
			this->TBMotConsulta->TabIndex = 1;
			this->TBMotConsulta->TextChanged += gcnew System::EventHandler(this, &RegPacientes::TBMotConsulta_TextChanged);
			// 
			// labelMotConsulta
			// 
			this->labelMotConsulta->AutoSize = true;
			this->labelMotConsulta->Dock = System::Windows::Forms::DockStyle::Left;
			this->labelMotConsulta->Font = (gcnew System::Drawing::Font(L"Roboto", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMotConsulta->Location = System::Drawing::Point(0, 0);
			this->labelMotConsulta->Name = L"labelMotConsulta";
			this->labelMotConsulta->Size = System::Drawing::Size(168, 22);
			this->labelMotConsulta->TabIndex = 0;
			this->labelMotConsulta->Text = L"Motivo de Consulta:";
			// 
			// panelConsultaadd
			// 
			this->panelConsultaadd->Controls->Add(this->textBoxConsulta);
			this->panelConsultaadd->Controls->Add(this->lblCosulta);
			this->panelConsultaadd->Location = System::Drawing::Point(41, 40);
			this->panelConsultaadd->Name = L"panelConsultaadd";
			this->panelConsultaadd->Size = System::Drawing::Size(411, 54);
			this->panelConsultaadd->TabIndex = 5;
			// 
			// textBoxConsulta
			// 
			this->textBoxConsulta->Dock = System::Windows::Forms::DockStyle::Right;
			this->textBoxConsulta->Location = System::Drawing::Point(120, 0);
			this->textBoxConsulta->Name = L"textBoxConsulta";
			this->textBoxConsulta->Size = System::Drawing::Size(291, 40);
			this->textBoxConsulta->TabIndex = 1;
			this->textBoxConsulta->TextChanged += gcnew System::EventHandler(this, &RegPacientes::textBoxConsulta_TextChanged);
			// 
			// lblCosulta
			// 
			this->lblCosulta->AutoSize = true;
			this->lblCosulta->Dock = System::Windows::Forms::DockStyle::Left;
			this->lblCosulta->Font = (gcnew System::Drawing::Font(L"Roboto", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCosulta->Location = System::Drawing::Point(0, 0);
			this->lblCosulta->Name = L"lblCosulta";
			this->lblCosulta->Size = System::Drawing::Size(85, 22);
			this->lblCosulta->TabIndex = 0;
			this->lblCosulta->Text = L"Consulta:";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeaderConsulta,
					this->columnHeaderFecha, this->columnHeaderTratamiento, this->columnHeaderMotConsulta
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(35, 36);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(891, 171);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeaderConsulta
			// 
			this->columnHeaderConsulta->Text = L"Consulta:";
			this->columnHeaderConsulta->Width = 197;
			// 
			// columnHeaderFecha
			// 
			this->columnHeaderFecha->Text = L"Fecha:";
			this->columnHeaderFecha->Width = 148;
			// 
			// columnHeaderTratamiento
			// 
			this->columnHeaderTratamiento->Text = L"Tratamiento:";
			this->columnHeaderTratamiento->Width = 237;
			// 
			// columnHeaderMotConsulta
			// 
			this->columnHeaderMotConsulta->Text = L"Motivo de Consulta:";
			this->columnHeaderMotConsulta->Width = 321;
			// 
			// panelRegistrador3
			// 
			this->panelRegistrador3->Controls->Add(this->BtnOlvidar3);
			this->panelRegistrador3->Controls->Add(this->btnRegistrar3);
			this->panelRegistrador3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelRegistrador3->Location = System::Drawing::Point(3, 422);
			this->panelRegistrador3->Name = L"panelRegistrador3";
			this->panelRegistrador3->Size = System::Drawing::Size(972, 106);
			this->panelRegistrador3->TabIndex = 7;
			// 
			// BtnOlvidar3
			// 
			this->BtnOlvidar3->BackColor = System::Drawing::Color::AliceBlue;
			this->BtnOlvidar3->Dock = System::Windows::Forms::DockStyle::Top;
			this->BtnOlvidar3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BtnOlvidar3->FlatAppearance->BorderSize = 5;
			this->BtnOlvidar3->Font = (gcnew System::Drawing::Font(L"Roboto", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnOlvidar3->IconChar = FontAwesome::Sharp::IconChar::Trash;
			this->BtnOlvidar3->IconColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->BtnOlvidar3->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->BtnOlvidar3->Location = System::Drawing::Point(0, 55);
			this->BtnOlvidar3->Name = L"BtnOlvidar3";
			this->BtnOlvidar3->Padding = System::Windows::Forms::Padding(200, 0, 0, 0);
			this->BtnOlvidar3->Size = System::Drawing::Size(972, 55);
			this->BtnOlvidar3->TabIndex = 1;
			this->BtnOlvidar3->Text = L"Lipiar Datos";
			this->BtnOlvidar3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->BtnOlvidar3->UseVisualStyleBackColor = false;
			// 
			// btnRegistrar3
			// 
			this->btnRegistrar3->BackColor = System::Drawing::Color::AliceBlue;
			this->btnRegistrar3->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnRegistrar3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnRegistrar3->FlatAppearance->BorderSize = 5;
			this->btnRegistrar3->Font = (gcnew System::Drawing::Font(L"Roboto", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrar3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->btnRegistrar3->IconChar = FontAwesome::Sharp::IconChar::AddressCard;
			this->btnRegistrar3->IconColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->btnRegistrar3->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnRegistrar3->Location = System::Drawing::Point(0, 0);
			this->btnRegistrar3->Name = L"btnRegistrar3";
			this->btnRegistrar3->Padding = System::Windows::Forms::Padding(200, 0, 0, 0);
			this->btnRegistrar3->Size = System::Drawing::Size(972, 55);
			this->btnRegistrar3->TabIndex = 0;
			this->btnRegistrar3->Text = L"Registrar";
			this->btnRegistrar3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnRegistrar3->UseVisualStyleBackColor = false;
			this->btnRegistrar3->Click += gcnew System::EventHandler(this, &RegPacientes::btnRegistrar3_Click);
			// 
			// TCHistMed
			// 
			this->TCHistMed->Controls->Add(this->listView2);
			this->TCHistMed->Controls->Add(this->panelAddHistorial);
			this->TCHistMed->Controls->Add(this->panelRegistrador2);
			this->TCHistMed->Location = System::Drawing::Point(4, 38);
			this->TCHistMed->Name = L"TCHistMed";
			this->TCHistMed->Padding = System::Windows::Forms::Padding(3);
			this->TCHistMed->Size = System::Drawing::Size(978, 531);
			this->TCHistMed->TabIndex = 1;
			this->TCHistMed->Text = L"Registro De Historial Medico";
			this->TCHistMed->UseVisualStyleBackColor = true;
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->columnHeaderDiagnAnt,
					this->columnHeaderTratAnt
			});
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(28, 34);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(914, 234);
			this->listView2->TabIndex = 10;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeaderDiagnAnt
			// 
			this->columnHeaderDiagnAnt->Text = L"Diagnosticos Anteriores:";
			this->columnHeaderDiagnAnt->Width = 457;
			// 
			// columnHeaderTratAnt
			// 
			this->columnHeaderTratAnt->Text = L"Tratamientos Anteriores:";
			this->columnHeaderTratAnt->Width = 435;
			// 
			// panelAddHistorial
			// 
			this->panelAddHistorial->Controls->Add(this->btnIconMas);
			this->panelAddHistorial->Controls->Add(this->panel1);
			this->panelAddHistorial->Controls->Add(this->panel2);
			this->panelAddHistorial->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelAddHistorial->Location = System::Drawing::Point(3, 316);
			this->panelAddHistorial->Name = L"panelAddHistorial";
			this->panelAddHistorial->Size = System::Drawing::Size(972, 106);
			this->panelAddHistorial->TabIndex = 9;
			// 
			// btnIconMas
			// 
			this->btnIconMas->FlatAppearance->BorderSize = 0;
			this->btnIconMas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnIconMas->IconChar = FontAwesome::Sharp::IconChar::PlusCircle;
			this->btnIconMas->IconColor = System::Drawing::Color::Black;
			this->btnIconMas->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnIconMas->Location = System::Drawing::Point(886, 18);
			this->btnIconMas->Name = L"btnIconMas";
			this->btnIconMas->Size = System::Drawing::Size(53, 54);
			this->btnIconMas->TabIndex = 9;
			this->btnIconMas->UseVisualStyleBackColor = true;
			this->btnIconMas->Click += gcnew System::EventHandler(this, &RegPacientes::btnIconMas_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(449, 26);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(406, 54);
			this->panel1->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Right;
			this->textBox1->Location = System::Drawing::Point(121, 0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(285, 40);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Left;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tratamiento:";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(36, 26);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(377, 54);
			this->panel2->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Right;
			this->textBox2->Location = System::Drawing::Point(86, 0);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(291, 40);
			this->textBox2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Left;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 22);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Diagnostico:";
			this->label2->Click += gcnew System::EventHandler(this, &RegPacientes::label2_Click);
			// 
			// panelRegistrador2
			// 
			this->panelRegistrador2->Controls->Add(this->BtnOlvidar2);
			this->panelRegistrador2->Controls->Add(this->btnRegistrar2);
			this->panelRegistrador2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelRegistrador2->Location = System::Drawing::Point(3, 422);
			this->panelRegistrador2->Name = L"panelRegistrador2";
			this->panelRegistrador2->Size = System::Drawing::Size(972, 106);
			this->panelRegistrador2->TabIndex = 8;
			// 
			// BtnOlvidar2
			// 
			this->BtnOlvidar2->BackColor = System::Drawing::Color::AliceBlue;
			this->BtnOlvidar2->Dock = System::Windows::Forms::DockStyle::Top;
			this->BtnOlvidar2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BtnOlvidar2->FlatAppearance->BorderSize = 5;
			this->BtnOlvidar2->Font = (gcnew System::Drawing::Font(L"Roboto", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnOlvidar2->IconChar = FontAwesome::Sharp::IconChar::Trash;
			this->BtnOlvidar2->IconColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->BtnOlvidar2->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->BtnOlvidar2->Location = System::Drawing::Point(0, 55);
			this->BtnOlvidar2->Name = L"BtnOlvidar2";
			this->BtnOlvidar2->Padding = System::Windows::Forms::Padding(200, 0, 0, 0);
			this->BtnOlvidar2->Size = System::Drawing::Size(972, 55);
			this->BtnOlvidar2->TabIndex = 1;
			this->BtnOlvidar2->Text = L"Lipiar Datos";
			this->BtnOlvidar2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->BtnOlvidar2->UseVisualStyleBackColor = false;
			// 
			// btnRegistrar2
			// 
			this->btnRegistrar2->BackColor = System::Drawing::Color::AliceBlue;
			this->btnRegistrar2->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnRegistrar2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnRegistrar2->FlatAppearance->BorderSize = 5;
			this->btnRegistrar2->Font = (gcnew System::Drawing::Font(L"Roboto", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrar2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->btnRegistrar2->IconChar = FontAwesome::Sharp::IconChar::AddressCard;
			this->btnRegistrar2->IconColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->btnRegistrar2->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnRegistrar2->Location = System::Drawing::Point(0, 0);
			this->btnRegistrar2->Name = L"btnRegistrar2";
			this->btnRegistrar2->Padding = System::Windows::Forms::Padding(200, 0, 0, 0);
			this->btnRegistrar2->Size = System::Drawing::Size(972, 55);
			this->btnRegistrar2->TabIndex = 0;
			this->btnRegistrar2->Text = L"Registrar";
			this->btnRegistrar2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnRegistrar2->UseVisualStyleBackColor = false;
			this->btnRegistrar2->Click += gcnew System::EventHandler(this, &RegPacientes::btnRegistrar2_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->labelIDPACIENTE);
			this->tabPage1->Controls->Add(this->iconButton1);
			this->tabPage1->Controls->Add(this->panel9);
			this->tabPage1->Controls->Add(this->panel10);
			this->tabPage1->Controls->Add(this->panel7);
			this->tabPage1->Controls->Add(this->panel6);
			this->tabPage1->Controls->Add(this->panel8);
			this->tabPage1->Controls->Add(this->panel5);
			this->tabPage1->Location = System::Drawing::Point(4, 38);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(978, 531);
			this->tabPage1->TabIndex = 3;
			this->tabPage1->Text = L"Agregar Visitas";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// labelIDPACIENTE
			// 
			this->labelIDPACIENTE->AutoSize = true;
			this->labelIDPACIENTE->Location = System::Drawing::Point(236, 411);
			this->labelIDPACIENTE->Name = L"labelIDPACIENTE";
			this->labelIDPACIENTE->Size = System::Drawing::Size(546, 34);
			this->labelIDPACIENTE->TabIndex = 8;
			this->labelIDPACIENTE->Text = L"Aun no a introducido datos del paciente";
			this->labelIDPACIENTE->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// iconButton1
			// 
			this->iconButton1->BackColor = System::Drawing::Color::AliceBlue;
			this->iconButton1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->iconButton1->FlatAppearance->BorderSize = 5;
			this->iconButton1->Font = (gcnew System::Drawing::Font(L"Roboto", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->iconButton1->IconChar = FontAwesome::Sharp::IconChar::AddressCard;
			this->iconButton1->IconColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->iconButton1->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->iconButton1->Location = System::Drawing::Point(3, 353);
			this->iconButton1->Name = L"iconButton1";
			this->iconButton1->Padding = System::Windows::Forms::Padding(200, 0, 0, 0);
			this->iconButton1->Size = System::Drawing::Size(972, 55);
			this->iconButton1->TabIndex = 7;
			this->iconButton1->Text = L"Agregar Visita";
			this->iconButton1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->iconButton1->UseVisualStyleBackColor = false;
			this->iconButton1->Click += gcnew System::EventHandler(this, &RegPacientes::iconButton1_Click);
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->TBHoraVisita);
			this->panel9->Controls->Add(this->label7);
			this->panel9->Location = System::Drawing::Point(504, 254);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(390, 81);
			this->panel9->TabIndex = 6;
			// 
			// TBHoraVisita
			// 
			this->TBHoraVisita->Dock = System::Windows::Forms::DockStyle::Top;
			this->TBHoraVisita->Location = System::Drawing::Point(0, 34);
			this->TBHoraVisita->Name = L"TBHoraVisita";
			this->TBHoraVisita->Size = System::Drawing::Size(390, 40);
			this->TBHoraVisita->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Top;
			this->label7->Location = System::Drawing::Point(0, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(216, 34);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Hora (HH:MM):";
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->DTVFechaVisita);
			this->panel10->Controls->Add(this->lvlFecha);
			this->panel10->Location = System::Drawing::Point(45, 254);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(383, 81);
			this->panel10->TabIndex = 5;
			// 
			// DTVFechaVisita
			// 
			this->DTVFechaVisita->Dock = System::Windows::Forms::DockStyle::Top;
			this->DTVFechaVisita->Font = (gcnew System::Drawing::Font(L"Roboto", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DTVFechaVisita->Location = System::Drawing::Point(0, 34);
			this->DTVFechaVisita->Name = L"DTVFechaVisita";
			this->DTVFechaVisita->Size = System::Drawing::Size(383, 28);
			this->DTVFechaVisita->TabIndex = 7;
			// 
			// lvlFecha
			// 
			this->lvlFecha->AutoSize = true;
			this->lvlFecha->Dock = System::Windows::Forms::DockStyle::Top;
			this->lvlFecha->Location = System::Drawing::Point(0, 0);
			this->lvlFecha->Name = L"lvlFecha";
			this->lvlFecha->Size = System::Drawing::Size(103, 34);
			this->lvlFecha->TabIndex = 0;
			this->lvlFecha->Text = L"Fecha:";
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->TBDirecionVisita);
			this->panel7->Controls->Add(this->lblDireccion);
			this->panel7->Location = System::Drawing::Point(504, 147);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(390, 81);
			this->panel7->TabIndex = 4;
			// 
			// TBDirecionVisita
			// 
			this->TBDirecionVisita->Dock = System::Windows::Forms::DockStyle::Top;
			this->TBDirecionVisita->Location = System::Drawing::Point(0, 34);
			this->TBDirecionVisita->Name = L"TBDirecionVisita";
			this->TBDirecionVisita->Size = System::Drawing::Size(390, 40);
			this->TBDirecionVisita->TabIndex = 1;
			this->TBDirecionVisita->TextChanged += gcnew System::EventHandler(this, &RegPacientes::textBox5_TextChanged);
			// 
			// lblDireccion
			// 
			this->lblDireccion->AutoSize = true;
			this->lblDireccion->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblDireccion->Location = System::Drawing::Point(0, 0);
			this->lblDireccion->Name = L"lblDireccion";
			this->lblDireccion->Size = System::Drawing::Size(149, 34);
			this->lblDireccion->TabIndex = 0;
			this->lblDireccion->Text = L"Direccion:";
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->TBIdVisita);
			this->panel6->Controls->Add(this->lvlId);
			this->panel6->Location = System::Drawing::Point(504, 40);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(390, 81);
			this->panel6->TabIndex = 2;
			// 
			// TBIdVisita
			// 
			this->TBIdVisita->Dock = System::Windows::Forms::DockStyle::Top;
			this->TBIdVisita->Location = System::Drawing::Point(0, 34);
			this->TBIdVisita->Name = L"TBIdVisita";
			this->TBIdVisita->Size = System::Drawing::Size(390, 40);
			this->TBIdVisita->TabIndex = 1;
			// 
			// lvlId
			// 
			this->lvlId->AutoSize = true;
			this->lvlId->Dock = System::Windows::Forms::DockStyle::Top;
			this->lvlId->Location = System::Drawing::Point(0, 0);
			this->lvlId->Name = L"lvlId";
			this->lvlId->Size = System::Drawing::Size(51, 34);
			this->lvlId->TabIndex = 0;
			this->lvlId->Text = L"ID:";
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->TBMotivoVisita);
			this->panel8->Controls->Add(this->lvlmotivo);
			this->panel8->Location = System::Drawing::Point(45, 147);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(383, 81);
			this->panel8->TabIndex = 3;
			// 
			// TBMotivoVisita
			// 
			this->TBMotivoVisita->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TBMotivoVisita->Location = System::Drawing::Point(0, 34);
			this->TBMotivoVisita->Name = L"TBMotivoVisita";
			this->TBMotivoVisita->Size = System::Drawing::Size(383, 40);
			this->TBMotivoVisita->TabIndex = 1;
			// 
			// lvlmotivo
			// 
			this->lvlmotivo->AutoSize = true;
			this->lvlmotivo->Dock = System::Windows::Forms::DockStyle::Top;
			this->lvlmotivo->Location = System::Drawing::Point(0, 0);
			this->lvlmotivo->Name = L"lvlmotivo";
			this->lvlmotivo->Size = System::Drawing::Size(115, 34);
			this->lvlmotivo->TabIndex = 0;
			this->lvlmotivo->Text = L"Motivo:";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->TBNombreVisita);
			this->panel5->Controls->Add(this->lvlNVis);
			this->panel5->Location = System::Drawing::Point(45, 40);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(383, 81);
			this->panel5->TabIndex = 0;
			// 
			// TBNombreVisita
			// 
			this->TBNombreVisita->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TBNombreVisita->Location = System::Drawing::Point(0, 34);
			this->TBNombreVisita->Name = L"TBNombreVisita";
			this->TBNombreVisita->Size = System::Drawing::Size(383, 40);
			this->TBNombreVisita->TabIndex = 1;
			// 
			// lvlNVis
			// 
			this->lvlNVis->AutoSize = true;
			this->lvlNVis->Dock = System::Windows::Forms::DockStyle::Top;
			this->lvlNVis->Location = System::Drawing::Point(0, 0);
			this->lvlNVis->Name = L"lvlNVis";
			this->lvlNVis->Size = System::Drawing::Size(130, 34);
			this->lvlNVis->TabIndex = 0;
			this->lvlNVis->Text = L"Nombre:";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &RegPacientes::timer1_Tick);
			// 
			// RegPacientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(986, 573);
			this->Controls->Add(this->panelRegPacientes);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RegPacientes";
			this->Text = L"RegPacientes";
			this->panelRegPacientes->ResumeLayout(false);
			this->TBRegistro->ResumeLayout(false);
			this->TCRegDatos->ResumeLayout(false);
			this->panelRegistro->ResumeLayout(false);
			this->panelRegistro->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panelRegistrador->ResumeLayout(false);
			this->panelCorreoElectronico->ResumeLayout(false);
			this->panelCorreoElectronico->PerformLayout();
			this->panelTelefono->ResumeLayout(false);
			this->panelTelefono->PerformLayout();
			this->panelCostos->ResumeLayout(false);
			this->panelCostos->PerformLayout();
			this->panelPagado->ResumeLayout(false);
			this->panelPagado->PerformLayout();
			this->panelCDCons->ResumeLayout(false);
			this->panelCDCons->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDCostoConsul))->EndInit();
			this->panelGenero->ResumeLayout(false);
			this->panelGenero->PerformLayout();
			this->panelEdad->ResumeLayout(false);
			this->panelEdad->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDEdad))->EndInit();
			this->panelApellido->ResumeLayout(false);
			this->panelApellido->PerformLayout();
			this->panelNombre->ResumeLayout(false);
			this->panelNombre->PerformLayout();
			this->TPConsultList->ResumeLayout(false);
			this->panelListaDeCosultas->ResumeLayout(false);
			this->panelLisConsulta->ResumeLayout(false);
			this->panelFecha->ResumeLayout(false);
			this->panelFecha->PerformLayout();
			this->panelTratamientoadd->ResumeLayout(false);
			this->panelTratamientoadd->PerformLayout();
			this->panelMetivoConsulta->ResumeLayout(false);
			this->panelMetivoConsulta->PerformLayout();
			this->panelConsultaadd->ResumeLayout(false);
			this->panelConsultaadd->PerformLayout();
			this->panelRegistrador3->ResumeLayout(false);
			this->TCHistMed->ResumeLayout(false);
			this->panelAddHistorial->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panelRegistrador2->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: Conector^ Conex = gcnew Conector();

	private: bool estadoPago = false;


	private: System::Void RBtnSiPago_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		bool estadoPago = true;

	}
private: System::Void lblRegistro_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try {
		Conex->agregarPacienteConec(
			Convert::ToInt64(TBId->Text),
			TBNombre->Text,
			TBApellido->Text,
			Convert::ToInt32(NUDEdad->Value),
			CB_Genero->Text,
			Convert::ToDouble(NUDCostoConsul->Value),
			estadoPago,
			TBTelefono->Text,
			TBCorreo->Text,
			textBoxConsulta->Text,
			TBMotConsulta->Text,
			DateTime::Now, TBDirecion->Text
		);

	//	gcnew AddGood();
           
		//gcnew AddGood()->Show();

             //   ((gcnew AddGood())->TopMost))->Show();
                (gcnew AddGood())->TopMost = true;
				(gcnew AddGood())->Location = this->Location;//System::Drawing::Point(342, 0);
                (gcnew AddGood())->Show();

	}
    catch (Exception^ x) {

        MessageBox::Show(x->Message + "\n Por favor introduzca todos los datos");
	}	
}
private: System::Void panelListaDeCosultas_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnIconMas_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TBNombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TBApellido_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void NUDEdad_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CB_Genero_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void NUDCostoConsul_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RBtnSinPagar_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	bool estadoPago = false;
}
private: System::Void TBTelefono_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TBCorreo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panelRegistro_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxConsulta_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TBMotConsulta_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnRegistrar3_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		Conex->agregarPacienteConec(
			Convert::ToInt64(TBId->Text),
			TBNombre->Text,
			TBApellido->Text,
			Convert::ToInt32(NUDEdad->Value),
			CB_Genero->Text,
			Convert::ToDouble(NUDCostoConsul->Value),
			estadoPago,
			TBTelefono->Text,
			TBCorreo->Text,
			textBoxConsulta->Text,
			TBMotConsulta->Text,
			DateTime::Now, TBDirecion->Text
		);

		(gcnew AddGood())->TopMost = true;
		(gcnew AddGood())->Location = this->Location;//System::Drawing::Point(342, 0);
		(gcnew AddGood())->Show();

		
	}
	catch (Exception^ x) {

        MessageBox::Show(x->Message + "\n Por favor introduzca todos los datos");

	}
}
private: System::Void btnRegistrar2_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		Conex->agregarPacienteConec(
			Convert::ToInt64(TBId->Text),
			TBNombre->Text,
			TBApellido->Text,
			Convert::ToInt32(NUDEdad->Value),
			CB_Genero->Text,
			Convert::ToDouble(NUDCostoConsul->Value),
			estadoPago,
			TBTelefono->Text,
			TBCorreo->Text,
			textBoxConsulta->Text,
			TBMotConsulta->Text,
			DateTime::Now, TBDirecion->Text

		);

		(gcnew AddGood())->TopMost = true;
		(gcnew AddGood())->Location = this->Location;//System::Drawing::Point(342, 0);
		(gcnew AddGood())->Show();
	}
	catch (Exception^ x) {

		MessageBox::Show(x->Message + "\n Por favor introduzca todos los datos");
	}
}
private: System::Void PictureAddBien_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PBAddBien_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void TBId_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	if (!String::IsNullOrEmpty(TBId->Text)) {
		Conex->YaExisteONo(Convert::ToInt64(TBId->Text), SiOrNot);
		labelIDPACIENTE->Text = ("ID del paciente: " + TBId->Text);
	}
	
}
private: System::Void TBId_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar)) {
		e->Handled = true; 
	}
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void iconButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	try{
	Conex->AgregarVisita(Convert::ToInt64(TBId->Text), Convert::ToInt64(TBIdVisita->Text), TBNombreVisita->Text, TBMotivoVisita->Text, TBDirecion->Text, DTVFechaVisita->Value, TBHoraVisita->Text);

	(gcnew AddGood())->TopMost = true;
	(gcnew AddGood())->Location = this->Location;  //System::Drawing::Point(342, 0);
	(gcnew AddGood())->Show();


	TBId->Text = "";
	TBIdVisita->Text = "";
	TBNombreVisita->Text = "";
	TBMotivoVisita->Text = ""; 
	TBDirecion->Text = ""; 
	TBHoraVisita->Text = "";
	TBDirecion->Text = "";



	}
	catch (Exception^ x) {
		MessageBox::Show(x->Message + "\n Por favor introduzca todos los datos");
	}


}
};
}
