#ifndef NODO_H
#define NODO_H

#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Nodo {
public:
    T dato; 
    Nodo<T>* siguiente;

    Nodo(T dato) {
        this->dato = dato;
        this->siguiente = nullptr;
    }
};

template<typename T>
class Cola {
private:
    Nodo<T>* frente;
    Nodo<T>* fin;

public:
    Cola() {
        frente = nullptr;
        fin = nullptr;
    }

    ~Cola() {
        while (frente != nullptr) {
            Nodo<T>* aux = frente;
            frente = frente->siguiente;
            delete aux;
        }
    }

    bool estaVacia() {
        return frente == nullptr;
    }


    void setFrente(Nodo<T>* nodo) { frente = nodo; }
    void setFinal(Nodo<T>* nodo)  { fin = nodo; }

    void insertar(T dato) {
        Nodo<T>* nuevo = new Nodo<T>(dato);
        if(estaVacia()) {
            frente = nuevo;
            fin = nuevo;
        } else {
            fin->siguiente = nuevo;
            fin = nuevo;
        }
        cout << "Insertado correctamente" << endl;
    }

    bool eliminar() {
        if (frente == nullptr) {
            return false;
        }
        Nodo<T>* aux = frente;
        frente = frente->siguiente;
        if (frente == nullptr) {
            fin = nullptr;
        }
        delete aux;
        return true;
    }

    void imprimir() const {
        if (frente == nullptr) {
            cout << "La cola esta vacia." << endl;
            return;
        }
        Nodo<T>* actual = frente;
        while (actual != nullptr) {
            cout << "Cedula: " << actual->dato.getCedula()
                 << " | Nombre: " << actual->dato.getNombre()
                 << " " << actual->dato.getApellido() << endl;
            actual = actual->siguiente;
        }
    }
    //buscar
    Nodo<T>* Buscar(string cedula) {
        Nodo<T>* actual = frente;
        while(actual != nullptr) {
            if(actual->dato.getCedula() == cedula) {
                cout << "Encontrado: " << actual->dato.getNombre() << endl;
                return actual;
            }
            actual = actual->siguiente;
        }
        cout << "No encontrado" << endl;
        return nullptr;
    }
};
#endif