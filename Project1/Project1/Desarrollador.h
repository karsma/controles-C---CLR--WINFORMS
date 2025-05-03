#pragma once
#include "Empleado.h"

public ref class Desarrollador : public Empleado
{
private:
    int lineasCodigo;
    double valorPorLinea;

public:
    Desarrollador();
    Desarrollador(int id, String^ nombre, double salarioBase, int lineasCodigo, double valorPorLinea);

    property int LineasCodigo {
        int get();
        void set(int value);
    }

    property double ValorPorLinea {
        double get();
        void set(double value);
    }

    virtual double CalcularSalario() override;
};
