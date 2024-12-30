#include <iostream>

using namespace std;

int main() {

    int i;
    float num1, num2;
    do{
        cout << "insira a base" ;
        cin >> num1;
        cout << "insira a altura" ;
        cin >> num2;
        cout << "A area do triangulo e: " <<(num1*num2)/2 ;
        i++;
    }while(i < 2);
    return 0;



}