/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cListaDuplamente.cpp
 * Author: aluno
 * 
 * Created on 24 de novembro de 2023, 09:08
 */

#include "cListaDuplamente.h"
#include <iostream>

using namespace std;

cListaDuplamente::cListaDuplamente() {
    
    this->aux = NULL;
    this->fim = NULL;
    this->inicio = NULL;
    
}

cListaDuplamente::cListaDuplamente(const cListaDuplamente& orig) {
}

cListaDuplamente::~cListaDuplamente() {
}

void cListaDuplamente::menu() {

    int opc;
    cout << endl << "1 - Adicionar" << endl;
    cout << "2 - Listar" << endl;
    cout << "0 - Sair" << endl;
    cout << "Opcao: ";
    cin >> opc;

    switch (opc) {
        case 1:
            this->inserir();
            this->menu();
            break;
        case 2:
            this->listar();
            this->menu();
            break;
        case 0:
            cout << "Saindo" << endl;
            break;
    }
}

void cListaDuplamente::inserir() {
    int num;
    cout << "Informe o número que será inserido na lista: ";
    cin >> num;

    this->aux = (struct no*)malloc(sizeof(aux));

    this->aux->num = num;
    this->aux->prox = NULL;
    this->aux->ant = NULL;

    if (this->inicio == NULL) {
        this->inicio = this->aux;
        this->inicio->prox = NULL;
        this->inicio->ant = NULL;
    } else {
        this->fim->prox = this->aux;
        this->aux->ant = this->fim;
    }

    this->fim = this->aux;
}

void cListaDuplamente::listar() {
    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        cout << this->aux->num << "   ";
    }
}


