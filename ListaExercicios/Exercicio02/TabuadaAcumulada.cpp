/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   TabuadaAcumulada.cpp
 * Author: Pichau
 * 
 * Created on 30 de novembro de 2023, 16:33
 */

#include "TabuadaAcumulada.h"
#include <iostream>

using namespace std;

TabuadaAcumulada::TabuadaAcumulada() {
}

TabuadaAcumulada::TabuadaAcumulada(const TabuadaAcumulada& orig) {
}

TabuadaAcumulada::~TabuadaAcumulada() {
}

void TabuadaAcumulada::lerDados(){
    int num;
    cout << "Informe o número para calcular o valor acumulado da tabuada: ";
    cin >> num;
    
    cout << "Valor tabuada acumulada: " << this->calcular(num, 10) << endl;
}

int TabuadaAcumulada::calcular(int num, int contador){
    
    if(contador == 0){
        return 0;
    }else{
        return num * contador + this->calcular(num, contador-1);
    }
    
}


