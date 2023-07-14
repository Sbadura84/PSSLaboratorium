// PSSzad1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "siso.h"
#include "ModelARX.h"
#include "Regulator.h"
#include "Skok.h"
#include<iostream>
#include <cstdlib>

#include<vector>
#include<fstream>
#include<string>
#include <typeinfo>
#include "Skok.h"
#include "Impuls.h"
#include "Generator.h"
#include "Sin.h"
#include "Trojkat.h"



using namespace std;

int main()
{
    string temp, tempStr;
    float mdA, mdB, mop;
    vector<double> mA, mB;
    vector<ModelARX> modeleARX;
    vector<Regulator> regulatory;
    float plantOutput = 0;
    float inputSignal = 0;
    float regulatorOutput = 0;
    int k = 0;


    //Zczytywanie modeli ARX
    ifstream dataFile("ZestawDanych.txt");
    while (dataFile) {
        getline(dataFile, tempStr, '.');
        if (!tempStr.length() == 0) {
            for (int i = 0; i < tempStr.length(); i++) {
                
                //tworzenie tymczasowych zestawów danych
                if (!isspace(tempStr[i])) {
                    temp += tempStr[i];
                }
            }
            //wprowadzenie rzędu macierzy A
            mdA = temp[0] - 48;

            for (int i = 1; i < mdA + 1; i++) {
                
                //tworzenie macierzy elementów A
                mA.push_back(temp[i]);
            }

            //wprowadzanie rzędu macierzy B
            mdB = temp[mdA + 1] - 48;

            for (int i = mdA + 2; i < mdA + 1 + mdB + 1; i++) {
                //tworzenie macierzy elementów B
                mB.push_back(temp[i]);
            }
            
            //tworzenie modelu
            modeleARX.push_back(ModelARX(mdA, mdB, mA, mB, 0));
            modeleARX[k].wypiszWartosc(0, 0);
            //czyszczenie pamięci
            temp.clear();
            mB.clear();
            mA.clear();
            k++;
        }
    } 

    //Zczytywanie regulatorów
    ifstream regFile("ZestawRegulatorow.txt");
    while (regFile) {
        double tempD;
        double tempP;
        double tempI;
        regFile >> tempP >> tempI >> tempD;
        regulatory.push_back(Regulator(tempP, tempI, tempD));
    }
    vector<double> testA = { 1, -0.6, 0.3 };
    vector<double> testB = { 1, 0.5 };
    int testdA = 3;
    int testdB = 2;
    ModelARX modelTestowy(testdA, testdB, testA, testB, 0);
    Regulator regTestowy(0.00653629878562936, 0.0130725975712587, -1);


    //template?
    Trojkat sygTrojkat(2, 10, 0);
    Skok sygSkok(5, 0, 0);
    Generator generator1;
    Sygnal* syg;
    //syg = &sygTrojkat;
    //generator1.DodajSygnaly(syg);
    syg = &sygSkok;
    generator1.DodajSygnaly(syg);
        



    cout << "symuluj" << endl;
    
    ofstream results;
    results.open("resultsFile.txt");
    for (int i = 0; i < 100; i++) {
        inputSignal = generator1.Generuj() - plantOutput;
        regulatorOutput = regTestowy.Symuluj(inputSignal, 0);
        plantOutput = modelTestowy.Symuluj(regulatorOutput, 0);
        results << plantOutput;
        results << "\n ";
    }
    results << "End of simulation.\n";
    results.close();


    return 0;
}

