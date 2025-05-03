#include "Usuario.h"

Usuario::Usuario() {
    conexion = gcnew ConexionMySQL();
}

Usuario::Usuario(String^ usuario, String^ contrasena) {
    this->usuario = usuario;
    this->contrasena = contrasena;
    this->activo = activo;
    this->idLogin = idLogin;
    conexion = gcnew ConexionMySQL();
}

Usuario::~Usuario() {
    delete conexion;
}

String^ Usuario::getUsuario() {
    return usuario;
}

String^ Usuario::getContraseña() {
    return contrasena;
}

bool Usuario::getActivo() {
    return activo;
}

int Usuario::getIdLogin() {
    return idLogin;
}

bool Usuario::verificarUsuario() {
    try {
        if (conexion->abrirConexion()) {
            // Usar el método getConexion() para acceder a la conexión
            MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM login WHERE usuario = @usuario AND contraseña = @contrasena AND activo = 1", conexion->getConexion());
            cmd->Parameters->AddWithValue("@usuario", usuario);
            cmd->Parameters->AddWithValue("@contrasena", contrasena);

            MySqlDataReader^ reader = cmd->ExecuteReader();
            bool encontrado = reader->Read(); // Si encuentra al menos un registro

            reader->Close();
            conexion->cerrarConexion();

            return encontrado;
        }
    }
    catch (Exception^ e) {
        Console::WriteLine("Error al verificar el usuario: " + e->Message);
        return false;
    }
    return false;
}

bool Usuario::crearUsuario() {
    try {
        if (conexion->abrirConexion()) {
            MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO login (usuario, contraseña, activo) VALUES (@usuario, @contrasena, @activo)", conexion->getConexion());
            cmd->Parameters->AddWithValue("@usuario", usuario);
            cmd->Parameters->AddWithValue("@contrasena", contrasena);
            cmd->Parameters->AddWithValue("@activo", activo);

            cmd->ExecuteNonQuery();
            conexion->cerrarConexion();

            return true;
        }
    }
    catch (Exception^ e) {
        Console::WriteLine("Error al crear el usuario: " + e->Message);
        return false;
    }
    return false;
}

bool Usuario::actualizarUsuario() {
    try {
        if (conexion->abrirConexion()) {
            MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE login SET usuario = @usuario, contraseña = @contrasena WHERE idLogin = @idLogin", conexion->getConexion());
            cmd->Parameters->AddWithValue("@usuario", usuario);
            cmd->Parameters->AddWithValue("@contrasena", contrasena);
            cmd->Parameters->AddWithValue("@idLogin", idLogin);

            cmd->ExecuteNonQuery();
            conexion->cerrarConexion();

            return true;
        }
    }
    catch (Exception^ e) {
        Console::WriteLine("Error al actualizar el usuario: " + e->Message);
        return false;
    }
    return false;
}

bool Usuario::desactivarUsuario() {
    try {
        if (conexion->abrirConexion()) {
            MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE login SET activo = 0 WHERE idLogin = @idLogin", conexion->getConexion());
            cmd->Parameters->AddWithValue("@idLogin", idLogin);

            cmd->ExecuteNonQuery();
            conexion->cerrarConexion();

            return true;
        }
    }
    catch (Exception^ e) {
        Console::WriteLine("Error al desactivar el usuario: " + e->Message);
        return false;
    }
    return false;
}
