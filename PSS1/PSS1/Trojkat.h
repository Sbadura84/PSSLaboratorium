#pragma once
#include "Generator.h"
class Trojkat :
    public Generator
{
private:
    double amplituda;
    int czestotliwoscZmiany; //co ile probek
    double przesuniecie;

public:
    double Generuj();
    Trojkat(double amplituda, int czasNarastania, double przesuniecie = 0);
};

