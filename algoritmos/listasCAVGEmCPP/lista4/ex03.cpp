#include <iostream>

using namespace std;

int main(){
int i= 0, ent[6], menor;
    cout << "Insira um numero: ";
    cin >> ent[0];
    menor = ent[0];
    for(i=1; i<6; i++){
        cout << "Insira um numero: ";
        cin >> ent[i];
        cout << "O numero digitado foi: " << ent[i] << endl;
            if(ent[i] < menor){
                menor = ent[i];

            };

    }
    cout << "O menor numero digitado foi: " << menor << endl;


}