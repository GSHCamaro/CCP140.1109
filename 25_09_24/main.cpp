#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

void escreveArquivo(string name, string texto){
    fstream arquivo;
    arquivo.open(name, ios::app);
    if(arquivo.is_open()){
        arquivo << texto << endl;
        arquivo.close();
    }   else{
        cout<< "Erro na abertura do arquivo\n";
    }
}

void leArquivo(string nome){
    fstream arquivo;
    arquivo.open(nome, ios::in);
    string texto;
    if(arquivo.is_open()){
        while(getline(arquivo, texto))
            cout << texto << endl;
        arquivo.close();
    }   else{
        cout<< "Erro na abertura do arquivo\n";
    }
}

int main(){
    string nome, texto;
    cout << "Entre com o nome do arquivo: ";
    cin >> nome;

    cout << "Entre com o texto: ";
    //cin >> texto;             //cin ignora /\n
    cin.ignore(INT_MAX, '\n');
    getline(cin, texto);            //getline não ignora /\n

    escreveArquivo(nome, texto);
    leArquivo(nome);
}