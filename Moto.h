#ifndef PROJETO_POO_MOTO_H
#define PROJETO_POO_MOTO_H
#include <iostream>
#include <string>
#include "veiculos.h"

using namespace std;


class Moto:public Veiculos{

    private:

        string cilindrada;

    public:
        Moto(string modelo,string marca,string ano,double preco, string cilindrada);

        void setPreco(double newpreco);
        double getPreco();
};


#endif //PROJETO_POO_MOTO_H
