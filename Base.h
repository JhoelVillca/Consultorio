#pragma once
#include <Windows.h>
#include "RegPacientes.h"
#include "Rebote.h"
#include "AtePacientes.h"
#include "ConsNexPaciente.h"
#include "Gestion.h"
#include "MyForm.h"
#include "Visita.h"
#include "Conector.h"

namespace Consultorio {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Resumen de Base
	/// </summary>
	public ref class Base : public System::Windows::Forms::Form
	{
	public:
		Base(void)
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
		~Base()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelLateral;
	protected:
	private: System::Windows::Forms::Panel^ panelTitulo;

	private: System::Windows::Forms::Panel^ panelSuperior;
	private: System::Windows::Forms::Panel^ panelControlVentana;
	private: FontAwesome::Sharp::IconButton^ btnminimizar;

	private: FontAwesome::Sharp::IconButton^ btnVentana;
	private: FontAwesome::Sharp::IconButton^ btnExit;
	private: System::Windows::Forms::Panel^ panelContenedor;
	private: FontAwesome::Sharp::IconButton^ btnInicio;
	private: FontAwesome::Sharp::IconButton^ btnGestionPacientes;

	private: FontAwesome::Sharp::IconButton^ btnConsultarProximoPaciente;

	private: FontAwesome::Sharp::IconButton^ btnAtenderPaciente;

	private: FontAwesome::Sharp::IconButton^ btnRegPacientes;


	private: System::Windows::Forms::Label^ labelTitulo;
	private: System::Windows::Forms::PictureBox^ ImagenTitulo;
	private: System::Windows::Forms::Label^ Tiempo;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	private: FontAwesome::Sharp::IconButton^ BtnVisitas;




	private: System::Object^ SenderA;


	//private:  bool dragging;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>



		[System::Runtime::InteropServices::DllImport("user32.dll")]
			static void ReleaseCapture();

		[System::Runtime::InteropServices::DllImport("user32.dll")]
			static int SendMessage(IntPtr hWnd, int Msg, int wParam, int lParam);


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Base::typeid));
			this->panelLateral = (gcnew System::Windows::Forms::Panel());
			this->BtnVisitas = (gcnew FontAwesome::Sharp::IconButton());
			this->Tiempo = (gcnew System::Windows::Forms::Label());
			this->btnGestionPacientes = (gcnew FontAwesome::Sharp::IconButton());
			this->btnConsultarProximoPaciente = (gcnew FontAwesome::Sharp::IconButton());
			this->btnAtenderPaciente = (gcnew FontAwesome::Sharp::IconButton());
			this->btnRegPacientes = (gcnew FontAwesome::Sharp::IconButton());
			this->btnInicio = (gcnew FontAwesome::Sharp::IconButton());
			this->panelTitulo = (gcnew System::Windows::Forms::Panel());
			this->ImagenTitulo = (gcnew System::Windows::Forms::PictureBox());
			this->labelTitulo = (gcnew System::Windows::Forms::Label());
			this->panelSuperior = (gcnew System::Windows::Forms::Panel());
			this->panelControlVentana = (gcnew System::Windows::Forms::Panel());
			this->btnminimizar = (gcnew FontAwesome::Sharp::IconButton());
			this->btnVentana = (gcnew FontAwesome::Sharp::IconButton());
			this->btnExit = (gcnew FontAwesome::Sharp::IconButton());
			this->panelContenedor = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelLateral->SuspendLayout();
			this->panelTitulo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagenTitulo))->BeginInit();
			this->panelSuperior->SuspendLayout();
			this->panelControlVentana->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelLateral
			// 
			this->panelLateral->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->panelLateral->Controls->Add(this->BtnVisitas);
			this->panelLateral->Controls->Add(this->Tiempo);
			this->panelLateral->Controls->Add(this->btnGestionPacientes);
			this->panelLateral->Controls->Add(this->btnConsultarProximoPaciente);
			this->panelLateral->Controls->Add(this->btnAtenderPaciente);
			this->panelLateral->Controls->Add(this->btnRegPacientes);
			this->panelLateral->Controls->Add(this->btnInicio);
			this->panelLateral->Controls->Add(this->panelTitulo);
			this->panelLateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelLateral->Location = System::Drawing::Point(0, 0);
			this->panelLateral->Name = L"panelLateral";
			this->panelLateral->Size = System::Drawing::Size(256, 720);
			this->panelLateral->TabIndex = 0;
			// 
			// BtnVisitas
			// 
			this->BtnVisitas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->BtnVisitas->Dock = System::Windows::Forms::DockStyle::Top;
			this->BtnVisitas->FlatAppearance->BorderSize = 0;
			this->BtnVisitas->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->BtnVisitas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnVisitas->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnVisitas->ForeColor = System::Drawing::Color::White;
			this->BtnVisitas->IconChar = FontAwesome::Sharp::IconChar::UserGroup;
			this->BtnVisitas->IconColor = System::Drawing::Color::White;
			this->BtnVisitas->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->BtnVisitas->IconSize = 40;
			this->BtnVisitas->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->BtnVisitas->Location = System::Drawing::Point(0, 439);
			this->BtnVisitas->Name = L"BtnVisitas";
			this->BtnVisitas->Size = System::Drawing::Size(256, 66);
			this->BtnVisitas->TabIndex = 7;
			this->BtnVisitas->Text = L"Visitas";
			this->BtnVisitas->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->BtnVisitas->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->BtnVisitas->UseVisualStyleBackColor = false;
			this->BtnVisitas->Click += gcnew System::EventHandler(this, &Base::BtnVisitas_Click);
			// 
			// Tiempo
			// 
			this->Tiempo->AutoSize = true;
			this->Tiempo->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Tiempo->Font = (gcnew System::Drawing::Font(L"Roboto", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tiempo->ForeColor = System::Drawing::Color::White;
			this->Tiempo->Location = System::Drawing::Point(0, 692);
			this->Tiempo->Name = L"Tiempo";
			this->Tiempo->Padding = System::Windows::Forms::Padding(56, 0, 0, 0);
			this->Tiempo->Size = System::Drawing::Size(184, 28);
			this->Tiempo->TabIndex = 6;
			this->Tiempo->Text = L"HH:mm:ss";
			this->Tiempo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Tiempo->Click += gcnew System::EventHandler(this, &Base::Tiempo_Click);
			// 
			// btnGestionPacientes
			// 
			this->btnGestionPacientes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->btnGestionPacientes->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnGestionPacientes->FlatAppearance->BorderSize = 0;
			this->btnGestionPacientes->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btnGestionPacientes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestionPacientes->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGestionPacientes->ForeColor = System::Drawing::Color::White;
			this->btnGestionPacientes->IconChar = FontAwesome::Sharp::IconChar::List;
			this->btnGestionPacientes->IconColor = System::Drawing::Color::White;
			this->btnGestionPacientes->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnGestionPacientes->IconSize = 40;
			this->btnGestionPacientes->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGestionPacientes->Location = System::Drawing::Point(0, 373);
			this->btnGestionPacientes->Name = L"btnGestionPacientes";
			this->btnGestionPacientes->Size = System::Drawing::Size(256, 66);
			this->btnGestionPacientes->TabIndex = 5;
			this->btnGestionPacientes->Text = L"Gestion De Informacion De Pacientes";
			this->btnGestionPacientes->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGestionPacientes->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnGestionPacientes->UseVisualStyleBackColor = false;
			this->btnGestionPacientes->Click += gcnew System::EventHandler(this, &Base::btnGestionPacientes_Click);
			// 
			// btnConsultarProximoPaciente
			// 
			this->btnConsultarProximoPaciente->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->btnConsultarProximoPaciente->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnConsultarProximoPaciente->FlatAppearance->BorderSize = 0;
			this->btnConsultarProximoPaciente->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btnConsultarProximoPaciente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnConsultarProximoPaciente->Font = (gcnew System::Drawing::Font(L"Roboto", 12));
			this->btnConsultarProximoPaciente->ForeColor = System::Drawing::Color::White;
			this->btnConsultarProximoPaciente->IconChar = FontAwesome::Sharp::IconChar::User;
			this->btnConsultarProximoPaciente->IconColor = System::Drawing::Color::White;
			this->btnConsultarProximoPaciente->IconFont = FontAwesome::Sharp::IconFont::Solid;
			this->btnConsultarProximoPaciente->IconSize = 40;
			this->btnConsultarProximoPaciente->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnConsultarProximoPaciente->Location = System::Drawing::Point(0, 307);
			this->btnConsultarProximoPaciente->Name = L"btnConsultarProximoPaciente";
			this->btnConsultarProximoPaciente->Size = System::Drawing::Size(256, 66);
			this->btnConsultarProximoPaciente->TabIndex = 4;
			this->btnConsultarProximoPaciente->Text = L"Consultar Proximo Paciente";
			this->btnConsultarProximoPaciente->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnConsultarProximoPaciente->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnConsultarProximoPaciente->UseVisualStyleBackColor = false;
			this->btnConsultarProximoPaciente->Click += gcnew System::EventHandler(this, &Base::btnConsultarProximoPaciente_Click);
			// 
			// btnAtenderPaciente
			// 
			this->btnAtenderPaciente->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->btnAtenderPaciente->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnAtenderPaciente->FlatAppearance->BorderSize = 0;
			this->btnAtenderPaciente->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btnAtenderPaciente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAtenderPaciente->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAtenderPaciente->ForeColor = System::Drawing::Color::White;
			this->btnAtenderPaciente->IconChar = FontAwesome::Sharp::IconChar::Heart;
			this->btnAtenderPaciente->IconColor = System::Drawing::Color::White;
			this->btnAtenderPaciente->IconFont = FontAwesome::Sharp::IconFont::Solid;
			this->btnAtenderPaciente->IconSize = 40;
			this->btnAtenderPaciente->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAtenderPaciente->Location = System::Drawing::Point(0, 241);
			this->btnAtenderPaciente->Name = L"btnAtenderPaciente";
			this->btnAtenderPaciente->Size = System::Drawing::Size(256, 66);
			this->btnAtenderPaciente->TabIndex = 3;
			this->btnAtenderPaciente->Text = L"Atender Paciente";
			this->btnAtenderPaciente->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAtenderPaciente->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnAtenderPaciente->UseVisualStyleBackColor = false;
			this->btnAtenderPaciente->Click += gcnew System::EventHandler(this, &Base::btnAtenderPaciente_Click);
			// 
			// btnRegPacientes
			// 
			this->btnRegPacientes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->btnRegPacientes->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnRegPacientes->FlatAppearance->BorderSize = 0;
			this->btnRegPacientes->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btnRegPacientes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegPacientes->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegPacientes->ForeColor = System::Drawing::Color::White;
			this->btnRegPacientes->IconChar = FontAwesome::Sharp::IconChar::AddressCard;
			this->btnRegPacientes->IconColor = System::Drawing::Color::White;
			this->btnRegPacientes->IconFont = FontAwesome::Sharp::IconFont::Solid;
			this->btnRegPacientes->IconSize = 40;
			this->btnRegPacientes->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRegPacientes->Location = System::Drawing::Point(0, 175);
			this->btnRegPacientes->Name = L"btnRegPacientes";
			this->btnRegPacientes->Size = System::Drawing::Size(256, 66);
			this->btnRegPacientes->TabIndex = 2;
			this->btnRegPacientes->Text = L"Registrar Pacientes";
			this->btnRegPacientes->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRegPacientes->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnRegPacientes->UseVisualStyleBackColor = false;
			this->btnRegPacientes->Click += gcnew System::EventHandler(this, &Base::btnRegPacientes_Click);
			// 
			// btnInicio
			// 
			this->btnInicio->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->btnInicio->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnInicio->FlatAppearance->BorderSize = 0;
			this->btnInicio->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->btnInicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnInicio->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInicio->ForeColor = System::Drawing::Color::White;
			this->btnInicio->IconChar = FontAwesome::Sharp::IconChar::House;
			this->btnInicio->IconColor = System::Drawing::Color::WhiteSmoke;
			this->btnInicio->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnInicio->IconSize = 40;
			this->btnInicio->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnInicio->Location = System::Drawing::Point(0, 109);
			this->btnInicio->Name = L"btnInicio";
			this->btnInicio->Size = System::Drawing::Size(256, 66);
			this->btnInicio->TabIndex = 1;
			this->btnInicio->Text = L"Inicio";
			this->btnInicio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnInicio->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnInicio->UseVisualStyleBackColor = false;
			this->btnInicio->Click += gcnew System::EventHandler(this, &Base::btnInicio_Click);
			// 
			// panelTitulo
			// 
			this->panelTitulo->Controls->Add(this->ImagenTitulo);
			this->panelTitulo->Controls->Add(this->labelTitulo);
			this->panelTitulo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTitulo->Location = System::Drawing::Point(0, 0);
			this->panelTitulo->Name = L"panelTitulo";
			this->panelTitulo->Size = System::Drawing::Size(256, 109);
			this->panelTitulo->TabIndex = 0;
			// 
			// ImagenTitulo
			// 
			this->ImagenTitulo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ImagenTitulo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagenTitulo.Image")));
			this->ImagenTitulo->Location = System::Drawing::Point(0, 0);
			this->ImagenTitulo->Name = L"ImagenTitulo";
			this->ImagenTitulo->Size = System::Drawing::Size(256, 109);
			this->ImagenTitulo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ImagenTitulo->TabIndex = 1;
			this->ImagenTitulo->TabStop = false;
			this->ImagenTitulo->Click += gcnew System::EventHandler(this, &Base::ImagenTitulo_Click);
			// 
			// labelTitulo
			// 
			this->labelTitulo->AutoSize = true;
			this->labelTitulo->Font = (gcnew System::Drawing::Font(L"Brush Script MT", 28.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitulo->ForeColor = System::Drawing::SystemColors::Control;
			this->labelTitulo->Location = System::Drawing::Point(30, 27);
			this->labelTitulo->Name = L"labelTitulo";
			this->labelTitulo->Size = System::Drawing::Size(196, 58);
			this->labelTitulo->TabIndex = 0;
			this->labelTitulo->Text = L"Consultorio";
			// 
			// panelSuperior
			// 
			this->panelSuperior->Controls->Add(this->panelControlVentana);
			this->panelSuperior->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelSuperior->Location = System::Drawing::Point(256, 0);
			this->panelSuperior->Name = L"panelSuperior";
			this->panelSuperior->Size = System::Drawing::Size(1004, 100);
			this->panelSuperior->TabIndex = 1;
			this->panelSuperior->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Base::panelSuperior_Paint);
			this->panelSuperior->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Base::panelSuperior_MouseDown);
			this->panelSuperior->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Base::panelSuperior_MouseMove);
			// 
			// panelControlVentana
			// 
			this->panelControlVentana->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panelControlVentana->Controls->Add(this->btnminimizar);
			this->panelControlVentana->Controls->Add(this->btnVentana);
			this->panelControlVentana->Controls->Add(this->btnExit);
			this->panelControlVentana->Location = System::Drawing::Point(818, 0);
			this->panelControlVentana->Name = L"panelControlVentana";
			this->panelControlVentana->Size = System::Drawing::Size(186, 62);
			this->panelControlVentana->TabIndex = 0;
			// 
			// btnminimizar
			// 
			this->btnminimizar->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnminimizar->FlatAppearance->BorderSize = 0;
			this->btnminimizar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnminimizar->Flip = FontAwesome::Sharp::FlipOrientation::Horizontal;
			this->btnminimizar->IconChar = FontAwesome::Sharp::IconChar::WindowMinimize;
			this->btnminimizar->IconColor = System::Drawing::Color::Black;
			this->btnminimizar->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnminimizar->IconSize = 40;
			this->btnminimizar->Location = System::Drawing::Point(0, 0);
			this->btnminimizar->Name = L"btnminimizar";
			this->btnminimizar->Size = System::Drawing::Size(62, 62);
			this->btnminimizar->TabIndex = 2;
			this->btnminimizar->UseVisualStyleBackColor = true;
			this->btnminimizar->Click += gcnew System::EventHandler(this, &Base::btnminimizar_Click);
			// 
			// btnVentana
			// 
			this->btnVentana->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnVentana->FlatAppearance->BorderSize = 0;
			this->btnVentana->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVentana->Flip = FontAwesome::Sharp::FlipOrientation::Horizontal;
			this->btnVentana->IconChar = FontAwesome::Sharp::IconChar::WindowMaximize;
			this->btnVentana->IconColor = System::Drawing::Color::Black;
			this->btnVentana->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnVentana->Location = System::Drawing::Point(62, 0);
			this->btnVentana->Name = L"btnVentana";
			this->btnVentana->Size = System::Drawing::Size(62, 62);
			this->btnVentana->TabIndex = 1;
			this->btnVentana->UseVisualStyleBackColor = true;
			this->btnVentana->Click += gcnew System::EventHandler(this, &Base::btnVentana_Click);
			// 
			// btnExit
			// 
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Flip = FontAwesome::Sharp::FlipOrientation::Horizontal;
			this->btnExit->IconChar = FontAwesome::Sharp::IconChar::CircleXmark;
			this->btnExit->IconColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->btnExit->IconFont = FontAwesome::Sharp::IconFont::Solid;
			this->btnExit->IconSize = 56;
			this->btnExit->Location = System::Drawing::Point(124, 0);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(62, 62);
			this->btnExit->TabIndex = 0;
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Base::btnExit_Click);
			// 
			// panelContenedor
			// 
			this->panelContenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelContenedor->Location = System::Drawing::Point(256, 100);
			this->panelContenedor->Name = L"panelContenedor";
			this->panelContenedor->Size = System::Drawing::Size(1004, 620);
			this->panelContenedor->TabIndex = 2;
			this->panelContenedor->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Base::panelContenedor_Paint);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Base::timer1_Tick);
			// 
			// Base
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(1260, 720);
			this->Controls->Add(this->panelContenedor);
			this->Controls->Add(this->panelSuperior);
			this->Controls->Add(this->panelLateral);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Base";
			this->Text = L"Base";
			this->SizeChanged += gcnew System::EventHandler(this, &Base::Base_SizeChanged);
			this->panelLateral->ResumeLayout(false);
			this->panelLateral->PerformLayout();
			this->panelTitulo->ResumeLayout(false);
			this->panelTitulo->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagenTitulo))->EndInit();
			this->panelSuperior->ResumeLayout(false);
			this->panelControlVentana->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
			
		
