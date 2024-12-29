#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int produtosQtd = 0, i = 0, op = 0;
    float preco= 0.0f, precoTotal = 0.0f;
    bool flag = true;
    cout << "Digite a quantidade de produtos: ";
    cin >> produtosQtd;

    while(flag){

        cout << "Insira o valor: ";

        cin >> preco;

        precoTotal = precoTotal + preco;

    
        i++;

        if(i == produtosQtd ){

            cout << "Deseja continuar? \n1 - S\n2 - N\n";
            cin >> op;
            if(op == 2){
                break;

            }

        }

    }

    preco = precoTotal/produtosQtd;

    cout << "Total: " << preco << "\n";

    return 0;
}