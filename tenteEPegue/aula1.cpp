#include <iostream>
// #include <vector>
// #include <stdexcept>
using namespace std; 
double divide(double, double);
int main(){
    // vector <int>num(5);
    double n1,n2;

    cout << "Digite dois numeros: ";
    cin >> n1 >> n2;
    try{ 
        cout << divide(n1,n2) << endl;
    }
    catch(const char* e){
        cout << "Erro: " << e << endl;
    }
    


return 0;
}

double divide(double n1, double n2){
    
    if(n2 == 0){
        throw "erro de divisao por 0";

    }
    return n1/n2;
};