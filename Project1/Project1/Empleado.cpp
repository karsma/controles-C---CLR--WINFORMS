#include "Empleado.h"

Empleado::Empleado()
{
    id = 0;
    nombre = "";
    salarioBase = 0.0;
}

Empleado::Empleado(int id, String^ nombre, double salarioBase)
{
    this->id = id;
    this->nombre = nombre;
    this->salarioBase = salarioBase;
}

//propiedades
int Empleado::Id::get() { return id; }
void Empleado::Id::set(int value) { id = value; }

String^ Empleado::Nombre::get() { return nombre; }
void Empleado::Nombre::set(String^ value) { nombre = value; }

double Empleado::SalarioBase::get() { return salarioBase; }
void Empleado::SalarioBase::set(double value) { salarioBase = value; }

double Empleado::CalcularSalario() {
    return salarioBase;
}
