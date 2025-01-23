#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
    fstream arquivo;
    string linha, nome;
    char opc = 's';

    arquivo.open("teste1.txt", ios::out);

    while((opc == 's')or(opc =='S')){
        cout  << "digite um nome";
        cin >> nome;
        arquivo << nome << endl;
        cout << "deseja continuar? (s/n)";
        cin >> opc;
        system("CLS");
    };

    arquivo.close();
return 0;
}