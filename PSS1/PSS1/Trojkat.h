#pragma once
#include "Sygnal.h"
class Trojkat :
    public Sygnal
{
private:
    double amplituda;
    int czestotliwoscZmiany; //co ile probek
    double przesuniecie;

public:
    double Wyjscie();
    Trojkat(double amplituda, int czasNarastania, double przesuniecie = 0);
};

