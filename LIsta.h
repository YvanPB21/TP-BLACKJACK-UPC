#ifndef __LISTA_H__
#define __LISTA_H__
#include "Nodo.h"
// LISTA ENLAZADA SIMPLE
// Sin puntero al Final
template<class T>
class Lista {
private:
	Nodo<T> *inicio;    // L

public:
	Lista() { inicio = NULL; }  // L->NULL
	~Lista();
	//--------------------
	void insertarInicio(T v);
	void insertarFinal(T v);
	void insertarPosicion(T e, int posicion);
	//--
	void mostrar();
	//---
	T deleteInicio();
	T deleteFinal();
	T deletePosicion();
	//
	T getPosicion(int pos);
	//
	int longitud();
};

//------------------------------------------------------------------------------
// DELETE: ALL
template<class T>
Lista<T>::~Lista() {
	Nodo<T> *temp;   //A
	while (inicio->siguiente != NULL) { //L.NEXT != NULL
		temp = inicio;  // A <- L
		inicio = inicio->siguiente; // L<L.NEXT
		delete temp; // DELETE(A.DATA)     DTOR 
		temp = NULL;  // A<- NULL
	}
	delete inicio;  // DELETE(L.DATA)
	inicio = NULL; //L<-NULL
}

//------------------------------------------------------------------------------
// T getPosicion(int pos);
//template<class T>

template <class T>
T Lista<T>::getPosicion(int pos) {
	if (pos >= 0 && pos < longitud()) {
		Nodo<T>* aux = inicio;
		for (int i = 0; i < pos; i++) {
			aux = aux->siguiente;
		}
		return aux->valor;
	}
	else 
		return 0;
}

//template <class T>
//T Lista<T>::getPosicion(int pos) {
//	if (pos < 0 || pos>longitud()) return 0;
//	if (pos == 0) return inicio->valor;
//
//	// Nodo<T> *temp;   //A
//	Nodo<T> *sgt = inicio;
//	int p = 0;
//
//	while (sgt->siguiente != NULL && p<pos - 1) {
//		sgt = sgt->siguiente;
//		p++;
//	}
//	return(sgt->valor);
//}

//------------------------------------------------------------------------------
//template<class T>
template<class T>
int Lista<T>::longitud() {
	if (inicio == nullptr) return(0);
	//---    
	int c = 0;
	Nodo<T>* aux = inicio;
	while (aux != nullptr) {
		aux = aux->siguiente;
		++c;
	}
	return c;
}

//------------------------------------------------------------------------------

template<class T>
void Lista<T>::insertarInicio(T v) {
	Nodo<T> *nodo = new Nodo<T>(v); // T->[VALOR|NULL]

	if (inicio == NULL)
		inicio = nodo;//L<-T
	else
		nodo->siguiente = inicio; //T.NEXT<-L
								  //-----
	inicio = nodo; //L<-T
	nodo = NULL; //T<-NULL
}
//------------------------------------------------------------------------------
template<class T>
void Lista<T>::insertarFinal(T v) {

	Nodo<T>* temp = inicio; //A<-L
	while (temp->siguiente != NULL) { //A.NEXT != NULL
		temp = temp->siguiente;
	}
	//
	Nodo<T>* nodo = new Nodo<T>(v); //T
	temp->siguiente = nodo; //A.NEXT <- T
	nodo = NULL; //T<-NULL
}
//------------------------------------------------------------------------------
template<class T>
void Lista<T>::insertarPosicion(T e, int posicion) {
	int pos = 0;
	Nodo<T> *t;
	t = inicio;
	if (posicion == 0)
		insertarInicio(e);
	else {
		while (t != NULL && pos<posicion - 1) {
			t = t->siguiente;
			pos++;
		}
		//----
		Nodo<T>* nodo = new Nodo<T>(e); // T->[val|NULL]
		nodo->siguiente = t->siguiente; //T.NEXT<-A.NEXT
		t->siguiente = nodo; //A.NEXT<-
	}
}
//------------------------------------------------------------------------------
template<class T>
void Lista<T>::mostrar() {
	Nodo<T> *nodo = inicio;
	if (nodo == NULL) return;
	//---
	cout << "L";
	do {
		cout << " -> ";
		Punto* pto = (Punto*)(nodo->valor);
		cout << pto->toString();
		nodo = nodo->siguiente;
	} while (nodo != NULL);
	cout << endl;
}
//------------------------------------------------------------------------------
template<class T>
T Lista<T>::deleteInicio() {
	T el = inicio->valor;
	inicio = inicio->siguiente;
	return(el);
}
//------------------------------------------------------------------------------
template<class T>
T Lista<T>::deleteFinal() {
	int pos = -1;
	Nodo<T> *t = inicio;
	while (t->siguiente != NULL) {
		t = t->siguiente;
		pos++;
	}
	T el = t->valor;
	//----
	t = inicio;
	int posbus = 0;
	while (posbus <= pos - 1) {
		posbus++;
		t = t->siguiente;
	}
	t->siguiente = nullptr;
	return(el);
}
//------------------------------------------------------------------------------

#endif

