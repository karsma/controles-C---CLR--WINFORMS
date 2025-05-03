#include "Gerente.h"

Gerente::Gerente() : Empleado()
{
    bono = 0.0;
}

Gerente::Gerente(int id, String^ nombre, double salarioBase, double bono)
    : Empleado(id, nombre, salarioBase)
{
    this->bono = bono;
}

double Gerente::Bono::get() { return bono; }
void Gerente::Bono::set(double value) { bono = value; }

double Gerente::CalcularSalario()
{
    return salarioBase + bono;
}
