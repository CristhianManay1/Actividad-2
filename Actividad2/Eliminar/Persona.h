#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona {
private:
    string cedula;
    string nombre;
    string apellido;

public:
    Persona() : cedula(""), nombre(""), apellido("") {}

    Persona(string cedula, string nombre, string apellido)
        : cedula(cedula), nombre(nombre), apellido(apellido) {}

    string getCedula() const { return cedula; }
    void setCedula(string cedula) { this->cedula = cedula; }

    string getNombre() const { return nombre; }
    void setNombre(string nombre) { this->nombre = nombre; }

    string getApellido() const { return apellido; }
    void setApellido(string apellido) { this->apellido = apellido; }
};

#endif