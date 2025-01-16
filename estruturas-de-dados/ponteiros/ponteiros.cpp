#include <iostream>

using namespace std;

int main(){
    string veiculo = "carro";
    string *pv;

    pv = &veiculo;

    cout << pv << endl;
    cout << &veiculo<< endl;

    *pv = "moto";
    cout << *pv << endl;


    return 0;
}