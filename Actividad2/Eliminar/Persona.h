#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

using namespace std;

class Persona{
    private:
    string nombre;
    string apellido;
    string cedula;

    public:
    Persona();
    Persona(string nombre, string apellido, string cedula){
        this->cedula = cedula;
        this->nombre = nombre;
        this->apellido = apellido;
    }

    string getCedula(){ 
        return cedula;
    }

    string getNombre(){
        return nombre;
    }

    string getApellido(){
        return apellido;
    }

    void setCedula(string cedula){
        this->cedula = cedula;
    }

    void setNombre(string nombre){
        this->nombre = nombre;
    }

    void setApellido(string apellido){
        this->apellido = apellido;
    }
};

#endif