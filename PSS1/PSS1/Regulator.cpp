#include "Regulator.h"
#include "siso.h"
#include<iostream>

double Regulator::Symuluj(double wejscie, double zaklocenie) {
	u[1] = u[0];
	u[0] = wejscie; 
	double dU = u[0] - u[1];
	double temp =0;
	for (int i = 1; i < u.size(); i++) {
		temp += u[i];
	}
	double Iwartość = temp * I;

	double wyjscie = P * u[0] + Iwartość + D * dU;
	cout << "sygnał wyjściowy regulatora " << wyjscie << endl;
	return wyjscie;
}
Regulator::Regulator(double kP, double kI, double kD) {
	P = kP;
	I = kI;
	D = kD;
}

