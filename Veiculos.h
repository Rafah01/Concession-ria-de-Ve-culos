//
// Created by  Rafael Augusto on 15/08/2022.
//

#ifndef PROJETO_POO_VEICULOS_H
#define PROJETO_POO_VEICULOS_H

#include <iostream>
#include <string>


using namespace std;


class Veiculos{
        //Criação dos atributos
    protected:
        string modelo;
        string marca;
        string ano;
        double preco;
    public:
        //Criação do construtor


        Veiculos(string newmodelo,string newmarca,string newano,double newpreco);

        //Criação dos métodos

        void setPreco(double newpreco);
        double getPreco();
        string getName();

};


#endif //PROJETO_POO_VEICULOS_H
