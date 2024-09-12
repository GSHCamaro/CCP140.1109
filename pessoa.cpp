#include <iostream>
#include "data.cpp"
#include "endereco.cpp"
using namespace std;

class Pessoa{
    private:
    string nome;
    string sobrenome;
    long cpf;
    Data nascimento;
    Endereco endereco;

    public:
        Pessoa(string nome, string sobrenome, long cpf, int dia, int mes, int ano, Endereco endereco):
        nome{nome},sobrenome{sobrenome}, nascimento(dia, mes, ano), endereco(endereco)
        {
            this->cpf = cpf;
        }

        void setNome(string nome,string sobrenome){
            this->nome = nome;
            this->sobrenome = sobrenome;
        }
        void setNome(string nome){
            this->nome = nome;
        }
        void setSobrenome(string sobrenome){
            this->sobrenome = sobrenome;
        }
        void setCpf(long cpf){
            this->cpf = cpf;
        }
        string getSobrenome(){
            return sobrenome;
        }
        string getNome(){
            return this->nome;
    }
        long getCpf(){
            return cpf;
    }
        string getNascimento(){
            return this->nascimento.getData();
        }
        string getEndereco(){
            return this->endereco.getEndereco();
        }
};