#pragma once

using namespace System;
using namespace System::Windows::Forms;

ref class Lista {
public:
    String^ dato;
    Lista^ siguiente;

    Lista(String^ d) {
        dato = d;
        siguiente = nullptr;
    }
};

ref class Visita {
public:
    long idVisita; 
    DateTime fecha; 
    String^ hora; 
    String^ motivo; 
    String^ direccion; 
    String^ nombreVisita; 
    Visita^ siguiente; 

    Visita(long id, DateTime f, String^ h, String^ m, String^ d, String^ nombre) {
        idVisita = id;
        fecha = f;
        hora = h;
        motivo = m;
        direccion = d;
        nombreVisita = nombre; 
        siguiente = nullptr;
    }
};

ref class Pacientes {
public:
    String^ nombre;
    String^ apellido;
    int edad;
    String^ genero;
    double costoConsulta;
    bool estadoPago;
    String^ telefono;
    String^ correo;
    String^ consulta;
    String^ motivoConsulta;
    DateTime fecha;
    long nroId; 
    String^ direccion; 
    Lista^ listaTratamientos;
    Lista^ listaDiagnosticos;
    Visita^ listaVisitas; 
    Pacientes^ siguiente;

    Pacientes(String^ n, String^ a, int e, String^ g,
        double costo, bool estado,
        String^ t, String^ c,
        String^ cons, String^ motivo,
        long id, DateTime f, String^ d)
    {
        nombre = n;
        apellido = a;
        edad = e;
        genero = g;
        costoConsulta = costo;
        estadoPago = estado;
        telefono = t != nullptr ? t : nullptr;
        correo = c != nullptr ? c : nullptr;
        consulta = cons != nullptr ? cons : nullptr;
        motivoConsulta = motivo != nullptr ? motivo : nullptr;
        nroId = id; 
        fecha = f;
        direccion = d;
        listaTratamientos = nullptr; 
        listaDiagnosticos = nullptr; 
        listaVisitas = nullptr; 
        siguiente = nullptr;
    }

    void agregarTratamiento(String^ tratamiento) {
        if (listaTratamientos == nullptr) {
            listaTratamientos = gcnew Lista(tratamiento);
        }
        else {
            Lista^ actual = listaTratamientos;
            while (actual->siguiente != nullptr) {
                actual = actual->siguiente;
            }
            actual->siguiente = gcnew Lista(tratamiento);
        }
    }

    void agregarVisita(long idVisita, DateTime fecha, String^ hora, String^ motivo, String^ direccion, String^ nombreVisita) {
        Visita^ nuevaVisita = gcnew Visita(idVisita, fecha, hora, motivo, direccion, nombreVisita);
        if (listaVisitas == nullptr) {
            listaVisitas = nuevaVisita;
        }
        else {
            Visita^ actual = listaVisitas;
            while (actual->siguiente != nullptr) {
                actual = actual->siguiente;
            }
            actual->siguiente = nuevaVisita;
        }
    }

    void mostrarVisitas(System::Windows::Forms::ListView^ listView) {
        listView->Items->Clear();
        //asm
        listView->Columns->Clear(); 
        listView->Columns->Add("ID Visita", 100); 
        listView->Columns->Add("Nombre de la Visita", 150); 
        listView->Columns->Add("Fecha", 100); 
        listView->Columns->Add("Hora", 100); 
        listView->Columns->Add("Motivo", 150); 
        listView->Columns->Add("Dirección", 200);
		listView->View = System::Windows::Forms::View::Details;

     
        if (listaVisitas == nullptr) {
            listView->Items->Add(gcnew ListViewItem("No hay visitas registradas."));
            return;
        }
        Visita^ actual = listaVisitas;
        while (actual != nullptr) {
            ListViewItem^ item = gcnew ListViewItem(actual->idVisita.ToString());
            item->SubItems->Add(actual->nombreVisita); 
            item->SubItems->Add(actual->fecha.ToShortDateString()); 
            item->SubItems->Add(actual->hora); 
            item->SubItems->Add(actual->motivo); 
			item->SubItems->Add(actual->direccion); 
            listView->Items->Add(item);
            actual = actual->siguiente;
        }
    }
};

