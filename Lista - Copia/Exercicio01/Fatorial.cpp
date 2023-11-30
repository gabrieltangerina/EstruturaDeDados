/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Fatorial.cpp
 * Author: Pichau
 * 
 * Created on 30 de novembro de 2023, 16:30
 */

#include "Fatorial.h"
#include <iostream>

using namespace std;

Fatorial::Fatorial() {
}

Fatorial::Fatorial(const Fatorial& orig) {
}

Fatorial::~Fatorial() {
}

void Fatorial::lerDados(){
    
    int num;
    cout << "Informe o número para calcular o fatorial: ";
    cin >> num;
    cout << "Fatorial de " << num << " = " << this->fatorial(num) << endl;
    
}

int Fatorial::fatorial(int num){
    
    if(num > 0){
        return num * this->fatorial(num-1);
    }else{
        return 1;
    }
    
}

