/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Fila.h
 * Author: Pichau
 *
 * Created on 30 de novembro de 2023, 16:37
 */

#ifndef FILA_H
#define FILA_H

struct no{
    int num;
    no* prox;
};

class Fila {
public:
  
    no *aux, *inicio, *fim;
    
    Fila();
    Fila(const Fila& orig);
    virtual ~Fila();
    
    void menu();
    void adicionarElemento();
    void imprimirElemento(no *structEnviado);
private:

};

#endif /* FILA_H */

