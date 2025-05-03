#include "ConsultasMySQL.h"
#include "Usuario.h"

ConsultasMySQL::ConsultasMySQL() {
    conexion = gcnew ConexionMySQL();
}

ConsultasMySQL::~ConsultasMySQL() {
    delete conexion;
}

bool ConsultasMySQL::probarConexion() {
    return conexion->probarConexion();
}

bool ConsultasMySQL::validarUsuario(Usuario^ usuario) {
    try {
        if (conexion->abrirConexion()) {
            // Usamos directamente String^ sin necesidad de convertir a std::string
            String^ usuarioDb = usuario->getUsuario();
            String^ contrasenaDb = usuario->getContraseña();

            // La API de MySQL C++ Connector permite trabajar con String^ directamente en la función setString
            sql::PreparedStatement* stmt = conexion->conexion->prepareStatement("SELECT * FROM login WHERE usuario = ? AND contraseña = ? AND activo = 1");
            stmt->setString(1, usuarioDb);  // Usamos directamente String^
            stmt->setString(2, contrasenaDb);  // Usamos directamente String^

            sql::ResultSet* res = stmt->executeQuery();

            bool encontrado = res->next();  // Si encuentra el usuario
            delete res;
            delete stmt;
            conexion->cerrarConexion();
            return encontrado;
        }
    }
    catch (sql::SQLException& e) {
        return false;
    }
    return false;
}
