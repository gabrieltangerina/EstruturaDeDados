/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   ListaEncadeada.h
 * Author: Pichau
 *
 * Created on 30 de novembro de 2023, 19:23
 */

#ifndef LISTAENCADEADA_H
#define LISTAENCADEADA_H

struct no{
    no *ant;
    int num;
    no *prox;
};

class ListaEncadeada {
public:
    
    no *aux, *inicio, *fim;
    
    ListaEncadeada();
    ListaEncadeada(const ListaEncadeada& orig);
    virtual ~ListaEncadeada();
    
    void menu();
    void inserir();
    void listar();
    void remover();
    bool jaExiste(int num);
    
private:

};

#endif /* LISTAENCADEADA_H */

