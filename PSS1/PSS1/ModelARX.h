
#pragma once
#include "siso.h"
#include <vector>;
using namespace std;

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
//public:
	double Symuluj(double = 0, double = 0);
	ModelARX(int sizeA, int sizeB, vector<double>, vector<double>, int op);
	void wypisz();
};



