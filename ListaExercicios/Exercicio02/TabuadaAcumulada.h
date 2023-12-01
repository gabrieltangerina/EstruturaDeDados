/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   TabuadaAcumulada.h
 * Author: Pichau
 *
 * Created on 30 de novembro de 2023, 16:33
 */

#ifndef TABUADAACUMULADA_H
#define TABUADAACUMULADA_H

class TabuadaAcumulada {
public:
    TabuadaAcumulada();
    TabuadaAcumulada(const TabuadaAcumulada& orig);
    virtual ~TabuadaAcumulada();

    void lerDados();
    int calcular(int num, int contador);

private:

};

#endif /* TABUADAACUMULADA_H */

