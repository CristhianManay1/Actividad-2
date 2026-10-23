#ifndef NODO_H
#define NODO_H

#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Nodo {
private:
    T dato;
    Nodo<T>* siguiente;

public:
    Nodo(T dato) : dato(dato), siguiente(nullptr) {}

    T getDato() const { return dato; }
    void setDato(T dato) { this->dato = dato; }

    Nodo<T>* getSiguiente() const { return siguiente; }
    void setSiguiente(Nodo<T>* siguiente) { this->siguiente = siguiente; }
};

template <typename T>
class Eliminar {
public:
    bool eliminar(Nodo<T>*& frente, Nodo<T>*& final) {
        if (frente == nullptr) {
            return false;
        }
        Nodo<T>* aux = frente;
        frente = frente->getSiguiente();
        if (frente == nullptr) {
            final = nullptr;
        }
        delete aux;
        return true;
    }
};
template <typename T>
class Imprimir {
public:
    void imprimir(Nodo<T>* frente) const {
        if (frente == nullptr) {
            cout << "La cola esta vacia." << endl;
            return;
        }
        Nodo<T>* actual = frente;
        while (actual != nullptr) {
            cout << "Cedula: " << actual->getDato().getCedula()
                 << " | Nombre: " << actual->getDato().getNombre()
                 << " " << actual->getDato().getApellido() << endl;
            actual = actual->getSiguiente();
        }
    }
};
#endif