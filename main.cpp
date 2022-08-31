#include <iostream>
#include <string>
#include <fstream>
#include <array>
#include <locale>

//Inclusão das classes

//#include "Cliente.h"
#include "Veiculos.h"
#include "Moto.h"
#include "Carro.h"
#include "Pedido.h"

using namespace std;




//Função catálogo de carro, que mostrará os carros disponíveis na loja
void catalago_carros(string nome){
    //Criação das variáveis que receberão as linhas do arquivo txt;

    string modelo,marca,ano,preco,tipo;

    //Criação do objeto carro

    fstream carro(nome,ios::in);

    //Variável que receberá as linhas uma por uma

    string n;

    //Criação de um vetor de strings para receber os dados de n

    string caracteristicas[5];
    int contador=0;
    while(getline(carro,n)){
        //a cada iteração, o n é atribuido a uma posição do vetor características
        caracteristicas[contador]=n;
        contador++;
    }
    // Cada posição do vetor será atribuida a uma característica
    modelo=caracteristicas[0];
    marca=caracteristicas[1];
    ano=caracteristicas[2];
    preco=caracteristicas[3];
    tipo=caracteristicas[4];

    cout<<"\nModelo: "<<modelo<<"\nMarca: "<<marca<<"\nAno:"<<ano<<"\nPreco: "<<preco<<"\nTipo: "<<tipo<<endl;

    carro.close();
}
//Função catálogo de motos, que mostrará as motos disponíveis na loja

void catalago_motos(string nome){

    //Criação das variáveis que receberão as linhas do arquivo txt;

    string modelo,marca,ano,preco,cilindrada;

    //Criação do objeto moto

    fstream moto(nome,ios::in);

    //Variável que receberá as linhas uma por uma

    string n;

    //Criação de um vetor de strings para receber os dados de n

    string caracteristicas[5];
    int contador=0;
    while(getline(moto,n)){
        //a cada iteração, o n é atribuido a uma posição do vetor características
        caracteristicas[contador]=n;
        contador++;
    }
    // Cada posição do vetor será atribuida a uma característica
    modelo=caracteristicas[0];
    marca=caracteristicas[1];
    ano=caracteristicas[2];
    preco=caracteristicas[3];
    cilindrada=caracteristicas[4];

    cout<<"\nModelo: "<<modelo<<"\nMarca: "<<marca<<"\nAno:"<<ano<<"\nPreco: "<<preco<<"\nCilindradas: "<<cilindrada<<endl;

    moto.close();
}
//Função que decidirá se o cliente escolheu carro ou moto

void decisao(int n){

    //Switch para decidir entre carro ou moto

    switch (n) {

        //1 equivale  a carros
        case 1:{
            //criação de vetor com os modelos de carros disponíveis na loja

            string carros[]={"Civic.txt","Corolla.txt","Gol.txt","Kwid.txt","L200.txt","Hilux.txt","Challenger.txt","Mustang.txt"};

            // método para pegar o números de carros no vetor e jogar na varíavel tam, que signigica tamanho

            int tam=sizeof(carros)/sizeof(carros[0]);

            //Mostrando todos os carros ao cliente

            for(int a=0;a<tam;a++){

                //A cada iteração, um carro do vetor modelos será colocada na função catalogo_carro para exibi-lo ao cliente
                cout<<"\n"<<a+1<<"º Carro\n";
                catalago_carros(carros[a]);
                cout<<"______________________________________";
            }


            break;
        }
            //2 equivale a motos
        case 2:{

            //criação de vetor com os modelos de motos disponíveis na loja

            string motos[]={"Titan.txt","XRE.txt","fan.txt"};

            // método para pegar o números de motos no vetor e jogar na varíavel tam, que significa tamanho

            int tam=sizeof(motos)/sizeof(motos[0]);

            //Mostrando todas as motos ao cliente

            for(int a=0;a<tam;a++){

                //A cada iteração, uma moto do vetor modelos será colocada na função catalogo_motos para exibi-lo ao cliente
                cout<<"\n\n"<<a+1<<"º Moto\n\n";
                catalago_motos(motos[a]);
            }

            break;
        }
        default:{
            cout<<"Insira os números corretos!"<<endl;
            break;
        }
    }
}
//Função criará obejtos do tipo carro e os retornará

