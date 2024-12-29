
#include <iostream>
#include <fstream>

using namespace std;

int main (){
    int op = 0;
    float area, base, altura;
    bool flag = true;

    while(flag){
        cout << "Insira a base";
        cin >> base;
        cout << "Insira a altura";
        cin >> altura;
        area = (base * altura)/2;
        cout << "Area: " << area << "\n";
        cout << "Deseha calcular novamente?\n 1 - sim\n 2 - nao";
        cin >> op;
        if(op == 2){
            break;
        }
    }

    
    return 0;
}
