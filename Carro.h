//
// Created by  Rafael Augusto on 15/08/2022.
//

#ifndef PROJETO_POO_CARRO_H
#define PROJETO_POO_CARRO_H
#include <iostream>
#include <string>
#include "Veiculos.h"

using namespace std;

class Carro:public Veiculos {
    private:

        //Atributo tipo: hatch ou sedan

        string tipo;
    public:
        Carro(string modelo,string marca,string ano,double preco,string tipo);

    void setPreco(double newpreco);
    double getPreco();
};


#endif //PROJETO_POO_CARRO_H
