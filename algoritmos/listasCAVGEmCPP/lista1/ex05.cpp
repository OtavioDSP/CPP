#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int qtdFunc = 0, i;
    float salario = 0, mediaSal = 0;
    cout << "Insira a quantidade de funcionarios: ";
    cin >> qtdFunc;
    while(i < qtdFunc){
        cout << "insira o salario";
        cin >> salario;
        mediaSal = mediaSal + salario;
        i++;
    }
    mediaSal = mediaSal / qtdFunc;
    cout << "media salarial: " << mediaSal;

    return 0;

}