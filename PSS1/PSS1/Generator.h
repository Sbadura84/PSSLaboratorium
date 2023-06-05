#pragma once
#include <list>
#include "Sygnal.h"
using namespace std;
class Impuls;
class Trojkat;
class Skok;
class Sin;

class Generator
{/*
	list<Impuls> sygnalyImpuls = list<Impuls>();
	list<Trojkat> sygnalyTrojkat = list<Trojkat>();
	list<Skok> sygnalySkok = list<Skok>();
	list<Sin> sygnalySin = list<Sin>();
	//list<Sygnal> sygnalySzum = list<Sygnal>();
	*/
	list<Sygnal*> sygnaly = list<Sygnal*>();


public: 
	void DodajSygnaly(Sygnal* sygnalNew);
	/*
	void DodajSygnalImpuls(Impuls nowySygnal);
	void DodajSygnalTrojkat(Trojkat nowySygnal);
	void DodajSygnalSkok(Skok nowySygnal);
	void DodajSygnalSin(Sin nowySygnal);
	*/
	//void DodajSygnalSzum(Szum nowySygnal);
	float Generuj();
};

