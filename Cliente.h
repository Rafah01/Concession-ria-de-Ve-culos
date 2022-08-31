

#include <iostream>
#include <string>


using namespace std;

class Cliente{

    private:
        //atributos
            string nome;
            string cpf;
            string endereco;
            string dataNascimento;
    public:
        //Construtor
            Cliente(string newnome,string newcpf,string newendereco,string newdataNascimento);


        //metodos
            string getNome();
            void setNome(string newnome);
            string getcpf();
            void setcpf(string newcpf);
            string getendereco();
            void setendereco(string newendereco);
            string getdataNascimento();
            void setdataNascimento(string newdataNascimento);
};

