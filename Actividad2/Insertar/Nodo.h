#ifndef NODO_H
#define NODO_H

#include <iostream>
using namespace std;

template<typename T>
class Nodo{
    public:
    T nodo;

    Nodo<T>* siguiente;

    Nodo(T dato){
        this->dato = dato;
        siguiente = NULL;
    }
};

template<typename T>
class Cola{
    private:
    Nodo<T>* frente;
    Nodo<T>* fin;

public:
    Cola() {
        frente = NULL;
        fin = NULL;
    }

    ~Cola() {
        while (frente != NULL) {
            Nodo<T>* aux = frente;
            frente = frente->siguiente;
            delete aux;
        }
    }

    bool estaVacia() {
        return frente == NULL;
    }

    void insertar(T dato){
        Nodo<T>* nuevo = new Nodo<T>(dato);
        if(estaVacia()){
            frente = nuevo;
            fin = nuevo;
        } else {
            fin->siguiente = nuevo;
            fin = nuevo;
        }
        cout<<"Insertado correctamente" << endl;
    }
};

#endif