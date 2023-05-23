#pragma once
#include "Generator.h"
class Sin :
    public Generator
{
    private:    
        double amplituda;
        int czestotliwoscZmiany; //co ile probek
        double przesuniecie;
        float pi = 3.14;
public:
    double Generuj();
    Sin(double amplituda, int czestotliwoscZmiany = 1, double przesuniecie = 0);
};

