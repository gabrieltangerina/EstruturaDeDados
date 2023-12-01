/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   FilaEstatica.h
 * Author: Pichau
 *
 * Created on 30 de novembro de 2023, 16:56
 */

#ifndef FILAESTATICA_H
#define FILAESTATICA_H

class FilaEstatica {
public:
    
    int elementos[tamanho], tamanho;
    
    FilaEstatica();
    FilaEstatica(const FilaEstatica& orig);
    virtual ~FilaEstatica();
    
    void inicio();
    void menu();
    bool adicionar();
    bool remover();
private:

};

#endif /* FILAESTATICA_H */

