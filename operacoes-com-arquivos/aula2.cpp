#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
    fstream arquivo;
    string linha, nome;
    char opc = 's';

    arquivo.open("teste1.txt", ios::out | ios::app); ;

    while((opc == 's')or(opc =='S')){
        cout  << "digite um nome";
        cin >> nome;
        arquivo << nome << endl;
        cout << "deseja continuar? (s/n)";
        cin >> opc;
        system("CLS");
    };

    arquivo.close();
    arquivo.open("teste1.txt", ios::in);
    cout << "Nomes gravados em teste.txt:" << endl;
    if(arquivo.is_open()){
        while(getline(arquivo,linha)){
            cout << linha << endl;
        }
        arquivo.close();
    }else{

        cout << "Erro ao abrir o arquivo" << endl;
    }
return 0;

}