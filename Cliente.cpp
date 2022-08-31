
#include "Cliente.h"

Cliente:: Cliente(string newnome,string newcpf,string newendereco,string newdataNascimento){
    this->nome=newnome;
    this->cpf=newcpf;
    this->endereco=newendereco;
    this->dataNascimento=newdataNascimento;
}


string Cliente:: getNome(){
    return this->nome;
}
void Cliente:: setNome(string newnome){
    this-> nome=newnome;
}
string  Cliente::getcpf(){
    return this-> cpf;
}
void Cliente:: setcpf(string newcpf){
    this->cpf=newcpf;
}
string Cliente::getendereco(){
    return this-> endereco;
}
void Cliente:: setendereco(string newendereco){
    this-> endereco=newendereco;
}
string Cliente::getdataNascimento(){
    return this-> dataNascimento;
}
void Cliente:: setdataNascimento( string newdataNascimento){
    this-> dataNascimento=newdataNascimento;
}
