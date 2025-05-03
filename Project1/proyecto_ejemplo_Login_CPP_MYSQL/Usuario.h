#pragma once
#include "ConexionMySQL.h"

using namespace System;
using namespace MySql::Data::MySqlClient;

public ref class Usuario {
public:
    Usuario();
    Usuario(String^ usuario, String^ contrasena);
    ~Usuario();

    String^ getUsuario();
    String^ getContraseña();
    bool getActivo();
    int getIdLogin();

    bool verificarUsuario();
    bool crearUsuario();
    bool actualizarUsuario();
    bool desactivarUsuario();

private:
    String^ usuario;
    String^ contrasena;
    bool activo;
    int idLogin;
    ConexionMySQL^ conexion;
};
