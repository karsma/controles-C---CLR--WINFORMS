#include "Desarrollador.h"

Desarrollador::Desarrollador() : Empleado()
{
    lineasCodigo = 0;
    valorPorLinea = 0.0;
}

Desarrollador::Desarrollador(int id, String^ nombre, double salarioBase, int lineasCodigo, double valorPorLinea)
    : Empleado(id, nombre, salarioBase)
{
    this->lineasCodigo = lineasCodigo;
    this->valorPorLinea = valorPorLinea;
}

int Desarrollador::LineasCodigo::get() { return lineasCodigo; }
void Desarrollador::LineasCodigo::set(int value) { lineasCodigo = value; }

double Desarrollador::ValorPorLinea::get() { return valorPorLinea; }
void Desarrollador::ValorPorLinea::set(double value) { valorPorLinea = value; }

double Desarrollador::CalcularSalario()
{
    return salarioBase + (lineasCodigo * valorPorLinea);
}
