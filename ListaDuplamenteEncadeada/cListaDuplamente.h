/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cListaDuplamente.h
 * Author: aluno
 *
 * Created on 24 de novembro de 2023, 09:08
 */

#ifndef CLISTADUPLAMENTE_H
#define CLISTADUPLAMENTE_H

struct no {
    no *ant;
    int num;
    no *prox;
};

class cListaDuplamente {
public:

    no *aux, *inicio, *fim;

    cListaDuplamente();
    cListaDuplamente(const cListaDuplamente& orig);
    virtual ~cListaDuplamente();
    
    void menu();
    void inserir();
    void listar();
    
private:

};

#endif /* CLISTADUPLAMENTE_H */

