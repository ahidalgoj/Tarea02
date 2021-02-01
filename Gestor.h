#pragma once

#include "Arbol.h"

class Gestor
{
private:

	Arbol miArbol;

public:

	void insertarValor();

	void buscarValor();

	void imprimirPreOrden();

	void imprimirInOrden();

	void imprimirPosOrden();

};

