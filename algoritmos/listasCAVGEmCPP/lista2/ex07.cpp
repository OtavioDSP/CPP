#include <iostream>

using namespace std;

int main(){
    int i=0, num=0, menor = 0;
        cout << "Insira o numero: ";
        cin >> num;
        menor = num;
        do{
            cout << "Insira o numero: ";
            cin >> num;
            if (num< menor) {
                menor = num;
            }


            i++;
        }while(i<2);
    cout<< menor;

    return 0;
}