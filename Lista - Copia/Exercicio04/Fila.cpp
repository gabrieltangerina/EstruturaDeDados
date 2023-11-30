/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Fila.cpp
 * Author: Pichau
 * 
 * Created on 30 de novembro de 2023, 16:37
 */

#include "Fila.h"
#include <iostream>

using namespace std;

Fila::Fila() {
    this->aux = NULL;
    this->fim = NULL;
    this->inicio = NULL;
}

Fila::Fila(const Fila& orig) {
}

Fila::~Fila() {
}

void Fila::menu() {
    int escolha;

    cout << "[1] - Adicionar elemento" << endl;
    cout << "[2] - Listar elementos" << endl;
    cout << "[0] - Sair " << endl;
    cin >> escolha;

    switch (escolha) {
        case 1:
            this->adicionarElemento();
            this->menu();
            break;
        case 2:
            this->imprimirElemento(this->inicio);
            this->menu();
        case 0:
            break;
    }
}

void Fila::adicionarElemento(){
    int num;
    cout << "Informe o elemento que deseja adicionar a FILA: ";
    cin >> num;
    
    this->aux = (struct no*)malloc(sizeof(aux));
    this->aux->num = num;
    this->aux->prox = NULL;
    
    if(this->inicio == NULL){
        this->inicio = this->aux;
    }else{
        this->fim->prox = this->aux;
    }
    
    this->fim = this->aux;
    this->fim->prox = NULL;
}

void Fila::imprimirElemento(no *structEnviado){
    if(structEnviado != NULL){
        cout << structEnviado->num << endl;
        this->imprimirElemento(structEnviado->prox);
    }
}