//Função que criará uma moto
Moto cria_moto(int moto){

    string caracteristicas[5],at;
    string motos[]={"Titan.txt","XRE.txt","fan.txt"};

    //Leitura do arquivo
    fstream m(motos[moto-1],ios::in);
    int cont=0;

    //pegando atributos do arquivo

    while(getline(m,at)){
        caracteristicas[cont]=at;
        cont++;
    }
    //função stod converte string em double, a posição 3 do vetor está o preço do veículo em string,é preciso convertê-lo para double

    double preco= 1000*stod(caracteristicas[3]);

    //instanciando o objeto moto e atribuindo-lhe os atributos ao seu construtor
    Moto m1=Moto(caracteristicas[0],caracteristicas[0],caracteristicas[0],preco,caracteristicas[0]);

    return m1;
}

//Função que cria um carro

Carro cria_carro(int carro){

    string caracteristicas[5],at;
    string carros[]={"Civic.txt","Corolla.txt","Gol.txt","Kwid.txt","L200.txt","Hilux.txt","Challenger.txt","Mustang.txt"};

    //Leitura do arquivo
    fstream c(carros[carro-1],ios::in);
    int cont=0;

    //pegando atributos do arquivo

    while(getline(c,at)){
        caracteristicas[cont]=at;
        cont++;
    }
    //função stod converte string em double, a posição 3 do vetor está o preço do veículo em string,é preciso convertê-lo para double

    double preco= 1000*stod(caracteristicas[3]);

    //instanciando o objeto carro e atribuindo-lhe os atributos ao seu construtor
    Carro c1=Carro(caracteristicas[0],caracteristicas[0],caracteristicas[0],preco,caracteristicas[0]);

    return c1;

}

void cria_arquivotxt(Carro *listaCarros,Moto *listaMotos, Pedido pedido){




}
// Main Para Executar o Codigo

