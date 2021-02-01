#pragma once

#include "Nodo.h"

class Arbol
{
private:
	
	Nodo* raiz;

	void insertar(Nodo*& nodo, int valor);

	bool buscar(Nodo* nodo, int valor);

	void recorrerPreOrden(Nodo* nodo);

	void recorrerInOrden(Nodo* nodo);

	void recorrerPosOrden(Nodo* nodo);

public:

	Arbol();

	Nodo* getRaiz();

	void insertarValor(int valor);

	bool buscarValor(int valor);

	void imprimirPreOrden();

	void imprimirInOrden();

	void imprimirPosOrden();
};

