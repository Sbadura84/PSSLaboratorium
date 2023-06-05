#include "Trojkat.h"
#include <cmath>
#include <iostream>
using namespace std;

Trojkat::Trojkat(double a, int f,double b){
amplituda = a;
czestotliwoscZmiany = f;
przesuniecie = b;
}

double Trojkat::Wyjscie() {
	double wyjscie;
	int tempFloor = floor(double(mKrok / czestotliwoscZmiany));
	int znak = tempFloor % 4;
	switch (znak) {
	case 0:
		wyjscie = amplituda * mKrok / czestotliwoscZmiany;
		mKrok++;
		cout << "Sygnal Trojkat:" << wyjscie << endl;
		return wyjscie;
	case 1:
		wyjscie = amplituda * (1-mKrok / czestotliwoscZmiany);
		mKrok++;
		cout << "Sygnal Trojkat:" << wyjscie << endl;
		return wyjscie;
	case 2:
		wyjscie = -amplituda * mKrok / czestotliwoscZmiany;
		mKrok++;
		cout << "Sygnal Trojkat:" << wyjscie << endl;
		return wyjscie;
	case 3:
		wyjscie = -amplituda * (1 - mKrok / czestotliwoscZmiany);
		mKrok++;
		cout << "Sygnal Trojkat:" << wyjscie << endl;
		return wyjscie;
	default:
		cout << "Blad podczas generacji sygnalu trojkatnego" << endl;
		return -1;
	}

}