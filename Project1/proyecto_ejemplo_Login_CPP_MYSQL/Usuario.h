#pragma once
#include "ConexionMySQL.h"
using namespace System::Collections::Generic;
using namespace System;
using namespace MySql::Data::MySqlClient;

namespace proyectoejemploLoginCPPMYSQL {

    public ref class Usuario {
    public:
        Usuario();
        Usuario(String^ usuario, String^ contrasena);
        Usuario(String^ usuario, String^ contrasena, bool activo);
        ~Usuario();

        //getter
        String^ getUsuario();
        String^ getContraseña();
        bool getActivo();
        int getIdLogin();
        List<Usuario^>^ listarUsuarios();
        bool verificarUsuario();
        bool crearUsuario();
        bool actualizarUsuario();
        bool desactivarUsuario();
        // SETTERS
        void setUsuario(String^ usuario);
        void setContraseña(String^ contrasena);
        void setActivo(bool activo);
        void setIdLogin(int id);
    private:
        String^ usuario;
        String^ contrasena;
        bool activo;
        int idLogin;
        ConexionMySQL^ conexion;
    };

} // <- Fin del namespace
