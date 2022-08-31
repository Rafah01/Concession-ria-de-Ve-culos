//
// Created by Rafael Augusto  on 15/08/2022.
//

#ifndef PROJETO_POO_PEDIDO_H
#define PROJETO_POO_PEDIDO_H

#include <iostream>
#include <string>
#include "Carro.h"
#include "Moto.h"
#include "Cliente.h"

using namespace std;
class Pedido {

private:
    /*Criação dos vetores dinâmicos do tipo carro e moto.
    não se sabe quantos veículos o cliente levará, logo uma alternativa
    será utilizar alocação dinâmica, assim o vetor cresce conforme a demanda.
*/
    Carro *listaCarros[1]= {new Carro("","","",0.0,"")};
    Moto *listaMotos[1]= {new Moto("","","",0.0,"")};

    Cliente cliente= Cliente("","","","");
    double valorTotal=0;

    //O método de pagamento define a forma de pagamento, 0 equivale a pagamento à vista e
    // 1 equivale a pagamento à prazo

    int metodoDePagamento=0;

public:
    //Criação do construtor

    Pedido();
    // Pedido(Carro *listaCarro,Moto*listaMoto,Cliente cliente,double valorTotal,int mpagamento);

    //Criação dos métodos CRUD(CREATE,READ,UPDATE AND DELETE) de carros

    void createCarro(Carro c);
    void readCarro();
    void updateCarro(Carro newC);
    void deleteCarro(int num);

    //Criação dos métodos CRUD(CREATE,READ,UPDATE AND DELETE) de motos

    void createMoto(Moto m);
    void  readMoto();
    void updateMoto(Moto newM);
    void deleteMoto(int num);

    //Outros métodos
    void inserir_cliente(Cliente c);
    double calculaValor(double valorT, int pagamento);
    void imprimirDados();

};


#endif //PROJETO_POO_PEDIDO_H

