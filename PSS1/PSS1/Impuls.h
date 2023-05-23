#pragma once
#include "Generator.h"
class Impuls :
    public Generator
{
private:
    int czestotliwoscPowtorzen;

public:
    double Generuj();
    Impuls(int f = 0);
};

