#include "Usuario.h"
using namespace proyectoejemploLoginCPPMYSQL;

Usuario::Usuario() {
    conexion = gcnew ConexionMySQL(); //abrir la conexion
}

//este contructor va servir para hacer la consulta al login
Usuario::Usuario(String^ usuario, String^ contrasena) {
    this->usuario = usuario;
    this->contrasena = contrasena;   
    conexion = gcnew ConexionMySQL();
}

//este constructor va servir para crear un usuario
Usuario::Usuario(String^ usuario, String^ contrasena, bool activo) {
    this->usuario = usuario;
    this->contrasena = contrasena;
    this->activo = activo;
    
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

void Usuario::setUsuario(String^ usuario) {
    this->usuario = usuario;
}

void Usuario::setContraseña(String^ contrasena) {
    this->contrasena = contrasena;
}

void Usuario::setActivo(bool activo) {
    this->activo = activo;
}

void Usuario::setIdLogin(int id) {
    this->idLogin = id;
}


bool Usuario::verificarUsuario() {
    try {

        if (conexion->abrirConexion()) {
            // Usar el método getConexion() para acceder a la conexión
            MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM login WHERE usuario = @usuario AND contraseña = @contrasena ", conexion->getConexion());
            cmd->Parameters->AddWithValue("@usuario", usuario);
            cmd->Parameters->AddWithValue("@contrasena", contrasena);
            cmd->Parameters->AddWithValue("@activo", activo);

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

List<Usuario^>^ Usuario::listarUsuarios() {
    List<Usuario^>^ lista = gcnew List<Usuario^>();

    try {
        if (conexion->abrirConexion()) {
            String^ query = "SELECT idLogin, usuario, contraseña, activo FROM login";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conexion->getConexion());
            MySqlDataReader^ reader = cmd->ExecuteReader();

            while (reader->Read()) {
                Usuario^ u = gcnew Usuario();
                u->idLogin = reader->GetInt32("idLogin");
                u->usuario = reader->GetString("usuario");
                u->contrasena = reader->GetString("contraseña");
                u->activo = reader->GetBoolean("activo");

                lista->Add(u);
            }

            reader->Close();
            conexion->cerrarConexion();
        }
    }
    catch (Exception^ e) {
        Console::WriteLine("Error al listar los usuarios: " + e->Message);
    }

    return lista;
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
