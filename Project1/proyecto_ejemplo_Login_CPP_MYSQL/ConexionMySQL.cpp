#include "ConexionMySQL.h"

ConexionMySQL::ConexionMySQL() {
    conexion = gcnew MySqlConnection("Server=127.0.0.1;Database=bdprueba;Uid=root;Pwd=");
}

ConexionMySQL::~ConexionMySQL() {
    if (conexion) {
        delete conexion;
    }
}

bool ConexionMySQL::abrirConexion() {
    try {
        conexion->Open();
        return true;
    }
    catch (Exception^ e) {
        Console::WriteLine("Error al abrir la conexi�n: " + e->Message);
        return false;
    }
}

void ConexionMySQL::cerrarConexion() {
    if (conexion->State == System::Data::ConnectionState::Open) {
        conexion->Close();
    }
}

bool ConexionMySQL::verificarConexion() {
    return abrirConexion(); // Solo intenta abrir la conexi�n y retorna true si tiene �xito
}

MySqlConnection^ ConexionMySQL::getConexion() {
    return conexion;  // Retorna la conexi�n
}
