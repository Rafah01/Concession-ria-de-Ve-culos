//
// Created by Thiago Aciole on 15/08/2022.
//

#include "Carro.h"
#include "Veiculos.h"


Carro::Carro(string newmodelo,string newmarca,string newano,double newpreco,string newtipo): Veiculos(newmodelo,newmarca,newano,newpreco){
    //Faz as atribuições dos argumentos do construtor para os atributos da classe

    this->modelo=newmodelo;
    this->marca=newmarca;
    this->ano=newano;
    this->preco=newpreco;
    this->tipo=newtipo;

}

void Carro:: setPreco(double newpreco) {
    this->preco=newpreco;
}
double Carro:: getPreco(){
    return this->preco;

}
