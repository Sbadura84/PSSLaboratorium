// PSSzad1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "siso.h"
#include "ModelARX.h"
#include "Regulator.h"
#include "testClass.h"
#include<iostream>
#include <cstdlib>
#include<time.h>
#include<vector>
#include<fstream>
using namespace std;

int main()
{/*
    //pobór danych
    int czasSymulacji=0;
    string typ[100];
    double rzAPlik[100];
    double Aplik1[100];
    double Aplik2[100];
    double Aplik3[100];
    double rzBPlik[100];
    double Bplik1[100];
    double Bplik2[100];

    ifstream infile;

    int num = 0;
    infile.open("ZestawDanych.txt");
    cout << "opening file" << endl;
    if (infile.fail()) 
    { 
        cout << "error" << endl;
        return 1; 
    }
    while (!infile.eof()) 
    {
        if (num == 0) {
            infile >> czasSymulacji;
            cout << "czas symulacji" << endl;
            ++num;
        }
        else {
           // cout << "dalsza czesc pliku" << endl;
            
            infile >> typ[num] >> rzAPlik[num] >> Aplik1[num] >> Aplik2[num] >> Aplik3[num] >> rzBPlik[num] >> Bplik1[num] >> Bplik2[num];
            cout << typ[num];
            ++num;
       // }
    }
    cout << "plik zczytany" << endl;
    cout << czasSymulacji;
    //zamknięcie pliku
    infile.close();
    */
    /*
    //wybór obiektu
    string wybranyARX = "O";
    int k = 0;
    double rzA=0;
    double rzB=0;
    vector<double>vekA, vekB;
    for (string label : typ)
    {
        if (label.compare(wybranyARX) == 0) {
            rzA = rzAPlik[k];
            vekA = { Aplik1[k] ,Aplik2[k] ,Aplik3[k] };
            rzB = rzBPlik[k];
            vekB = { Bplik1[k],Bplik2[k] };
            break;
            k = 0;
        }
        k++;
    }
    //wybór regulatora
    string wybranyReg = "R";
    double P = 0, I =0 , D =0;
    for (string label : typ)
    {
        if (label.compare(wybranyReg) == 0) {
            P = rzAPlik[k];
            I = Aplik1[k];
            D = Aplik2[k];
        }
        k++;
    }

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
    //LAB 1 
    //Ręczna definicja modelu oraz regulatora
    vector<double> A = { 2 };
    vector<double> B = { 5 , 2 };
    ModelARX newARX(1, 2, A, B, 0);
    Regulator newRegulator(1, 1, 1);
    double wyjscie = newARX.Symuluj(10, 0);
    double wyjscieReg = newRegulator.Symuluj(wyjscie, 0);
    double wyjscie2 = newARX.Symuluj(wyjscieReg, 0);
    cout <<"koniec programu: "<< wyjscie2 << endl;
    

    return 0;


    /*
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

