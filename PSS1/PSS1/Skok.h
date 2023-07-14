#pragma once
#include "Sygnal.h"
/// Klasa generująca skok jednostkowy
/// 
/// Klasa generująca skok jednostkowy, z określoną czestotliwością przełączeń i wartością skoku.
class Skok :
    public Sygnal
{
private:
    double amplituda;
    int czestotliwoscZmiany; //co ile probek
    double przesuniecie;
public:
    /// Metoda generująca wartość wyjściową
    /// <returns>Wartość sygnału w danej próbce</returns>
    double Wyjscie();
    /// Konstruktor klasy
    /// <param name="amplituda">Amplituda sygnału (wartość wyjściowa)</param>
    /// <param name="czestotliwoscZmiany">Częstotliwość przełączeń na wartość przeciwną, co ile próbek</param>
    /// <param name="przesuniecie">Przesunięcie wzgledem początku symulacji</param>
    Skok(double amplituda, int czestotliwoscZmiany, double przesuniecie = 0);
};

