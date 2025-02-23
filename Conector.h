// Conector.h
#pragma once

#include "Pacientes.h"

public ref class Conector
{
public:
    void agregarPacienteConec(long nroIdentificacion, String^ nombre, String^ apellido, int edad, String^ genero,
        double costoConsulta, bool estadoPago,
        String^ telefono, String^ correo,
        String^ consulta, String^ motivoConsulta, DateTime fecha, String^ Direcion) {
            Cola::Instancia->agregarPaciente(nombre, apellido, edad, genero,
                costoConsulta, estadoPago,
                telefono, correo,
                consulta, motivoConsulta,
                nroIdentificacion, fecha, Direcion);
    }

    void mostrarPacientesConect(System::Windows::Forms::ListView^ listView) {
		listView->Items->Clear();
        Cola::Instancia->mostrarPacientes(listView);
    }

    void MostrarPacienteActualConect(System::Windows::Forms::Label^ Nombre, System::Windows::Forms::Label^ Apellido, System::Windows::Forms::Label^ otro ) {
		//Nombre->Text = Cola::Instancia->()== nullptr? "Aun no hay nadie" : Cola::Instancia->obtenerNombreProximoPaciente();
	//	Apellido->Text = Cola::Instancia->obtenerApellidoProximoPaciente();

    }


    void YaExisteONo(long a, System::Windows::Forms::Label^ x) {

        if (Cola::Instancia->buscarPacientePorNroId(a) == true) {

			x->Text = "Ya existe";
			x->ForeColor = System::Drawing::Color::Red;
        }
        else {
            x->Text = "";
			x->ForeColor = System::Drawing::Color::Green;
        }
		
    }

    void AgregarVisita(long nroIdentificacionPaciente, long nroIdentificacionVisita, String^ nombreVisita, String^ motivoVisita, String^ Direcion, DateTime fechaVisita, String^ Hora) {


        // void agregarVisitaPaciente(long idPaciente, long idVisita, DateTime fecha, String^ hora, String^ motivo, String^ direccion, String^ nombreVisita) {
        try{
		Cola::Instancia->agregarVisitaPaciente(nroIdentificacionPaciente, nroIdentificacionVisita, fechaVisita, Hora, motivoVisita, Direcion, nombreVisita);
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
		


    }

    void mostrarVisitasConnec(System::Windows::Forms::ListView^ listView, long ID) {

		Cola::Instancia->mostrarVisitasPaciente( ID, listView);
    }
};
