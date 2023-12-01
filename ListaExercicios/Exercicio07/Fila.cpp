/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Fila.cpp
 * Author: Pichau
 * 
 * Created on 30 de novembro de 2023, 17:32
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
    cout << "[2] - Remover elemento" << endl;
    cout << "[3] - Listar elementos" << endl;
    cout << "[4] - Para pesquisar" << endl;
    cout << "[5] - Retornar Elemento Meio" << endl;
    cout << "[6] - Retorna Endereço Meio" << endl;
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
            this->retornaElementoMeio();
            this->menu();
            break;
        case 6:
            this->retornaEnderecoElementoMeio();
            this->menu();
        case 0:
            cout << "Saindo..." << endl;
            break;
    }
}

void Fila::adicionar() {
    int num;
    cout << "Informe o elemento que será adiciona a FILA: ";
    cin >> num;

    if (this->elementoExiste(num)) {
        cout << "Elemento já existe!" << endl;
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

void Fila::remover() {
    if (this->inicio != NULL) {
        this->aux = this->inicio;
        this->inicio = this->inicio->prox;
        free(this->aux);
        cout << "Elemento removido com sucesso!" << endl;
    }
}

void Fila::listar() {
    cout << "Elementos: ";
    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        cout << this->aux->num << "     ";
    }
    cout << endl;
}

void Fila::pesquisar() {
    int chave, posicao = 0;
    bool encontrado = false;
    cout << "Informe o elemento que deseja pesquisar: ";
    cin >> chave;

    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        posicao++;
        if (this->aux->num == chave) {
            cout << "Elemento Encontrado na posição " << posicao << endl;
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "Elemento não encontrado!" << endl;
    }
}

int Fila::meioFila() {
    int qtndElementos = 0;

    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        qtndElementos++;
    }

    int meio = qtndElementos / 2;
    return meio + 1;
}

int Fila::retornaElementoMeio() {
    int meio = this->meioFila();
    int contador = 0;

    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        contador++;
        if (contador == meio) {
            cout << "Elemento meio: " << this->aux->num << endl;
            return this->aux->num;
        }
    }

}

no* Fila::retornaEnderecoElementoMeio() {
    int meio = this->meioFila();
    int contador = 0;

    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        contador++;
        if (contador == meio) {
            cout << "Endereço elemento meio: " << this->aux << endl;
            return this->aux;
        }
    }
}

bool Fila::elementoExiste(int num) {
    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        if (this->aux->num == num) {
            return true;
        }
    }

    return false;
}