private: void SeleccionarFormulario(Form^ formulario, System::Object^ senderB)
 {

	if(SenderA != senderB){
		if (this->panelContenedor->Controls->Count > 0)
			this->panelContenedor->Controls->RemoveAt(0);
		formulario->TopLevel = false;
		formulario->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		formulario->Dock = DockStyle::Fill;
		this->panelContenedor->Controls->Add(formulario);
		this->panelContenedor->Tag = formulario;
		if (SenderA != nullptr) {
			safe_cast<Button^>(SenderA)->BackColor = Color::FromArgb(59, 130, 246);
			safe_cast<Button^>(SenderA)->ForeColor = Color::WhiteSmoke;
			safe_cast<FontAwesome::Sharp::IconButton^>(SenderA)->IconColor = Color::WhiteSmoke;
		};
		if (senderB != nullptr) {
			safe_cast<Button^>(senderB)->BackColor = formulario->BackColor;
			safe_cast<Button^>(senderB)->ForeColor = Color::FromArgb(59, 130, 246);
			safe_cast<FontAwesome::Sharp::IconButton^>(senderB)->IconColor = Color::FromArgb(59, 130, 246);
		}
		SenderA = senderB;	
		formulario->Show();
	}
}


private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {

	Application::Exit();
}
private: System::Void btnVentana_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState == FormWindowState::Normal) {
		this->WindowState = FormWindowState::Maximized;
		//btnVentana->IconChar = FontAwesome::Sharp::IconChar::WindowRestore;
	}
	else {
		this->WindowState = FormWindowState::Normal;
		//btnVentana->IconChar = FontAwesome::Sharp::IconChar::WindowMaximize;
	}
}
private: System::Void btnminimizar_Click(System::Object^ sender, System::EventArgs^ e) {

	this->WindowState = FormWindowState::Minimized;
}
private: System::Void panelSuperior_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ReleaseCapture();
	SendMessage(this->Handle, 0x112, 0xf012, 0);
}
private: System::Void panelSuperior_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void panelSuperior_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Base_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	if (WindowState == FormWindowState::Normal) {
		btnVentana->IconChar = FontAwesome::Sharp::IconChar::WindowMaximize;
	}
	else {
		btnVentana->IconChar = FontAwesome::Sharp::IconChar::WindowRestore;
	}
}
private: System::Void btnInicio_Click(System::Object^ sender, System::EventArgs^ e) {
	SeleccionarFormulario(gcnew Rebote, sender);
}

