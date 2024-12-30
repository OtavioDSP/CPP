#include <iostream>

using namespace std;

int main (){
    int i, number, acc;
    for (i = 1; i <=2; i++){
        cout << "digite um valor";
        cin >> number;
        acc = acc +  number;

    }
    acc = acc/i;
    cout << "total: " << acc;



}
