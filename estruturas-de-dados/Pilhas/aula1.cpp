#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <string> cartas;
    
    cartas.push("Coringa");
    cartas.push("Rainha de Copas");
    cartas.push("Ás de paus");
    cartas.push("rei de copas");
    if(cartas.empty()){
        cout << "Sem cartas";


    }else{
        cout << "Com cartas";
        while(!cartas.empty()){
            cartas.pop();

        }
    }

    cout << "tamanho da pilha " << cartas.size() << "\n";

    cartas.pop();

    cout << "tamanho da pilha " << cartas.size() << "\n";




return 0;
}