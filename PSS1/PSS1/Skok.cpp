#include "Skok.h"
#include <cmath>
/// Klasa generująca skok jednostkowy
/// 
/// Klasa generująca  skok jednostkowy, z określoną czestotliwością zmiany znaku, przesunięciem i amplitudą.
Skok::Skok(double a, int f, double b) {
	amplituda = a;
	czestotliwoscZmiany = f;
	przesuniecie = b;
}


double Skok::Wyjscie(){
	double wyjscie;
	if (czestotliwoscZmiany != 0) {
		int tempFloor = floor(double(mKrok / czestotliwoscZmiany));
		if (tempFloor % 2 == 0) {
			wyjscie = amplituda;
		}
		else wyjscie = -amplituda;
	}
	else {
		if (mKrok < przesuniecie)
			wyjscie= 0;
		else
			wyjscie = amplituda;
	}
	mKrok++;
	return wyjscie;
}
