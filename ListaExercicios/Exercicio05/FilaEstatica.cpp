/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   FilaEstatica.cpp
 * Author: Pichau
 * 
 * Created on 30 de novembro de 2023, 16:56
 */

#include "FilaEstatica.h"
#include <iostream>

using namespace std;

FilaEstatica::FilaEstatica() {
}

FilaEstatica::FilaEstatica(const FilaEstatica& orig) {
}

FilaEstatica::~FilaEstatica() {
}

void FilaEstatica::inicio() {
    int qtnd;
    cout << "Informe o número de elementos que serão adicionar a fila estática: ";
    cin >> qtnd;

    this->elementos[qtnd];
    this->tamanho = qtnd;

    for (int i = 0; i < qtnd; i++) {
        elementos[i] = 0;
    }
}

void FilaEstatica::menu() {
    int escolha;

    cout << "[1] - Adicionar elemento" << endl;
    cout << "[2] - Remover elemento" << endl;
    cout << "[3] - Listar elementos" << endl;
    cout << "[4] - Para pesquisar" << endl;
    cout << "[0] - Sair " << endl;
    cin >> escolha;

    switch (escolha) {
        case 1:
            if (this->adicionar()) {
                cout << "Elemento adicionado com SUCESSO!" << endl;
            } else {
                cout << "O vetor já está completo" << endl;
            }

            this->menu();
            break;
        case 2:
            if (this->remover()) {
                cout << "Elemento removido com SUCESSO!" << endl;
            } else {
                cout << "Não há elementos no array para serem removidos" << endl;
            }
            this->menu();
            break;
        case 3:
//            this->listar();
            this->menu();
            break;
        case 4:
//            this->pesquisar();
            this->menu();
            break;
        case 5:
//            this->retonarElementoMeio();
            break;
        case 0:
            cout << "Saindo..." << endl;
            break;
    }
}

bool FilaEstatica::adicionar() {
    int num;
    cout << "Informe um elemento diferente de 0 para adicionar a fila estática: ";
    cin >> num;

    //    NA PILHA VAI SER I--
    for (int i = 0; i <this->tamanho; i++) {
        if (this->elementos[i] == 0) {
            this->elementos[i] = num;
            return true;
        }
    }

    return false;
}

bool FilaEstatica::remover() {
    for (int i = 0; i <this->tamanho; i++) {
        if (this->elementos[i] != 0) {
            this->elementos[i] = 0;
            return true;
        }
    }

    return false
}
