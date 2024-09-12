#include <iostream>
using namespace std;

class Pessoa{
    private:
    string nome;
    string sobrenome;
    long cpf;
    public:
        Pessoa(){}

        Pessoa(string nome, string sobrenome, long cpf):
        nome{nome},sobrenome{sobrenome}
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
};