#include "Regulator.h"
#include "siso.h"
#include<iostream>

double Regulator::Symuluj(double wejscie, double zaklocenie) {
	u[1] = u[0];
	u[0] = wejscie; 
	//cout << "wejscie regulator"<< u[0] << endl;
	double dU = u[0] - u[1];
	double wyjscie = P * u[0] + I * (u[0] + u[1]) / 2 + D * dU;
	//   wyjscie = wejscie * PID
	cout << "sygnał wyjściowy regulatora " << wyjscie << endl;
	return wyjscie;
}
Regulator::Regulator(double kP, double kI, double kD) {
	P = kP;
	I = kI;
	D = kD;
}

