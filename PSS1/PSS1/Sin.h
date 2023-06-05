#pragma once
#include "Sygnal.h"
class Sin :
    public Sygnal
{
    private:    
        double amplituda;
        int czestotliwoscZmiany; //co ile probek
        double przesuniecie;
        float pi = 3.14;
public:
    double Wyjscie();
    Sin(double amplituda, int czestotliwoscZmiany = 1, double przesuniecie = 0);
};

