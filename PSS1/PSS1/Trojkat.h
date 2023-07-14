#pragma once
#include "Sygnal.h"
/// Klasa generująca sygnał trójkątny
/// 
/// Klasa generująca sygnał trójkątny, z określonym czasem narastania i amplitudą sygnału.
class Trojkat :
    public Sygnal
{
private:
    double amplituda;
    int czestotliwoscZmiany;
    double przesuniecie;

public:
    /// Metoda generująca wartość wyjściową
/// <returns>Wartość sygnału w danej próbce</returns>
    double Wyjscie();
    /// <param name="amplituda">Amplituda sygnału (wartość maksymalna)</param>
/// <param name="czasNarastania">Czas narastania sygnału, czyli ile próbek musi minąć aby sygnał osiągną wartość maksymalną i zmienił znak</param>
/// <param name="przesuniecie">Przesunięcie wzgledem początku symulacji</param>
    Trojkat(double amplituda, int czasNarastania, double przesuniecie = 0);
};

