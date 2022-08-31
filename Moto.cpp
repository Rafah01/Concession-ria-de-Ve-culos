//
// Created by  Rafael Augusto on 15/08/2022.
//

#include "Moto.h"


Moto::Moto(string newmodelo,string newmarca,string newano,double newpreco,string newcilindrada): Veiculos(newmodelo,newmarca,newano,newpreco){
    //Faz as atribuições dos argumentos do construtor para os atributos da classe

    this->modelo=newmodelo;
    this->marca=newmarca;
    this->ano=newano;
    this->preco=newpreco;
    this->cilindrada=newcilindrada;

}

void Moto:: setPreco(double newpreco) {
    this->preco=newpreco;
}
double Moto:: getPreco(){
    return this->preco;

}
