#pragma once
//#include "Base.h"

namespace Consultorio {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Rebote
	/// </summary>
	public ref class Rebote : public System::Windows::Forms::Form
	{
	public:
		Rebote(void)
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
		~Rebote()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ ReboteTimer;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Rebote::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ReboteTimer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(271, 233);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Rebote::pictureBox1_Click);
			// 
			// ReboteTimer
			// 
			this->ReboteTimer->Enabled = true;
			this->ReboteTimer->Interval = 10;
			this->ReboteTimer->Tick += gcnew System::EventHandler(this, &Rebote::ReboteTimer_Tick);
			// 
			// Rebote
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(968, 526);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Rebote";
			this->Text = L"Rebote";
			this->Load += gcnew System::EventHandler(this, &Rebote::Rebote_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Rebote_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void ReboteTimer_Tick(System::Object^ sender, System::EventArgs^ e) {

		static int direccionX = 2;
		static int direccionY = 2;
		int nuevaX = pictureBox1->Location.X + direccionX;
		int nuevaY = pictureBox1->Location.Y + direccionY;

		if (nuevaX < 0 || nuevaX + pictureBox1->Width > this->Width)
		{
			direccionX = -direccionX;
		}
		if (nuevaY < 0 || nuevaY + pictureBox1->Height > this->Height)
		{
			direccionY = -direccionY;
		}
		
		pictureBox1->Location = Point(nuevaX, nuevaY);
	}
	};
}
