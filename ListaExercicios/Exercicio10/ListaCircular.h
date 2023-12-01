/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   ListaCircular.h
 * Author: Pichau
 *
 * Created on 30 de novembro de 2023, 20:12
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
    
    no* aux, *inicio, *fim;
    int tamanhoLista;
    
    ListaCircular();
    ListaCircular(const ListaCircular& orig);
    virtual ~ListaCircular();
    
    void menu();
    void inserir();
    void listar();
    void remover();
    no* pesquisar(int chave);
    
private:

};

#endif /* LISTACIRCULAR_H */

