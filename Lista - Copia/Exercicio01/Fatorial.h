/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Fatorial.h
 * Author: Pichau
 *
 * Created on 30 de novembro de 2023, 16:30
 */

#ifndef FATORIAL_H
#define FATORIAL_H

class Fatorial {
public:
    Fatorial();
    Fatorial(const Fatorial& orig);
    virtual ~Fatorial();

    void lerDados();
    int fatorial(int num);


private:

};

#endif /* FATORIAL_H */

