#pragma once
#include "siso.h"
#include <vector>
using namespace std;

class Regulator :public siso {
public:
    double P;
    double I;
    double D;
    vector<double> u = { 0,0 };
    vector<double> y = { 0,0 };
public:
    Regulator(double = 1, double = 0, double = 0);
    virtual double Symuluj(double wejscie, double zaklocenie);

};

