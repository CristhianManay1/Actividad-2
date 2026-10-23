#include "Nodo.h"
#include "Persona.h"

int main() {
    Cola<Persona> cola;

    Nodo<Persona>* n1 = new Nodo<Persona>(Persona("111", "Ana", "Lopez"));
    Nodo<Persona>* n2 = new Nodo<Persona>(Persona("222", "Luis", "Perez"));
    Nodo<Persona>* n3 = new Nodo<Persona>(Persona("333", "Eva", "Mora"));

    n1->setSiguiente(n2);
    n2->setSiguiente(n3);

    cola.setFrente(n1);
    cola.setFinal(n3);

    cout << "Buscando 222..." << endl;
    cola.Buscar("222");

    cout << "Buscando 999..." << endl;
    cola.Buscar("999");

    return 0;
}