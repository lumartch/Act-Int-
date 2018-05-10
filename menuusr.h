#ifndef MENUUSR_H
#define MENUUSR_H

#include "usuario.h"
#include "academico.h"
#include <fstream>
#include <iostream>
#define ARCH_USR "Usuarios.txt"
#define ARCH_AC "Academicos.txt"
#define ARCH_NO_REG "No_Registro.txt"
#define ARCH_FORMACION "Formacion_Academica.txt"
#define ARCH_PRODUCCION "Produccion_Academica.txt"
#define ARCH_DOCENCIA "Docencia_Academica.txt"
#define ARCH_TUTORIA "Tutoria_academica.txt"

#ifndef _WIN32
#define CLEAR "clear"
#define MKDIR "mkdir Archivos/"
#define DIR "Archivos/"
#else
#define CLEAR "cls"
#define MKDIR "mkdir Archivos\\"
#define DIR "Archivos\\"
#endif

using namespace std;

class MenuUsr {
private:
    Academico academico;
    Usuario usuario;
    void pausa();
public:
    MenuUsr();
    MenuUsr(const Academico & academico, const Usuario & usuario);
    void menuPrincipal();
    void infoPersonal();
    void formacion();
    void produccion();
    void docencia();
    void tutoria();
    virtual ~MenuUsr();

};

#endif // MENUUSR_H
