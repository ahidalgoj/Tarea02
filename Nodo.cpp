#include "Nodo.h"

Nodo::Nodo()
{
	this->dato = 0;
	this->izq = nullptr;
	this->der = nullptr;
}

int Nodo::getDato()
{
	return this->dato;
}

void Nodo::setDato(int valor)
{
	this->dato = valor;
}

Nodo*& Nodo::getIzq()
{
	return this->izq;
}

Nodo*& Nodo::getDer()
{
	return this->der;
}

void Nodo::setIzq(Nodo* nodo)
{
	this->izq = nodo;
}

void Nodo::serDer(Nodo* nodo)
{
	this->der = nodo;
}
