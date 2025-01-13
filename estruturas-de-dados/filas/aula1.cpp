#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue <string> cartas;
    cartas.push("As de ouros");
    cartas.push("2 de ouros");
    cartas.push("3 de ouros");
    cartas.push("4 de ouros");
    cout << "tamanho da fila: "  << cartas.size() << endl;
    cout << "Carta na frente: " << cartas.front() << endl;
    cout << "Carta atras: " << cartas.back() << endl;

        while (!cartas.empty()){
            cout << "Carta: " << cartas.front() << endl;
            cartas.pop();
        }
        

    return 0;
}