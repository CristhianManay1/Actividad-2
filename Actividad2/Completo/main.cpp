#include <iostream>
#include <string>
#include "Nodo.h"
#include "Persona.h"

using namespace std;

int main() {
    Cola<Persona> cola;
    int opcion = 0;
    string cedula, nombre, apellido;

    while (opcion != 5) {
        cout << "\n--- MENU DE COLA ---" << endl;
        cout << "1. Insertar Persona" << endl;
        cout << "2. Imprimir Cola" << endl;
        cout << "3. Buscar Persona" << endl;
        cout << "4. Eliminar Frente" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Cedula: ";
            cin >> cedula;
            cout << "Nombre: ";
            cin >> nombre;
            cout << "Apellido: ";
            cin >> apellido;
            cola.insertar(Persona(cedula, nombre, apellido));
        } 
        else if (opcion == 2) {
            cola.imprimir();
        } 
        else if (opcion == 3) {
            cout << "Ingrese la cedula a buscar: ";
            cin >> cedula;
            cola.Buscar(cedula);
        } 
        else if (opcion == 4) {
            if (cola.eliminar()) {
                cout << "Nodo frontal eliminado correctamente." << endl;
            } else {
                cout << "Operacion fallida: La cola esta vacia." << endl;
            }
        }
    }

    return 0;
}