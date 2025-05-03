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
    MySqlConnection^ getConexion();  // M�todo getter para obtener la conexi�n

private:
    MySqlConnection^ conexion;
};
