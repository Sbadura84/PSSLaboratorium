#pragma once
#include "Generator.h"
class Skok :
    public Generator
{
private:
    double amplituda;
    int czestotliwoscZmiany; //co ile probek
    double przesuniecie;
public:
    double Generuj();
    Skok(double amplituda, int czestotliwoscZmiany, double przesuniecie = 0);
};

