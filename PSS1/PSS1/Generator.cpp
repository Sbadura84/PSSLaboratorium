#include "Generator.h"
#include "iostream"
#define quote(x) #x
#include "Skok.h"
#include "Sin.h"
#include "Trojkat.h"
#include "Impuls.h"
#include "Sygnal.h"
/*
void Generator::DodajSygnalImpuls(Impuls nowySygnal) {
	nowySygnal.Wyjscie();
	cout << "Nazwa:" << quote(nowySygnal) << endl;
	sygnalyImpuls.push_back(nowySygnal);
}
void Generator::DodajSygnalTrojkat(Trojkat nowySygnal) {
	nowySygnal.Wyjscie();
	cout << "Nazwa:" << quote(nowySygnal) << endl;
	sygnalyTrojkat.push_back(nowySygnal);
}
void Generator::DodajSygnalSkok(Skok nowySygnal) {
	nowySygnal.Wyjscie();
	cout << "Nazwa:" << quote(nowySygnal) << endl;
	sygnalySkok.push_back(nowySygnal);
}
void Generator::DodajSygnalSin(Sin nowySygnal) {
	nowySygnal.Wyjscie();
	cout << "Nazwa:" << quote(nowySygnal) << endl;
	sygnalySin.push_back(nowySygnal);
}*/
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