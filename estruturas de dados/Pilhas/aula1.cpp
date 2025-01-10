#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <string> cartas;
    if(cartas.empty()){
        cout 


    }
    cartas.push("Coringa");
    cartas.push("Rainha de Copas");
    cartas.push("Ás de paus");
    cartas.push("rei de copas");

    cout << "tamanho da pilha " << cartas.size() << "\n";

    cartas.pop();

    cout << "tamanho da pilha " << cartas.size() << "\n";




return 0;
}