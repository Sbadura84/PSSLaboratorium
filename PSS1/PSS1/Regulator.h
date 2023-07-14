#pragma once
#include "siso.h"
#include <vector>
using namespace std;

/// Klasa regulatora
/// 
/// Klasa odpowiadająca za stworzenie regulatora oraz jego działanie
class Regulator :public siso {
public:
    double P;
    double I;
    double D;
    double integral =0;
    vector<double> u = { 0,0 };
    vector<double> y = { 0,0 };
public:
    /// Konstruktor obiektu klasy regulator

    /// <param name=P"">Wartość części proporcjonalnej regulatora PID, domyślnie 1</param>
    /// <param name=I"">Wartość części całkującej regulatora PID, domyślnie 0</param>
    /// <param name=D"">Wartość części pochodnej regulatora PID, domyślnie 0</param>
    Regulator(double = 1, double = 0, double = 0);
    virtual double Symuluj(double wejscie, double zaklocenie);

};

