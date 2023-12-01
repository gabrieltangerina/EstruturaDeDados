/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Fibonacci.h
 * Author: Pichau
 *
 * Created on 30 de novembro de 2023, 16:34
 */

#ifndef FIBONACCI_H
#define FIBONACCI_H

class Fibonacci {
public:
    Fibonacci();
    Fibonacci(const Fibonacci& orig);
    virtual ~Fibonacci();
    
    int calculo(int n);
    void mostrar();
private:

};

#endif /* FIBONACCI_H */