ref class Cola {
private:
    static Cola^ instancia = nullptr;
    Pacientes^ cabeza;

    Cola() {
        cabeza = nullptr;
    }

public:
    static property Cola^ Instancia {
        Cola^ get() {
            if (instancia == nullptr) {
                instancia = gcnew Cola();
            }
            return instancia;
        }
    }

    void agregarPaciente(String^ nombre, String^ apellido, int edad, String^ genero,
        double costoConsulta, bool estadoPago,
        String^ telefono, String^ correo,
        String^ consulta, String^ motivoConsulta,
        long nroId, DateTime fecha, String^ direccion)
    {
        Pacientes^ nuevoPaciente = gcnew Pacientes(nombre, apellido, edad, genero,
            costoConsulta, estadoPago, telefono,
            correo, consulta, motivoConsulta,
            nroId, fecha, direccion);

        if (cabeza == nullptr) {
            cabeza = nuevoPaciente;
        }
        else {
            Pacientes^ actual = cabeza;
            while (actual->siguiente != nullptr) {
                actual = actual->siguiente;
            }
            actual->siguiente = nuevoPaciente;
        }
    }

    void mostrarProximoPaciente(System::Windows::Forms::ListView^ listView) {
        listView->Items->Clear();
        if (cabeza == nullptr) {
            listView->Items->Add(gcnew ListViewItem("No hay pacientes en la cola."));
            return;
        }

        ListViewItem^ item = gcnew ListViewItem(cabeza->nombre);
        item->SubItems->Add(cabeza->apellido);
        item->SubItems->Add(cabeza->nroId.ToString());
        listView->Items->Add(item);
    }

    void atenderPaciente(System::Windows::Forms::ListView^ listView) {
        if (cabeza == nullptr) {
            listView->Items->Add(gcnew ListViewItem("No hay pacientes en la cola."));
            return;
        }

        Pacientes^ pacienteAtendido = cabeza;
        cabeza = cabeza->siguiente;
        ListViewItem^ item = gcnew ListViewItem(String::Format("Paciente atendido: {0} {1}, C.I.: {2}", pacienteAtendido->nombre, pacienteAtendido->apellido, pacienteAtendido->nroId));
        listView->Items->Add(item);
        delete pacienteAtendido;
    }

    void mostrarPacientes(System::Windows::Forms::ListView^ listView) {
        listView->Items->Clear();
        if (cabeza == nullptr) {
            listView->Items->Add(gcnew ListViewItem("No hay pacientes en la cola."));
            return;
        }
        Pacientes^ actual = cabeza;
        while (actual != nullptr) {
            ListViewItem^ item = gcnew ListViewItem(actual->nombre);
            item->SubItems->Add(actual->apellido);
            item->SubItems->Add(actual->nroId.ToString());
            item->SubItems->Add(actual->edad.ToString());
            item->SubItems->Add(actual->genero);
            item->SubItems->Add(actual->costoConsulta.ToString());
            item->SubItems->Add(actual->estadoPago ? "Pagado" : "No Pagado");
            item->SubItems->Add(actual->telefono != nullptr ? actual->telefono : "N/A");
            item->SubItems->Add(actual->correo != nullptr ? actual->correo : "N/A");
            item->SubItems->Add(actual->consulta != nullptr ? actual->consulta : "N/A");
            item->SubItems->Add(actual->motivoConsulta != nullptr ? actual->motivoConsulta : "N/A");
            item->SubItems->Add(actual->fecha.ToShortDateString());
            item->SubItems->Add(actual->direccion);
            listView->Items->Add(item);
            actual = actual->siguiente;
        }
    }

    void agregarVisitaPaciente(long idPaciente, long idVisita, DateTime fecha, String^ hora, String^ motivo, String^ direccion, String^ nombreVisita) {
        Pacientes^ actual = cabeza;
        while (actual != nullptr) {
            if (actual->nroId == idPaciente) {
                actual->agregarVisita(idVisita, fecha, hora, motivo, direccion, nombreVisita);
                return;
            }
            actual = actual->siguiente;
        }
    }

    void mostrarVisitasPaciente(long idPaciente, System::Windows::Forms::ListView^ listView) {
        Pacientes^ actual = cabeza;
        while (actual != nullptr) {
            if (actual->nroId == idPaciente) {
                actual->mostrarVisitas(listView);
                return;
            }
            actual = actual->siguiente;
        }
        listView->Items->Add(gcnew ListViewItem(String::Format("No se encontró paciente con C.I.: {0}", idPaciente)));
    }

    long obtenerPacienteATender() {
        if (cabeza == nullptr) {
            throw gcnew Exception("No hay pacientes en la cola.");
        }
        return cabeza->nroId;
    }

    long obtenerSiguientePaciente() {
        if (cabeza == nullptr || cabeza->siguiente == nullptr) {
            throw gcnew Exception("No hay siguiente paciente en la cola.");
        }
        return cabeza->siguiente->nroId; 
    }

    String^ obtenerDato(long idPaciente, String^ queObtener) {
        Pacientes^ actual = Cola::Instancia->cabeza;
        while (actual != nullptr) {
            if (actual->nroId == idPaciente) {
                if (queObtener == "Nombre") {
                    return actual->nombre;
                }
                else if (queObtener == "Telefono") {
                    return actual->telefono;
                }
                else if (queObtener == "Apellido") {
                    return actual->apellido;
                }
                else if (queObtener == "Correo") {
                    return actual->correo;
                }
                else if (queObtener == "Dirección") {
                    return actual->direccion;
                }
                else {
                    throw gcnew Exception("No se encontró el dato solicitado");
                }
            }
            actual = actual->siguiente;
        }
        return nullptr;
    }

    bool buscarPacientePorNroId(long idPaciente) {
        Pacientes^ actual = cabeza;
        while (actual != nullptr) {
            if (actual->nroId == idPaciente) {
                return true; 
            }
            actual = actual->siguiente;
        }
        return false; 
    }
};