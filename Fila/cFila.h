/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cFila.h
 * Author: aluno
 *
 * Created on 17 de novembro de 2023, 07:31
 */

#ifndef CFILA_H
#define CFILA_H

class cFila {
public:
    
    struct no{
        int num;
        struct no *prox;
    };
    
    no *aux, *inicio, *fim;
    
    cFila();
    cFila(const cFila& orig);
    virtual ~cFila();
    
    void menu();
    void adicionar();
    void listar();
    bool vazio(no *structEnviado);
    void remover();
    bool jaExiste(int numEnviado);
    void pesquisar();
    void retonarElementoMeio();
    
private:

};

#endif /* CFILA_H */

