#pragma once
#include "Sygnal.h"
class Skok :
    public Sygnal
{
private:
    double amplituda;
    int czestotliwoscZmiany; //co ile probek
    double przesuniecie;
public:
    double Wyjscie();
    Skok(double amplituda, int czestotliwoscZmiany, double przesuniecie = 0);
};

