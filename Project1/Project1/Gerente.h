#pragma once
#include "Empleado.h"

public ref class Gerente : public Empleado
{
private:
    double bono;

public:
    Gerente();
    Gerente(int id, String^ nombre, double salarioBase, double bono);

    property double Bono {
        double get();
        void set(double value);
    }

    virtual double CalcularSalario() override;
};
