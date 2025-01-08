#include <iostream>

using namespace std;

void texto();
void soma(int n1,int n2);
int soma2(int n1,int n2);
void tr(string tra[4]);

int main() {
    int res;
    string transp[4] = {"carro","moto","barco", "aviao"};
        
        texto();
        soma(5, 10);
        res=soma2(560,7672);
        cout << "Soma = " << res;
        tr(transp);

return 0;
}

int soma2(int n1,int n2){
    return n1+n2;



}
void tr(string tra[4]){

    for (int i = 0; i < 4; i++)
    {
        cout << tra[i] << endl;
    }
} 

void soma( int n1, int n2){
    cout << n1 << " + " << n2 << " = " << n1+n2;


}

void texto (){
    for (int i = 0; i < 10; i++)
    {
        cout << "Hello World" << endl;
    }



}