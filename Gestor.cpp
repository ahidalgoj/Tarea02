#include "Gestor.h"
#include <iostream>

using namespace std;

void Gestor::insertarValor()
{
	int valor = 0;

	cout << "\nCual valor desea agregar?\n";
	cin >> valor;

	miArbol.insertarValor(valor);

	cout << "\nEl valor " << valor << " fue agregado al arbol.\n";
}

void Gestor::buscarValor()
{
	int valor = 0;

	cout << "\nCual valor desea buscar?\n";
	cin >> valor;

	if (miArbol.buscarValor(valor))
	{
		cout << "\nEl valor " << valor << " si esta en el arbol.\n";
	}
	else
	{
		cout << "\nEl valor " << valor << " no esta en el arbol.\n";
	}

	
}

void Gestor::imprimirPreOrden()
{
	cout << "\nEl recorrido PreOrden del arbol es el siguiente:\n";

	miArbol.imprimirPreOrden();

	cout << "\n";
}

void Gestor::imprimirInOrden()
{
	cout << "\nEl recorrido InOrden del arbol es el siguiente:\n";

	miArbol.imprimirInOrden();

	cout << "\n";
}

void Gestor::imprimirPosOrden()
{
	cout << "\nEl recorrido PosOrden del arbol es el siguiente:\n";

	miArbol.imprimirPosOrden();

	cout << "\n";
}
