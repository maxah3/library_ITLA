s/*
 * Stack.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "List.h"

using namespace std;

Lista::Lista(Libros Numero)
{
	PNodo q = new Nodo();
	q -> Elemento = Numero;
	q -> Proximo = this -> Primero;
	this -> Primero = q;
}

int Lista::Agregar(Books NuevoElemento)
{
	PNodo p = Primero;
	PNodo q = new Nodo;
	q->Elemento = NuevoElemento;
	q->Proximo = Primero;
	Primero = q;
	return 1;
}

void Lista::getUltimo()
{
	PNodo p = Primero;
	int Posicion = 0;
	int i=0;
	while(i != Posicion && p != NULL)
	{
		p = p->Proximo;
		i++;
	}
	cout<< p->Elemento;
}

int Lista::Vacio()
{
	PNodo p = Primero;
	if(Primero == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int Lista::getLongitud()
{
	int i = 0;
	for(PNodo p = Primero; p != NULL; p = p->Proximo)
	{
		i++;
	}
	return i; //we return i to ba able to show the operation
}
Libros Lista::BuscarElemento(int Position)
{
	PNodo p = Primero;
	int i=0;
	while(i != Position && p != NULL)
	{
		p = p->Proximo;
		i++;
	}

	return p->Elemento;
}
void Lista::Imprimir()
	for(PNodo p = Primero; p != NULL; p = p->Proximo)
	{
		cout<<p->Elemento;
	}
}

ostream & operator << (ostream & _Imprimir, Books _Books)
{
	_Imprimir<<"\n * Title: "<<_Libros.getTitulo()<<endl; //show the user an interface
	_Imprimir<<"\n * Autor: "<<_Libros.getAutor()<<endl;//show the user an interface
	_Imprimir<<"\n * Editor: "<<_Libros.getEditora()<<endl;
	_Imprimir<<"\n * Publication Date: "<<_Libros.getDia()<<"/"<<_Libros.getMes()<<"/"<<_Libros.getAno()<<endl;
	_Imprimir<<"\n * Category: "<<_Libros.getCategoria()<<endl;
	cout<<endl;
	return  _Print;
}
void Lista::Buscar(string _Buscar)
{
	for(PNodo p = Primero; p != NULL; p = p->Proximo)
	{
		if(_Buscar == p->Elemento.getCategoria())
		{
			cout<<"\n * Title: "<<p->Elemento.getTitle()<<endl;  //show the user an interface
			cout<<"\n * Autor: "<<p->Elemento.getAutor()<<endl;
			cout<<"\n * Editor: "<<p->Elemento.getEditor()<<endl;
			cout<<"\n * Publication Date: "<<p->Elemento.getDay()<<"/"<<p->Elemento.getMonth()<<"/"<<p->Elemento.getYear()<<endl;
     		cout<<"\n * Category: "<<p->Elemento.getCategory()<<endl;
		}
	}
}
