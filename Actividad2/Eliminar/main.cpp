#include <iostream>
#include <string>
#include "Persona.h" 
#include "nodo.h"

using namespace std;

int main() {
    Nodo<Persona>* nodo1 = new Nodo<Persona>(Persona("1723456789", "Carlos", "Mendez"));
    Nodo<Persona>* nodo2 = new Nodo<Persona>(Persona("1798765432", "Ana", "Loja"));
    Nodo<Persona>* nodo3 = new Nodo<Persona>(Persona("1711223344", "Luis", "Perez"));

    nodo1->setSiguiente(nodo2);
    nodo2->setSiguiente(nodo3);

    Nodo<Persona>* frente = nodo1;
    Nodo<Persona>* final = nodo3;

    Eliminar<Persona> operacionEliminar;
    Imprimir<Persona> operacionImprimir;

    int opcion = 0;
    while (opcion != 3) {
        cout << "\n--- GESTION DE COLA ---" << endl;
        cout << "1. Imprimir elementos" << endl;
        cout << "2. Eliminar frente" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "\n--- Estado actual de la cola ---" << endl;
            operacionImprimir.imprimir(frente);
        } 
        else if (opcion == 2) {
            bool exito = operacionEliminar.eliminar(frente, final);
            if (exito) {
                cout << "-> Nodo frontal eliminado correctamente." << endl;
            } else {
                cout << "-> Operacion fallida: La cola ya esta vacia." << endl;
            }
        }
    }

    return 0;
}