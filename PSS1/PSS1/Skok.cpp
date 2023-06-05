#include "Skok.h"
#include <cmath>

Skok::Skok(double a, int f, double b) {
	amplituda = a;
	czestotliwoscZmiany = f;
	przesuniecie = b;
}

double Skok::Wyjscie(){
	double wyjscie;
	int tempFloor = floor(double(mKrok / czestotliwoscZmiany));
	if (tempFloor % 2 == 0) {
		wyjscie = amplituda;
	}
	else wyjscie = -amplituda;
	mKrok++;
	return wyjscie;
}
