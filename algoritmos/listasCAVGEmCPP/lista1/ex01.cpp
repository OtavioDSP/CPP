#include <iostream>

#include <fstream>

using namespace std;

int main (){
    int numero; 
    cout << "Insira um numero"; 
    cin >> numero;
    if(numero < 0 ){
        cout << "numeros negativos nao tem raiz." ;
    }else {
        for (int i = 0;  i <= numero; i++){
            cout << i;
            ++i;

            
        }


    } 
/*
    1 - dividir os numeros
    2 - pegar 

*/


return 0;
}