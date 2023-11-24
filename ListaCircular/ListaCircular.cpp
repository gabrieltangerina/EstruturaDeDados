/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   ListaDuplamente.cpp
 * Author: aluno
 * 
 * Created on 24 de novembro de 2023, 08:16
 */

#include "ListaCircular.h"
#include <iostream>

using namespace std;

ListaCircular::ListaCircular() {
    
    this->aux = NULL;
    this->inicio = NULL;
    this->fim = NULL;
    this->tamanhoLista = 0;
    
}

ListaCircular::ListaCircular(const ListaCircular& orig) {
}

ListaCircular::~ListaCircular() {
}

void ListaCircular::menu(){
    
    int opc;
    cout << endl << "1 - Adicionar" << endl;
    cout << "2 - Listar" << endl;
    cout << "0 - Sair" << endl;
    cout << "Opcao: ";
    cin >> opc;
    
    switch(opc){
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

void ListaCircular::inserir(){
    int num;
    cout << "Informe o número que será inserido na lista: ";
    cin >> num;
    
    this->aux = (struct no*)malloc(sizeof(aux));
    
    this->aux->prox = NULL;
    this->aux->num = num;
    
    if(this->inicio == NULL){
        this->inicio = this->aux;
        this->inicio->prox = NULL;
    }else{
        this->fim->prox = this->aux;
        this->aux->ant = this->fim;
    }
    
    this->fim = this->aux;
    this->inicio->ant = this->fim;
    this->fim->prox = this->inicio;
    this->tamanhoLista++;
}

void ListaCircular::listar(){
    int contador = 0;
    for(this->aux = this->inicio; this->tamanhoLista > contador; this->aux = this->aux->prox){
        cout << this->aux->num << "   ";
        contador++;
    }
}
