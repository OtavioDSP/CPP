#include <iostream>
using namespace std;
void contador(int num, int cont = 0);

int main(){
    int num;
    cout << "Digite um número: ";
    cin >> num;
    contador(num);

    return 0;
}

// void contador(int num){
//     for (int i=0; i<num; i++){
//         cout << i << endl;
//     }


// }
void contador(int num, int cont){
    cout << cont << endl;
    if (cont < num){
        contador(num,++cont);
    }
    
}

