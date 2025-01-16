#include <iostream>

using namespace std;

int main(){
    // string veiculo = "carro";
    // string *pv;

    // pv = &veiculo;

    // cout << pv << endl;
    // cout << &veiculo<< endl;

    // *pv = "moto";
    // cout << *pv << endl;
    int *p, a[10];
    p = &a[0];
    // cout << p << endl;
    *p = 10;
    cout << a[0] << endl;
    *(++p);
    *p =20;
    cout << a[1] << endl;
    *(++p);
    *p =30;
    cout << a[2] << endl;










    return 0;


}