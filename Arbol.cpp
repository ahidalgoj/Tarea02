#include "Arbol.h"
#include <iostream>

using namespace std;

Arbol::Arbol()
{
	this->raiz = nullptr;
}

Nodo* Arbol::getRaiz()
{
    return this->raiz;
}

void Arbol::insertarValor(int valor)
{
	this->insertar(this->raiz, valor);
}

bool Arbol::buscarValor(int valor)
{
	return this->buscar(this->raiz, valor);;
}

void Arbol::imprimirPreOrden()
{
	this->recorrerPreOrden(this->raiz);
}

void Arbol::imprimirInOrden()
{
	this->recorrerInOrden(this->raiz);
}

void Arbol::imprimirPosOrden()
{
	this->recorrerPosOrden(this->raiz);
}

void Arbol::insertar(Nodo*& nodo, int valor)
{
    
	if (nodo==nullptr) //Si el arbol está vacío
	{
		Nodo* nuevoNodo = new Nodo();

		nuevoNodo->setDato(valor);
		
		nodo = nuevoNodo;

	}
	else //Si el árbol tiene uno o más nodos
	{
		if (nodo->getDato()>valor) //Si el valor a insertar es menor que el valor de la raíz
		{
			insertar(nodo->getIzq(), valor); //Se llama a sí mismo enviando por referencia el nodo de la izquierda
		}
		else //Si el valor a insertar es mayor que el valor de la raíz
		{
			insertar(nodo->getDer(), valor); //Se llama a sí mismo enviando por referencia el nodo de la derecha
		}
	}
}

bool Arbol::buscar(Nodo* nodo, int valor)
{
	if (nodo==nullptr)
	{
		return false;
	}
	else if (nodo->getDato()==valor)
	{
		return true;
	}
	else if (valor < nodo->getDato())
	{
		return buscar(nodo->getIzq(), valor);
	}
	else
	{
		return buscar(nodo->getDer(), valor);
	}

	return false;
}

void Arbol::recorrerPreOrden(Nodo* nodo)
{
	if (nodo==nullptr)
	{
		return;
	}
	else
	{
		cout << nodo->getDato() << " - ";
		recorrerPreOrden(nodo->getIzq());
		recorrerPreOrden(nodo->getDer());
	}
}

void Arbol::recorrerInOrden(Nodo* nodo)
{
	if (nodo == nullptr)
	{
		return;
	}
	else
	{
		recorrerInOrden(nodo->getIzq());
		cout << nodo->getDato() << " - ";
		recorrerInOrden(nodo->getDer());
	}
}

void Arbol::recorrerPosOrden(Nodo* nodo)
{
	if (nodo == nullptr)
	{
		return;
	}
	else
	{
		recorrerPosOrden(nodo->getIzq());
		recorrerPosOrden(nodo->getDer());
		cout << nodo->getDato() << " - ";
	}
}
