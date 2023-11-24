/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   ListaDuplamente.h
 * Author: aluno
 *
 * Created on 24 de novembro de 2023, 08:16
 */

#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H

struct no{
    no *ant;
    int num;
    no *prox;
};

class ListaCircular {
public:
    
    no *aux, *inicio, *fim;
    int tamanhoLista;
    
    ListaCircular();
    ListaCircular(const ListaCircular& orig);
    virtual ~ListaCircular();
    
    void menu();
    void inserir();
    void listar();
    
private:

};

#endif 

