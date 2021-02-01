
#include <iostream>
#include "Gestor.h"

using namespace std;

int main()
{
    Gestor gestor;
    int opcion = 1;
    while (opcion != 0) {
        cout << "\nDigite una opcion:";
        cout << "\n1. Agregar un valor al arbol";
        cout << "\n2. Buscar un valor en el arbol";
        cout << "\n3. Imprimir el arbol PreOrden";
        cout << "\n4. Imprimir el arbol InOrden";
        cout << "\n5. Imprimir el arbol PosOrden";

        cout << "\n0. Salir\n\n";

        cin >> opcion;

        switch (opcion) {
        case 0:
            break;
        case 1:
            gestor.insertarValor();
            break;
        case 2:
            gestor.buscarValor();
            break;
        case 3:
            gestor.imprimirPreOrden();
            break;
        case 4:
            gestor.imprimirInOrden();
            break;
        case 5:
            gestor.imprimirPosOrden();
            break;
        default:
            cout << "\nDigite una opcion valida\n";
        }
    }

    return 0;
}

