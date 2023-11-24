/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cPilha.h
 * Author: aluno
 *
 * Created on 17 de novembro de 2023, 09:54
 */

#ifndef CPILHA_H
#define CPILHA_H

struct no{
    int num;
    no *ant;
};
    
class cPilha {
public:
    
    no *aux, *topo, *fim;
    
    cPilha();
    cPilha(const cPilha& orig);
    virtual ~cPilha();
    
    void menu();
    void empilhar();
    void desempilhar();
    void listar();
    void pesquisar();
    no* retonarEnderecoMeio();
    int retonarElementoMeio();
    int calcularMeio();
    bool vazio(no *structEnviado);
    
    
private:

};

#endif /* CPILHA_H */

