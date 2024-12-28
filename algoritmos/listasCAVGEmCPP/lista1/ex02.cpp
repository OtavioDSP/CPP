#include <iostream>
#include <fstream>

using namespace std;
int main(){
    int i = 0, menor=0, valor=0;


    cout << "insira um numero: \n";
    cin >> valor;
    menor = valor;


    while(i<9){

        cout << "insira outro numero: ";
        cin >> valor;
        cout << "valor: " << valor << "\n";

        if(valor < menor ){

            menor = valor;

        }
        cout << "menor: " << menor;

        i++;
    }





    return 0;
}