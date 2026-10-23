#ifndef NODO_H
#define NODO_H

#include <iostream>
using namespace std;

template<typename T>
class Nodo {
private:
    T dato;
    Nodo<T>* siguiente;
public:
    Nodo(T dato) {
        this->dato = dato;
        this->siguiente = nullptr;
    }
    T getDato() { 
        return dato; }

    Nodo<T>* getSiguiente() { 
        return siguiente; }

    void setDato(T dato) {
         this->dato = dato; }

    void setSiguiente(Nodo<T>* nodo) { 
        this->siguiente = nodo; }
};

template<typename T>
class Cola {
private:
    Nodo<T>* frente;
    Nodo<T>* final;
public:
    Cola() {
        frente = nullptr;
        final = nullptr;
    }
    Nodo<T>* getFrente() {
         return frente; }

    Nodo<T>* getFinal() { 
        return final; }

    void setFrente(Nodo<T>* nodo) { 
        frente = nodo; }
    void setFinal(Nodo<T>* nodo) { 
        final = nodo; }

    Nodo<T>* Buscar(string cedula) {
        Nodo<T>* actual = frente;
        while (actual != nullptr) {
            if (actual->getDato().getCedula() == cedula) {
                cout << "Encontrado: " << actual->getDato().getNombre() << endl;
                return actual;
            }
            actual = actual->getSiguiente();
        }
        cout << "No encontrado" << endl;
        return nullptr;
    }
};

#endif