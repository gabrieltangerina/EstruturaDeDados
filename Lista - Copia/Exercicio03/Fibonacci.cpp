/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Fibonacci.cpp
 * Author: Pichau
 * 
 * Created on 30 de novembro de 2023, 16:34
 */

#include "Fibonacci.h"
#include <iostream>

using namespace std;

Fibonacci::Fibonacci() {
}

Fibonacci::Fibonacci(const Fibonacci& orig) {
}

Fibonacci::~Fibonacci() {
}

int Fibonacci::calculo(int n) {

    if (n <= 1) {
        return n;
    } else {
        return calculo(n - 1) + calculo(n - 2);
    }
}

void Fibonacci::mostrar() {

    int qtd;
    cout << "Digite a quantidade de termo para a sequencia de Fibonacci: ";
    cin >> qtd;

    cout << "Sequencia: " ;
    for (int i = 0; i < qtd; i++) {
        cout << calculo(i) << " ";
    }
    cout << endl;

}