#include <iostream>
using namespace std;

/*
res = next + start 
start = 0 
next = 1
//
s = 0 + n = 1 = 1/ 

*/
void fibonacci(int end, int start = 0, int next = 1) {
    // Imprime o valor atual da sequência
    cout << start << " ";
    
    // Condição de parada: a recursão deve continuar até atingir o 'end'
    if (end > 1) {
        // A recursão vai continuar com 'next' se tornando o novo 'start' e a soma de 'start' e 'next' se tornando o próximo 'next'
        fibonacci(end - 1, next, start + next);
    }
}

int main() {
    int end;
    cout << "Digite o fim da sequência: ";
    cin >> end;
    fibonacci(end);  // Chama a função fibonacci para gerar a sequência

    return 0;
}
