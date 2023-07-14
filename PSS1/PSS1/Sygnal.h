#pragma once

/// Klasa bazowa sygnałów
/// 
/// Klasa bazowa na podstawie której tworzone są poszczególne typy sygnałów
class Sygnal
{
	//probkowanie i generacja osobno
	//tworzymy sygnal bazujac na podstawie probkowania generacji
	//a pozniej pobieramy z tego sygnalu dane na podstawie probkowaia zczytywania
	//prawdopodobnie dzielimy ¿eby dostaæ mno¿nik dla i i floorujemy ¿eby nie dostaæ floatów

private:


	int czasGeneracji = 1;
	int czasProbkowania = 1;
	int podzialka;
	//czas generacji nie moze byc wiekszy niz czas probkowania
	//oba to podzia³ka

	 
public:
	/// zapisuje krok w pamięci w celu kontynuacji symulacji
	int mKrok = 0; 
	
	/// Wirtualna metoda generacji wyjścia
	/// 
	/// Wirtualna metoda dziedziczona przez klasy dziedziczące
	virtual double Wyjscie() = 0;
};

