#pragma once

#include "ConexionMySQL.h"
#include "Usuario.h"

using namespace System;

class ConsultasMySQL {
public:
    ConsultasMySQL();
    ~ConsultasMySQL();

    bool validarUsuario(Usuario^ usuario);
    bool probarConexion();

private:
    ConexionMySQL^ conexion;
};
