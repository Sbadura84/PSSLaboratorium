#include "Generator.h"
#include "iostream"
#define quote(x) #x
#include "Skok.h"
#include "Sin.h"
#include "Trojkat.h"
#include "Impuls.h"
#include "Sygnal.h"

void Generator::DodajSygnaly(Sygnal* sygnalNew) {
	sygnaly.push_back(sygnalNew);
}

float Generator::Generuj() {
	Sygnal *syg;
	

	float wyjscie = 0;
	for (Sygnal* var : sygnaly)
	{
		wyjscie += var->Wyjscie();
	}
	return wyjscie;
}