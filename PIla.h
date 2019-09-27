#ifndef __PILA_H_
#define __PILA_H_

#include "lista.h"

template<class T>
//class Pila :protected Lista<T>{
class Pila {
private:
	Lista<T> stck;
public:
	Pila<T>() {}
	//
	void push(T e) {
		stck.insertarInicio(e);
	}
	//
	T pop() {
		return(stck.deleteInicio());
	}
	//
	T peek(int i) {
		return(stck.getPosicion(i));
	}
	//

	bool empty() {
		return(stck.longitud() == 0);
	}

	int size() {
		return(stck.longitud());
	}

};
#endif