#include "Impuls.h"

Impuls::Impuls(int powtarzalnosc){
	czestotliwoscPowtorzen = powtarzalnosc;
}

double Impuls::Wyjscie() {
	double wyjscie = 0;
	if (mKrok == 0) {
		wyjscie = 99999999999999;
	}
	if (czestotliwoscPowtorzen != 0) {
		if (mKrok % czestotliwoscPowtorzen == 0) {
			wyjscie = 99999999999999;
		}
	}

	return wyjscie;
}