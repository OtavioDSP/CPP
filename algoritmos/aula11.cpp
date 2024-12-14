#include <iostream>
using namespace std;

int main(){

    int val; 
    // cout << "selecione uma cor: \n\n 1 - verde \n 2- vermelho \n amarelo";

    // cin >> val;
    // switch (val ){
    //     default:
    //         cout << "valor invalido";
    //     case 1: 
    //         cout << "verde";
    //         break;
    //     case 2: 
    //         cout << "vermelho";
    //         break;
    //     case 3: 
    //         cout << "Amarelo";
    //         break;
    // }

     cout << "selecione uma transporte: \n\n 1 -carro \n 2- moto \n 3 - aviao \n 4- helicoptero";

    cin >> val;


    switch (val ){
        default:
            cout << "valor invalido";
        case 1:
        case 2: 
            cout << "Terrestre";
            switch (val )
            {
            case 1:
                cout << "Carro";
                break;
            
            case 2:
                cout << "Carro";
                break;
            }
        break;

        case 3:
        case 4:
            cout << "aereo";
            switch (val){
            case 4:
                cout << "aviao";
                break;
            
            case 5:
                cout << "Helicoptero";
                break;
            }
        break;

    }









}