#include <iostream>

using namespace std;

int main(){
    int num1 = 0, num2 = 0;
    cout << "Digite um numero: ";
    cin >> num1;
    cout << "Digite outro numero: ";
    cin >> num2;
        do{
            cout << "valor igual a 0, insira novamente.";
            cin >> num2;    
        }while(num2 == 0);
    cout << "resultado" << num1/num2;
    return 0;
}