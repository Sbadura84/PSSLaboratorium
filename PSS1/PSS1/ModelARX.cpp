#include "ModelARX.h"
#include "siso.h"
#include<iostream>
#include<string>
using namespace std;

ModelARX::ModelARX(int rzA, int rzB,vector<double> mA, vector<double> mB, int op) {
	dA = rzA;
	dB = rzB;

	//cout << mA.size() << " i " << rzA << endl;
	if (mA.size() == rzA) {
		A = mA;
	}
	else {
		cout << "rząd A niezgodny z macierzą A" << endl;
		return;
	}

	//inicjalizacja macierzy B jeśli nie została ona podana
	if (mB.size() == rzB) {
		B = mB;
	}

	//inicjalizacja macierzy pamięci wyjść i wejść
	for (int i = 0; i < rzB + op; i++) {
		u.push_back(0);
	}
	for (int i = 0; i < rzA; i++) {
		y.push_back(0);
	}
	//cout << "rzB" << rzB << endl;
	//cout << "sizeof u= " << u.size() << endl <<u[0];

	d = op;


}
double ModelARX::Symuluj(double wartosc, double zaklocenie) {
	double tempM = 0;
	double tempL = 0;

	for (int i = (u.size()) - 1 - 1 + d; i >= 0; i--) {
		u[i + 1] = u[i];
		//cout <<"u[1]"<< u[1] << endl;
	}
	u[0] = wartosc;
	//cout << "u[0]" << u[0] << endl;
	for (int i = 0; i < B.size(); i++)
	{
		tempL = tempL + (B[i] * u[i + d]);
		//cout << "tempL dla i=" << i <<" wartosc: " << tempL << endl;
	}
	for (int i = 0; i < A.size() - 1; i++)
	{
		tempM = tempM - (A[i+1] * y[i]);
	}
	for (int i = y.size() - 1 - 1; i >= 0; i--) {
		y[i + 1] = y[i];
	}
	y[0] = tempL + tempM + zaklocenie;
	cout << "Sygnał wyjściowy obiektu: " << y[0] << endl;
	return y[0];
}
void ModelARX::wypisz() {
	string str(A.begin(), A.end());
	cout << str << endl;
}