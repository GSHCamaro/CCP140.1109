#include <iostream>
using namespace std;

class Pessoa{
    private:
    string nome;
    string sobrenome;
    long cpf;
    public:
        Pessoa(){}

        Pessoa(string nome, string sobrenome, long cpf){
            this->
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