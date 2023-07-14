#pragma once
#include <list>
#include "Sygnal.h"
using namespace std;
class Impuls;
class Trojkat;
class Skok;
class Sin;

/// Celem klasy jest łączenie wielu sygnałów wejściowych w jeden
/// 
/// Klasa otrzymuje wskaźniki do określonych obiektów należących do klass poszczególnych sygnałów,
/// dzięki temu jesteśmy w stanie stworzyć listę sygnałów a następnie wygenerować wyjścia każdego sygnału poprzez wywoływanie ich funkcji generowania

class Generator
{
	list<Sygnal*> sygnaly = list<Sygnal*>(); 


public: 

	/// Metoda odpowiadająca za dodanie sygnału
	/// 
	/// Podanie parametru Sygnal* pozwala na dodanie wskaźnika obiektu z rodziny klas sygnal do listy sygnałów rozpatrywanych przez obiekt klasy generator
	/// <param name="sygnalNew">Wskaźnik do obiektu klasy dziedziczącej z klasy Sygnal</param>
	/// <see>class Sygnal</see>
	void DodajSygnaly(Sygnal* sygnalNew);

	/// Metoda generuje wyjście
	/// 
	/// Funkcja iteruje przez wszystkie elementy listy sygnałów wprowadzonych za pomocą metody DodajSygnaly(Sygnal*) i sumuje ich wyjścia w postaci jednej zmeinnej double wyjscie
	/// <returns>Suma wartości wygenerowanych z danej iteracji z każdego sygnału</returns>
	float Generuj();
};

