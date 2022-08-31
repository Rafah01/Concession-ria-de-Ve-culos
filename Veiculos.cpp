//
// Created by  Rafael Augusto on 15/08/2022.
//

#include "Veiculos.h"

Veiculos:: Veiculos(string newmodelo,string newmarca,string newano,double newpreco){

    //Faz as atribuições dos argumentos do construtor para os atributos da classe

    this->modelo=newmodelo;
    this->marca=newmarca;
    this->ano=newano;
    this->preco=newpreco;
}

void Veiculos::setPreco(double newpreco) {

    // O atributo preço da classe recebe o argumento p da função
    this->preco=newpreco;
}
double Veiculos:: getPreco(){

    //retorna o atributo preço da classe
    return this->preco;
}
string Veiculos::getName() {
    return this->modelo;
}

