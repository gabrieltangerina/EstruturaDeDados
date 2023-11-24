/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cFila.cpp
 * Author: aluno
 * 
 * Created on 17 de novembro de 2023, 07:31
 */

#include "cFila.h"
#include <iostream>
#include <math.h>

using namespace std;

cFila::cFila() {
    this->aux = NULL;
    this->inicio = NULL;
    this->fim = NULL;
}

cFila::cFila(const cFila& orig) {
}

cFila::~cFila() {
}

void cFila::menu() {
    int escolha;

    cout << "[1] - Adicionar elemento" << endl;
    cout << "[2] - Remover elemento" << endl;
    cout << "[3] - Listar elementos" << endl;
    cout << "[4] - Para pesquisar" << endl;
    cout << "[0] - Sair " << endl;
    cin >> escolha;

    switch (escolha) {
        case 1:
            this->adicionar();
            this->menu();
            break;
        case 2:
            this->remover();
            this->menu();
            break;
        case 3:
            this->listar();
            this->menu();
            break;
        case 4:
            this->pesquisar();
            this->menu();
            break;
        case 5:
            this->retonarElementoMeio();
            break;
        case 0:
            cout << "Saindo..." << endl;
            break;
    }
}

void cFila::adicionar() {
    int num;

    cout << "Informe um número para adicionar a fila: ";
    cin >> num;

    if (this->jaExiste(num)) {
        cout << "O número já existe na FILA" << endl;
    } else {

        this->aux = (struct no*) malloc(sizeof (aux));

        this->aux->num = num;
        this->aux->prox = NULL;

        if (this->inicio == NULL) {
            this->inicio = this->aux;
        } else {
            this->fim->prox = this->aux;
        }

        this->fim = this->aux;
        this->fim->prox = NULL;
    }
}

bool cFila::jaExiste(int num) {

    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        if (this->aux->num == num) {
            return true;
        }
    }

    return false;

}

void cFila::listar() {
    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        cout << this->aux->num << " - ";
    }

    cout << endl;
}

void cFila::remover() {
    if (this->vazio(this->inicio)) {
        this->aux = this->inicio;
        this->inicio = this->inicio->prox;
        free(this->aux);
        cout << "Elemento removido com sucesso" << endl;
    }
}

void cFila::pesquisar() {
    int chave;

    cout << "Informe o número para pesquisar: ";
    cin >> chave;

    bool encontrado = false;
    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        if (this->aux->num == chave) {
            cout << "Elemento encontrado" << endl;
            encontrado = true;
        }
    }

    if (!encontrado)
        cout << "Elemento não encontrado" << endl;
}

bool cFila::vazio(no *structEnviado) {
    if (structEnviado == NULL) {
        return false;
    } else {
        return true;
    }
}

void cFila::retonarElementoMeio() {
    int i = 0;

    this->aux = this->inicio;

    while (this->vazio(this->aux)) {
        i++;
        this->aux = this->aux->prox;
    }

    int meio = i / 2;

    int j = 0;

    this->aux = this->inicio;

    while (this->vazio(this->aux)) {
        if (j == meio) {
            cout << "\nValor do meio: " << this->aux->num;
            return;
        }
        j++;
        this->aux = this->aux->prox;
    }
}