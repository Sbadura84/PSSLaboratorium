#pragma once
#include "Sygnal.h"
/// Klasa generująca sygnał sinusoidalny
/// 
/// Klasa generująca sygnał sinusoidalny, z określoną czestotliwością i amplitudą sygnału.
class Sin :
    public Sygnal
{
    private:    
        double amplituda;
        int czestotliwoscZmiany; //co ile probek
        double przesuniecie;
        float pi = 3.14;
public:
    /// Metoda generująca wartość wyjściową
/// <returns>Wartość sygnału w danej próbce</returns>
    double Wyjscie();

    /// Konstruktor klasy
/// <param name="amplituda">Amplituda sygnału (wartość wyjściowa)</param>
/// <param name="czestotliwoscZmiany">Częstotliwość sygnału sinusoidalnego</param>
/// <param name="przesuniecie">Przesunięcie wzgledem początku symulacji</param>
    Sin(double amplituda, int czestotliwoscZmiany = 1, double przesuniecie = 0);
};

