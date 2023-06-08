#pragma once
#include <list>
#include "Sygnal.h"
using namespace std;
class Impuls;
class Trojkat;
class Skok;
class Sin;

class Generator
{
	list<Sygnal*> sygnaly = list<Sygnal*>();


public: 
	void DodajSygnaly(Sygnal* sygnalNew);
	float Generuj();
};

