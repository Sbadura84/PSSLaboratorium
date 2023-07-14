#pragma once
/// Klasa bazowa elementów symulacji
/// 
/// Klasa odpowiadająca za konstrukcję elementów symulacji
class siso
{
public:
    /// Funkcja symulacji
    /// 
    /// Symuluje zachowanie obiektu na określone parametry symulacji
    /// <param name="wejscie">Wartość wejściowa danej symulacji</param>
    /// <param name="zaklocenie">Wartość zakłócająca element symulacji</param>
    /// <returns>Wartość na wyjściu elementu symulacji</returns>
    virtual double Symuluj(double wejscie, double zaklocenie) = 0;
    /// Wartość wejściowa danej symulacji
    double wejscie;
};





