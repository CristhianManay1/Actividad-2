#include <iostream>
#include "Persona.h"
#include "Nodo.h"
using namespace std;

int main() {
    Nodo<Persona>* frente = nullptr;
    Nodo<Persona>* final = nullptr;

    
    Eliminar<Persona> opEliminar;
    Imprimir<Persona> opImprimir;

   
    cout << "--- Elementos en la cola ---" << endl;
    opImprimir.imprimir(frente);

    

    opEliminar.eliminar(frente, final);
    cout << "\n--- Despues de eliminar el frente ---" << endl;
    opImprimir.imprimir(frente);

    while (frente != nullptr) {
        opEliminar.eliminar(frente, final);
    }

    return 0;
}