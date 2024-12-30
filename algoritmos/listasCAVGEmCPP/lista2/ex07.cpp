#include <iostream>

using namespace std;

int main(){
    // int i=0, num=0, menor = 0;
    //     cout << "Insira o numero: ";
    //     cin >> num;
    //     menor = num;
    //     do{
    //         cout << "Insira o numero: ";
    //         cin >> num;
    //         if (num< menor) {
    //             menor = num;
    //         }


    //         i++;
    //     }while(i<2);
    // cout<< menor;



     int i=0, num=0, maior = 0;
        cout << "Insira o numero: ";
        cin >> num;
        maior = num;
        do{
            cout << "Insira o numero: ";
            cin >> num;
            if (num > maior) {
                maior = num;
            }


            i++;
        }while(i<2);
    cout<< maior;

    return 0;
}