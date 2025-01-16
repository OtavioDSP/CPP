
#include <iostream>

using namespace std;
void somar(float *var, float valor);
void iniVetor(float *v);
int main(){

    /*string veiculo = "carro";
    string *pv;

    pv = &veiculo;

    cout << pv << endl;
    cout << &veiculo<< endl;

    *pv = "moto";
    cout << *pv << endl;
    */ 


   /*int *p, a[10];
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
    */ 

    float num = 0, vetor[10];

    somar(&num,15);
    cout << num << endl;
    iniVetor(vetor);
    for (int i = 0; i < 5; ++i){

        cout << vetor[i] << endl;
    }













    return 0;


}
void somar(float *var, float valor){

    *var += valor;


}
void iniVetor(float *v){

    for(int i = 0; i < 5; ++i){
        v[i]=0;

    }



}