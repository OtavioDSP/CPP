#include <iostream>

#include <fstream>

using namespace std;

int main (){
    float numeroUm, count = 0 , numeroDois, div; 
        count++;
        cout << "Insira um numero\n"; 
        cin >> numeroUm;
        cout << numeroUm;
        cout << "\nInsira o segundo numero";
        cin >> numeroDois;
        if(numeroDois == 0){
            while(numeroDois == 0) {
                cout << "o segundo numero precisa ser diferente de 0: \n";
                cin >> numeroDois;
            }
        }
        div = numeroUm / numeroDois;
        cout << div;
    

/*
    1 - dividir os numeros
    2 - pegar 

*/

return 0;
}