#ifndef NODO_H
#define NODO_H

#include <iostream>
using namespace std;

template<typename T>
class Nodo{
    private:
    T dato;
    Nodo<T> *siguiente;
    public:
    Nodo(T dato){
        this->dato=dato;
        this->siguiente=nullptr;
    }

    T getDato(){
        return dato;
    }
    Nodo<T>* getSiguiente(){
        return siguiente;
    }
    void setDato(T dato){
        this->dato=dato;
        void setSiguiente(Nodo<T>* nodo){
            this->siguiente=nodo;
        }
    }
    template<typename T>
    class Cola{
        private:
        Nodo<T>* frente;
        Nodo<T>* final;
        public:
        Cola(){
        frente=nullptr;
        final=nullptr;
        }
     Nodo<T>* getFrente() {
         return frente; }
    Nodo<T>* getFinal()  { 
        return final; }

    
    void setFrente(Nodo<T>* nodo) {
         frente = nodo; }
    void setFinal(Nodo<T>* nodo)  { 
        final = nodo; } 
        
    }
    //Buscar
    Nodo<T>*actual=frente;

    while(actual!=nullptr){
        if(actual->getDato().getCedula()==cedula){
             cout << "Encontrado: " << actual->getDato().getNombre() << endl;
            return actual;
        }
    actual=actual->getSiguiente();
    }
     cout << "No encontrado" << endl;
    return nullptr;
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
