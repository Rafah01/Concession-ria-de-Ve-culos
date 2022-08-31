//
// Created by  Rafael Augusto on 15/08/2022.
//

#include "Pedido.h"
//Impelmentação do construtor

Pedido::Pedido() {

}
/*Pedido::  Pedido(Carro *newlistaCarro,Moto *newlistaMoto,Cliente newcliente,double newvalorTotal,int newmpagamento){
    this->listaCarro=newlistaCarro;
    this->listaMotos=newlistaMoto;
    this->cliente=newcliente;
    this->valorTotal=newvalorTotal;
    this->metodoDePagamento=newmpagamento;

}*/

//Implementação dos métodos CRUD(CREATE,READ,UPDATE AND DELETE) de carros

void Pedido:: createCarro(Carro c){

    //última posição do vetor dinâmico
    int tam=(sizeof(this->listaCarros)/sizeof(this->listaCarros[0]) )-1;

    this->listaCarros[tam]=&c;

}

void Pedido:: readCarro(){
    int tam=(sizeof(this->listaCarros)/sizeof(this->listaCarros[0]) );

    cout<<"Modelo do(s) carro(s) escolhido(s): "<<endl;
    for(int a=0;a<tam;a++){
        cout<<listaCarros[a]->getName()<<endl;

    }
}
void Pedido:: updateCarro(Carro newC){

    //última posição do vetor dinâmico
    int tam=(sizeof(this->listaCarros)/sizeof(this->listaCarros[0]) )-1;

    this->listaCarros[tam]=&newC;

}
void Pedido:: deleteCarro(int num){
    delete [] this->listaCarros[num];
}




//Criação dos métodos CRUD(CREATE,READ,UPDATE AND DELETE) de motos

void Pedido:: createMoto(Moto m){
    //última posição do vetor dinâmico
    int tam=(sizeof(this->listaMotos)/sizeof(this->listaMotos[0]) )-1;

    this->listaMotos[tam]=&m;
}
void Pedido:: readMoto(){

    int tam=(sizeof(this->listaMotos)/sizeof(this->listaMotos[0]) );

    cout<<"Modelo da(s) moto(s) escolhida(s): "<<endl;
    for(int a=0;a<tam;a++){
        cout<<listaMotos[a]->getName()<<endl;

    }

}

void Pedido::  updateMoto(Moto newM){
    //última posição do vetor dinâmico
    int tam=(sizeof(this->listaMotos)/sizeof(this->listaMotos[0]) )-1;

    this->listaMotos[tam]=&newM;

}
void Pedido:: deleteMoto(int num){
    delete [] listaMotos[num];
}

//Outros métodos

void Pedido:: inserir_cliente(Cliente c){

    this->cliente=c;
}

double Pedido:: calculaValor(double valorT, int pagamento){
    if(pagamento!=0){
        this->valorTotal= valorT+(valorT*0.2);
    }
    else{
        this->valorTotal=valorT-(valorT*0.01);
    }
}


void Pedido::  imprimirDados(){
    cout<<"Nome: "<<cliente.getNome()<<endl;
    cout<<"CPF: "<<cliente.getcpf()<<endl;
    cout<<"Valor total da compra: "<<this->valorTotal<<endl;


}