int main() {
    setlocale(LC_ALL,"");

    cout<<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+"<<endl;
    cout<<"|                            CONCESSIONÁRIA RLT                       |"<<endl;
    cout<<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+"<<endl;
    cout<<"|                            CADASTRO DO CLIENTE                      |"<<endl;
    cout<<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+"<<endl;
    // Inserção de dados do cliente

    string name,cpf,endereco,dataDeNascimento;
    cout<<"Ola, seja bem vindo(a). Por favor, informe-nos as seguinte informações."<<endl;
    cout<<"Nome: ";
    cin>>name;

    cout<<"CPF (apenas os digitos): ";
    cin>>cpf;

    cout<<"Endereço: ";
    cin>>endereco;

    cout<<"Data de Nascimento(dd/mm/aaaa).";
    cin>>dataDeNascimento;

    //Instaciar o objeto cliente, o construtor já carrega os dados

    Cliente cliente=Cliente(name,cpf,endereco,dataDeNascimento);

    //dec: variável de decisão para escolha de veículos
    //a: Variável de decisão para repetição de compra

    int dec,veiculo,a;



    //Criação de um vetor estático de motos que o cliente comprar

    Moto listaMotos[]={Moto("","","",0.0,""),Moto("","","",0.0,"")};

    //Criação de um vetor dinâmico de motos que o cliente comprar

    Moto *listaMotosd[1]={new Moto("","","",0.0,"")};

    //Criação de um vetor estático de carros que o cliente comprar

    Carro listaCarros[]= {Carro("", "", "", 0.0, ""),Carro("", "", "", 0.0, "")
    };

    //Criação de um vetor dinâmico de carros que o cliente comprar

    Carro *listaCarrosd[1]={new Carro("","","",0.0,"")};

    //indexador de posição para motos

    int im=0;

    //Indexador de posição para carros

    int ic=0;
    //Variável de suporte para escolhas de veículos, se o cliente comprar algo vai para uma condição, se não comprar anda , entra em outra condição

    int continua=0;

    while(1) {
        cout<<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+"<<endl;
        cout<<"|                            CATALOGO DE VEICULOS                      |"<<endl;
        cout<<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+"<<endl;
        cout <<"\n"<< cliente.getNome() << ", indique-nos o que deseja.\n1. Carro. \n2. Motos.\n\nDigite Sua Opção:" << endl;

        cin >> dec;

        //Chama a função decisão para a partir dela exeibir os carros ou motos

        decisao(dec);


        //Escolha do produto pelo cliente

        switch (dec) {

            //1 indica que o cliente quer carro
            case 1: {
                cout << "\n\nDecidiu qual veiculo vai levar?. \n\n>>> Sim, Digite o numero do veiculo do catálogo.\n>>> Se não quis nenhum, Digite 0.\n\nDigite Sua Opção:\" " << endl;
                cin >> veiculo;
                if(veiculo!=0) {
                    cout << "----------------------------------------------------------------" << endl;
                    cout << "\n>>> O veiculo que voce escolheu custa: R$ ";

                    //o objeto carro1 da classe carro recebe como retorno um obejto do tipo carro da função cria_carro

                    Carro carro1 = cria_carro(veiculo);

                    //Adiciona a escolha de veículo à uma lista de carros

                    listaCarros[ic] = carro1;

                    //Adiciona a escolha de veículo à uma lista dinâmica de carros

                    listaCarrosd[ic] = &carro1;
                    ic++;
                    continua++;

                    cout << carro1.getPreco() << " Reais" << endl;
                }
                else{
                    cout<<"\nQue pena!"<<endl;

                }
                break;
            }

                //2 indica que o cliente quer moto

            case 2: {

                cout << "\n\nDecidiu qual veiculo vai levar?. \n\n>>> Sim, digite o numero do veiculo do catalogo.\n>>> Se não quis nenhuma, Digite 0.\\n\\nDigite Sua Opção:\" " << endl;
                cin >> veiculo;
                if(veiculo!=0) {
                    cout << "------------------------------------------------------------------" << endl;
                    cout << "\n>>>O veiculo que voce escolheu custa: R$ ";

                    //o objeto moto1 da classe moto recebe como retorno um objeto do tipo moto da função cria_moto
                    Moto moto1 = cria_moto(veiculo);

                    //Adiciona a escolha de veículo à uma lista de motos

                    listaMotos[im] = moto1;

                    //Adiciona a escolha de veículo à uma lista dinâmica de motos

                    listaMotosd[im] = &moto1;
                    im++;
                    continua++;
                    cout << moto1.getPreco() << " Reais" << endl;
                }
                else{
                    cout<<"\nQue pena!"<<endl;
                }
                break;
            }

            default: {

                cout << "\nColoque um número válido" << endl;

                break;
            }
        }



        cout << "\nDeseja comprar outro veiculo ?\n1. Sim.\n0. Não.\n\nDigite Sua Opção: " << endl;
        cin >> a;

        if (a == 0) {

            break;
        }
        else {
            // O cliente comprou o que quis e desejar ir adiante, então continua vai receber mais "1", pois iterará a ação.

            continue;
        }


    }

    // continua estiver zerado, não comprou nada

    if(continua>0) {
        //Se houver iterações nos indexadores ic e im, indica que houve escolhas, assim há produtos para mostrar
        int k = 0;


        //tc=TAMANHO DE LISTA DE CARROS
        int tc = sizeof(listaCarrosd) / sizeof(listaCarrosd[0]);

        //tm=TAMANHO DE LISTA DE motos

        int tm = sizeof(listaMotosd) / sizeof(listaMotosd[0]);


        //Instaciação do objeto pedido para colar os dados do cliente e o(s) veículo(s) adquiridos por ele
        Pedido pedido = Pedido();

        //adicionando dados do cliente no objeto pedido
        pedido.inserir_cliente(cliente);

        //adicionando as motos e os carros no pedido

        int g = 0;

        // para carros

        for (g; g < tc; g++) {
            pedido.createCarro(*listaCarrosd[g]);
        }
        int f = 0;

        // para motos

        for (f; f < tm; f++) {
            pedido.createMoto(*listaMotosd[f]);
        }


        //Mostrar as compras do cliente
        cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << endl;
        cout << "|                            VEICULOS COMPRADOS                        |" << endl;
        cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << endl;

        if (ic > 0 || im > 0) {

            if (ic > 0 && im > 0) {


                //mostra as motos do vetor dinâmico listaMotosd

                pedido.readMoto();

                //mostra as motos do vetor estático litaMotos

                /*for(k;k<tm;k++){

                    cout<<"\nMoto"<<k+1<<": "<<listaMotos[k].getName()<<"\nPreco: "<<listaMotos[k].getPreco()<<" reais."<<endl;


                }
                */
                k = 0;

                //mostra os carros do vetor dinâmico listaCarrosd

                pedido.readCarro();

                //mostra os carros do vetor estático litaCarros
                /*
                for(k;k<tc;k++){

                    cout<<"\nCarro"<<k+1<<": "<<listaCarros[k].getName()<<"\nPreco: "<<listaCarros[k].getPreco()<<" reais."<<endl;

                }*/
            } else if (im > 0) {

                //mostra as motos do vetor dinâmico listaMotosd

                pedido.readMoto();

                //mostra as motos do vetor estático litaMotos

                /*for(k;k<tm;k++){

                    cout<<"\nMoto"<<k+1<<": "<<listaMotos[k].getName()<<"\nPreco: "<<listaMotos[k].getPreco()<<" reais."<<endl;


                }*/

            } else {

                //mostra os carros do vetor dinâmico listaCarrosd

                pedido.readCarro();

                //mostra os carros do vetor estático litaCarros
                /*
                for(k;k<tc;k++){

                    cout<<"\nCarro"<<k+1<<": "<<listaCarros[k].getName()<<"\nPreco: "<<listaCarros[k].getPreco()<<" reais."<<endl;

                }*/

            }

            int cta;
            cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << endl;
            cout << "|                            DADOS DO PEDIDO                           |" << endl;
            cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << endl;
            cout << "\nComo Deseja Ver os Dados da Sua Compra?" << endl;
            cout << "\n1. Ver na Tela." << endl;
            cout << "2. Gerar TXT." << endl;
            cin >> cta;


            //Printa na tela se cta for igual a 1

            if (cta == 1) {
                cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << endl;
                cout << "|                            DADOS DO ClIENTE                          |" << endl;
                cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << endl;
                cout << "\nNome Do Cliente: " << cliente.getNome() << endl;
                cout << "CPF: " << cliente.getcpf() << endl;
                cout << "Endereco: " << cliente.getendereco() << endl;
                cout << "Data de Nascimento: " << cliente.getdataNascimento() << endl;
                cout << "\n=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << endl;
                cout << "|                            DADOS DA COMPRA                           |" << endl;
                cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << endl;
                if (im > 0 && ic > 0) {
                    cout << "Motos Compradas: " << listaMotos[0].getName() << "\n" << listaMotos[1].getName() << endl;
                    cout << "Carros Comprados: " << listaCarros[0].getName() << "\n" << listaCarros[1].getName() << endl;
                } else if (im > 0) {
                    cout << "Motos Compradas: " << listaMotos[0].getName() << "\n" << listaMotos[1].getName() << endl;
                } else if (ic > 0) {
                    cout << "Carros Comprados: " << listaCarros[0].getName() << "\n" << listaCarros[1].getName() << endl;
                } else {
                    cout << "Nenhum veículo comprado." << endl;
                }
            }

                //gera um arquivo txt, se cta for igual a 2
            else if (cta == 2) {


            }
            else {

                cout << "Informe um número válido, cujo digito foi mostrado anteriormente" << endl;

            }
        } else {

            cout << "Nenhum veículo foi comprado. Obrigado. Até mais!" << endl;

        }

        //Soma total dos prços da compra

        /*double total= (listaMotos[0].getPreco()+listaMotos[1].getPreco()+listaCarros[0].getPreco()+listaCarros[1].getPreco());
        cout<<"Valor total: "<<total<<" reais."<<endl;*/
        //sistema de exclusão de dados da memória

        //delete[] *listaCarrosd;
        //delete[] *listaMotosd;
    }
    else{
        cout<<"Que pena! Porém o aguardamos para uma próxima compra!"<<endl;

    }

    return 0;
}