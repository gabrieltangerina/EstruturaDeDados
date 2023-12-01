/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Pilha.h
 * Author: Pichau
 *
 * Created on 30 de novembro de 2023, 18:20
 */

#ifndef PILHA_H
#define PILHA_H

struct no{
    int num;
    no* ant;
};

class Pilha {
public:
    
    no *aux, *topo, *fim;
    
    Pilha();
    Pilha(const Pilha& orig);
    virtual ~Pilha();
    
    void menu();
    void adicionar();
    void remover();
    void listar();
    void pesquisar();
    int calcularMeio();
    int retonarElementoMeio();
    no* retornaEnderecoMeio();
    
private:

};

#endif /* PILHA_H */

