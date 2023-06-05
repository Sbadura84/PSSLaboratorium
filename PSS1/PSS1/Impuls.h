#pragma once
#include "Sygnal.h"
class Impuls :
    public Sygnal
{
private:
    int czestotliwoscPowtorzen;

public:
    double Wyjscie();
    Impuls(int f = 0);
};

