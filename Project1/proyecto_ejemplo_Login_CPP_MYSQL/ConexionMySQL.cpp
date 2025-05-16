#include "ConexionMySQL.h"

//crear el constructor
ConexionMySQL::ConexionMySQL() {
    conexion = gcnew MySqlConnection("Server=localhost;Database=bdprueba;Uid=root;Pwd=");
}

//destructor del objeto 
ConexionMySQL::~ConexionMySQL() {
    if (conexion) {
        delete conexion;
    }
}

//funcion que sirve para abri la base de datos
bool ConexionMySQL::abrirConexion() {
    try 
    {        
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
