
#pragma once
#include "siso.h"
#include <vector>;
using namespace std;
/// Klasa modeluARX
/// 
/// Klasa odpowiadająca za stworzenie modeluARX oraz jego działanie
class ModelARX : public siso {
public:
	//Dane defaultowe
	int dA = 1;
	int dB = 1;
	vector<double> A = { 1 };
	vector<double> B = { 1 };

	vector<double> u;
	vector<double> y;

	int d = 0;
	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <param name=""></param>
	/// <returns></returns>
	double Symuluj(double = 0, double = 0);
	/// Konstruktor obiektu klasy modelARX
	/// <param name="sizeA">Wielkość wektora A podana przez użytkownika</param>
	/// <param name="sizeB">Wielkość wektora B podana przez użytkownika</param>
	/// <param name="A">Wektor  A</param>
	/// <param name="B">Wektor B</param>
	/// <param name="op">Opóźnienie modelu ARX</param>
	/// <attention>Parametry sizeA oraz sizeB muszą być zgodne z rzeczywistymi wymiarami wektorów A i B</attention>
	ModelARX(int sizeA, int sizeB, vector<double>, vector<double>, int op);
	/// Funkcja wypisująca model ARX 
	/// 
	/// Funkcja do celów debugowych, służąca do sprawdzenia poprawności wprowadzenia danych
	void wypisz();
	void wypiszWartosc(int = 0, int =0);
};



