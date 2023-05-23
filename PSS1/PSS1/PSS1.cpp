// PSSzad1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "siso.h"
#include "ModelARX.h"
#include "Regulator.h"
#include "testClass.h"
#include "Skok.h"
#include<iostream>
#include <cstdlib>
#include<time.h>
#include<vector>
#include<fstream>
#include<string>
#include <typeinfo>
using namespace std;

int main()
{/*
    ModelARX nowyARX(rzA, rzB, vekA, vekB, 0);
    Regulator nowyReg(P, I, D);
    double wyjscieObiekt, wyjscieReg, wejscie;
    double wymuszenie =1;
    wejscie = wymuszenie;
    for (int i = 0; i < czasSymulacji; i++) {
        wyjscieObiekt = nowyARX.Symuluj(wejscie,0);
        wyjscieReg = nowyReg.Symuluj(wyjscieObiekt, 0);
        wejscie = wymuszenie - wyjscieReg;
    }
    cout << wejscie << endl;
    */
    string temp, tempStr;
    int mdA, mdB, mop;
    vector<double> mA, mB;
    vector<ModelARX> modeleARX;
    ifstream dataFile("ZestawDanych.txt");
    while (dataFile) {
        getline(dataFile, tempStr, '.');
        //
        //cout << tempStr.length();
        if (!tempStr.length() == 0) {
            for (int i = 0; i < tempStr.length(); i++) {
                //cout << "TempStr[" << i << "] = " << tempStr[i] << endl;
                if (!isspace(tempStr[i])) {
                    temp += tempStr[i];
                    //cout << temp << endl;
                }
            }
            cout << temp << " " << typeid(temp).name() << endl;
            mdA = temp[0] - 48;
            cout << "temp[0]= " << temp[0] << endl << "mdA = " << mdA << endl;
            for (int i = 1; i < mdA + 1; i++) {
                //cout << "i= " << i<< endl;
                //cout << "temp[i] = " << temp[i] << endl;
                mA.push_back(temp[i]);
            }
            mdB = temp[mdA + 1] - 48;
            cout << "mdB= " << mdB << endl;
            for (int i = mdA + 2; i < mdA + 1 + mdB + 1; i++) {
                //cout << "i= " << i << endl;
                //cout << "temp[i] = " << temp[i] << endl;
                mB.push_back(temp[i]);
            }
            //cout << " mB = " << mB.size()<< endl;

            modeleARX.push_back(ModelARX(mdA, mdB, mA, mB, 0));
            //modeleARX[0].wypisz();
            cout << endl << "Koniec iteracji" << endl;
            temp.clear();
            mB.clear();
            mA.clear();
        }
    } 

    cout << "symuluj" << endl;
    modeleARX[0].Symuluj(1, 0);
    cout << endl;
    modeleARX[1].wypisz();
    
    //LAB 1 
    //Ręczna definicja modelu oraz regulatora
    /*
    vector<double> A = { 2 };
    vector<double> B = { 5 , 2 };
    ModelARX newARX(1, 2, A, B, 0);
    Regulator newRegulator(1, 1, 1);
    double wyjscie = newARX.Symuluj(10, 0);
    double wyjscieReg = newRegulator.Symuluj(wyjscie, 0);
    double wyjscie2 = newARX.Symuluj(wyjscieReg, 0);
    cout <<"koniec programu: "<< wyjscie2 << endl;
    */

    return 0;


    /* Tworzenie losowego modelu ARX
    int dA;
    int dB;

    cout << endl << "Podaj rz¹d A";
    cin >> dA;
    cout << endl << "Podaj rz¹d B";
    cin >> dB;
    ModelARX nowyARX(dA, dB);


    for (int i = 0; i < nowyARX.dA; i++) {
        srand(time(NULL));
        nowyARX.A[i] = rand() % 11 - 5 + rand() % 10 * 0.01;
    }
    for (int i = 0; i < nowyARX.dB; i++) {
        srand(time(NULL));
        nowyARX.B[i] = rand() % 11 - 5 + rand() % 10 * 0.01;
    }
    Regulator nowyRegulator;
    nowyRegulator.P = 5;
    */
}

