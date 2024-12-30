#include <iostream>

using namespace std;

int main(){
    int i=0,acc=0,num1=0;

    do{
        i++;
        cout << "Digite um numero: ";
        cin >> num1;
        acc = acc + num1;

    }while(i<2);

acc = acc/i;
cout << "Media: " << acc << "\n";
 return 0;
}