private: System::Void btnRegPacientes_Click(System::Object^ sender, System::EventArgs^ e) {
	SeleccionarFormulario(gcnew RegPacientes, sender);

}
private: System::Void btnAtenderPaciente_Click(System::Object^ sender, System::EventArgs^ e) {
	SeleccionarFormulario(gcnew AtePacientes, sender);


}
private: System::Void btnConsultarProximoPaciente_Click(System::Object^ sender, System::EventArgs^ e) {
	SeleccionarFormulario(gcnew ConsNexPaciente, sender);


}

private: System::Void btnGestionPacientes_Click(System::Object^ sender, System::EventArgs^ e) {
	SeleccionarFormulario(gcnew Gestion, sender);

}
private: System::Void ImagenTitulo_Click(System::Object^ sender, System::EventArgs^ e) {
	//SeleccionarFormulario(gcnew Rebote, sender);
	if (SenderA != nullptr) {
		safe_cast<Button^>(SenderA)->BackColor = Color::FromArgb(59, 130, 246);
		safe_cast<Button^>(SenderA)->ForeColor = Color::WhiteSmoke;
		safe_cast<FontAwesome::Sharp::IconButton^>(SenderA)->IconColor = Color::WhiteSmoke;
	}
	SeleccionarFormulario(gcnew MyForm, nullptr);
}
private: System::Void Tiempo_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime horaActual = DateTime::Now;
	String^ horaFormateada = horaActual.ToString("HH:mm:ss"); 
	this->Tiempo->Text = horaFormateada;
}
private: System::Void panelContenedor_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BtnVisitas_Click(System::Object^ sender, System::EventArgs^ e) {

	SeleccionarFormulario(gcnew Visita, sender);
}
};
}