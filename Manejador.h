#pragma once
#include <stdlib.h>    
#include <time.h>
#include "Apuesta.h"
#include"Cartas.h"
#include "Espadas.h"
#include "Corazones.h"
#include "Diamantes.h"
#include "Trebol.h"
#include "LIsta.h"
#include "PIla.h"
#include "Datos.h"
#include <stdlib.h>

class Manejador
{
private:
	Lista<Cartas*>*Cartas_Jugador;
	Cartas* cartas_j;
	Cartas*aux;
	int x_j = 100;
	int cont_j=0;
	int suma_j = 0;
	int num = 0;
	Pila<Datos*>*Datos_Jug;
	Datos*datos_j;


	Lista<Cartas*>*Cartas_Bot;
	Cartas* cartas_b;
	Cartas*auxb;
	int x_b = 100;
	int cont_b = 0;
	int suma_b = 0;
	int numb = 0;

	Pila<Apuesta*>*Bet_jug;
	Apuesta*bet;
	Apuesta*aux2;
	int x_a = 250;
	int cont_a= 0;
	int suma_a=0;

public:
	Manejador() {
		Cartas_Jugador = new Lista<Cartas*>();
		aux = new Cartas(5,40,40);
		Datos_Jug = new Pila<Datos*>();
		datos_j = new Datos(" ");
		Cartas_Bot = new Lista<Cartas*>		();
		auxb = new Cartas(5, 40, 40);
		Bet_jug = new Pila<Apuesta*>();
		aux2 = new Apuesta(3, 3, 3);
	}
	~Manejador() {}
//-----------------------------JUGADOR----------------------------
	void setNombre(string nombre) {	datos_j->setNombre(nombre);	}
	void setDinero(int dinero) {datos_j->setDinero(dinero);}
	string getNombre() { return(datos_j->getNombre()); }
	int getDinero() { return(datos_j->getDinero()); }

	void Insertar_Cartas_Jugador(int tipo,bool bjk) {
		srand(time(NULL));
		if (bjk == false) {
			cont_j++;
			num = rand() % 12 + 1;
			switch (tipo)
			{
			case 1:	 cartas_j = new Espadas  (num, x_j, 350); break;
			case 2:	 cartas_j = new Corazones(num, x_j, 350); break;
			case 3:	 cartas_j = new Diamantes(num, x_j, 350); break;
			case 4:	 cartas_j = new Trebol	 (num, x_j, 350); break;
			}
			Cartas_Jugador->insertarInicio(cartas_j);
			x_j = x_j + 110;
			suma_j += cartas_j->getNum();
		}
	}
	void Dibuja_Cartas_Jugador(BufferedGraphics^buffer) {
		for (int i = 0; i < cont_j; i++) {
			aux = Cartas_Jugador->getPosicion(i);
			aux->Mostrar(buffer);
		}
		cartas_j->Mostrar(buffer);
	}
	int getSuma_J() { return suma_j; }
	int getContJug() {
		return cont_j;
	}
	bool GA() {
		if (getContJug() > 0) return true;
		else return false;
	}
	
//-------------------------------BOT------------------------------
	void Insertar_Cartas_Bot(int tipo, bool bjk) {
		srand(time(NULL));
		if (bjk == false) {
			cont_b++;
			num = rand() % 12 + 1;
			switch (tipo)
			{
			case 1:	 cartas_b = new Espadas  (num, x_b, 150); break;
			case 2:	 cartas_b = new Corazones(num, x_b, 150); break;
			case 3:	 cartas_b = new Diamantes(num, x_b, 150); break;
			case 4:	 cartas_b = new Trebol   (num, x_b, 150); break;
			}
			Cartas_Bot->insertarInicio(cartas_b);
			x_b = x_b + 110;
			suma_b += cartas_b->getNum();
		}
	}
	void Dibuja_Cartas_Bot(BufferedGraphics^buffer) {
		for (int i = 0; i < cont_b; i++) {
			auxb = Cartas_Bot->getPosicion(i);
			auxb->Mostrar(buffer);
		}
		cartas_b->Mostrar(buffer);
	}
	int getSuma_B() { return suma_b; }
	int getContBot() {
		return cont_b;
	}
	bool GIVEMEYOURBESTGA() {
		if (getContBot() > 0) return true;
		else return false;
	}

	//------------------------APUESTA-----------------------------
	void Insertar_Apuesta(int n) {
		cont_a++;
		bet = new Apuesta(n, x_a, 700);
		x_a = x_a + 50;
		Bet_jug->push(bet);
		suma_a += bet->getTotalBet();
	}
	void Dibuja_Apuesta(BufferedGraphics^buffer) {
		for (int i = 0; i < cont_a; i++) {
			aux2 = Bet_jug->peek(i);
			aux2->Mostrar(buffer);
		}
		bet->Mostrar(buffer);
	}
	int getContApu() {
		return cont_a;
	}
	bool GA2() {
		if (getContApu() > 0) return true;
		else return false;
	}
	int getBEt() { return suma_a; }

	//------------------------GAME--------------------------------
	int ganador() {
		if (getSuma_J()==21||(getSuma_J()<21 && getSuma_J() > getSuma_B()) || getSuma_B()>21)
			return 1;//gano el jugador 
		else if (getSuma_B() == 21 || (getSuma_B()<21 && getSuma_B() > getSuma_J())||getSuma_J()>21)
			return 2;//gano el bot
		else if (getSuma_B() == getSuma_J())
			return 3;//empate 
	}
};


