#pragma once

using namespace System;
using namespace MySql::Data::MySqlClient;

public ref class ConexionMySQL {
public:
    ConexionMySQL();
    ~ConexionMySQL();

    bool abrirConexion();
    void cerrarConexion();
    bool verificarConexion();
    MySqlConnection^ getConexion();  // Método getter para obtener la conexión

private:
    MySqlConnection^ conexion;
};
