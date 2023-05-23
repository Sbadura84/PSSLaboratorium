#include "Sin.h"
#include "Math.h"


Sin::Sin(double A, int czestotliwosc, double offset) {
	czestotliwoscZmiany =  czestotliwosc;
	amplituda = A;
	przesuniecie = offset;
}

double Sin::Generuj() {
	double wyjscie = 0;

	// 2pi = 1 cykl
	// 1 pi = pol cyklu
	float radians = (2 * pi) * (mKrok / czestotliwoscZmiany);

	wyjscie = sin(radians+przesuniecie) * amplituda;

	return wyjscie;
}