#pragma once
#include "Sygnal.h"

/// Klasa generująca impuls
/// 
/// Klasa generująca impuls, z określoną czestotliwością powtarzalności.
class Impuls :
    public Sygnal
{
private:
    int czestotliwoscPowtorzen;

public:
    /// Metoda generująca wartość wyjściową
    /// <returns>Wartość impulsu w danej próbce</returns>
    double Wyjscie();
    /// Konstruktor klasy
    /// <param name="f">Powtarzalność impulsu, domyślnie = 0</param>
    Impuls(int f = 0);
};

