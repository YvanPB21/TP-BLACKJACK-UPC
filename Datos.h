#pragma once
#include<fstream>
#include<iostream>
#include <string.h>
using namespace std;

class Datos {
private:
	int dinero;
	string nombre;
public:
	Datos(string nombre = "") : nombre(nombre) 
	{
		dinero = 450;
	}
	~Datos() {}

	void setNombre(string _nombre) { nombre = _nombre; }
	void setDinero(int _dinero) { dinero = dinero-_dinero; }

	string getNombre() { return nombre; }
	int getDinero() { return dinero; }

	int saveDatos(char* fn, Datos* p) {
		ofstream out;
		out.open(fn);
		if (!out.is_open()) return(-1);
		out.write((char*)p, sizeof(Datos) * 1);
		out.close();
	}
	
	int loadDatos(char*fn, Datos* p) {
		ifstream in;
		in.open(fn);
		if (!in.is_open()) return(-1);
		in.read((char*)p, sizeof(Datos) * 1);
		in.close();
	}
};
