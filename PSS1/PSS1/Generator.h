#pragma once
class Generator
{
	//probkowanie i generacja osobno
	//tworzymy sygnal bazujac na podstawie probkowania generacji
	//a pozniej pobieramy z tego sygnalu dane na podstawie probkowaia zczytywania
	//prawdopodobnie dzielimy �eby dosta� mno�nik dla i i floorujemy �eby nie dosta� float�w

private:

	int czasGeneracji = 1;
	int czasProbkowania = 1;
	int podzialka;
	//czas generacji nie moze byc wiekszy niz czas probkowania
	//oba to podzia�ka

	 
public:
	int mKrok = 0; //zapisuje krok w pami�ci

	virtual double Generuj();
};

