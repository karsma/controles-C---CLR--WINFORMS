#pragma once

using namespace System;

public ref class Empleado
{
protected:
    int id;
    String^ nombre;
    double salarioBase;

public:
    Empleado(); // Constructor por defecto
    Empleado(int id, String^ nombre, double salarioBase); // Constructor personalizado

    // Getters y Setters
    property int Id {
        int get();
        void set(int value);
    }

    property String^ Nombre {
        String^ get();
        void set(String^ value);
    }

    property double SalarioBase {
        double get();
        void set(double value);
    }

    // Método virtual para sobrescribir en clases derivadas
    virtual double CalcularSalario();
};
