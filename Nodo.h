#pragma once


class Nodo
{
private:
	
	int dato;
	Nodo* izq;
	Nodo* der;

public:

	Nodo();

	int getDato();
	void setDato(int);

	Nodo*& getIzq();
	Nodo*& getDer();

	void setIzq(Nodo*);
	void serDer(Nodo*);
};

