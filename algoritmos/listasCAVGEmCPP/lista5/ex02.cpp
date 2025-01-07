#include <iostream>

using namespace std;
int main(){
int i = 0, j = 0, m[6][6], soma = 0;
    for (i = 0; i < 6; i++){
        for(j = 0; j  <6; j++){
            cout << "Digite um numero para a matriz [" << i << "][" << j << "]: ";
            cin >> m[i][j];
            soma = soma + m[i][j];

        }


    }
    for (i = 0; i< 6; i++){
        for (j = 0; j < 6; j++){
            cout << m[i][j] << " ";
    
    
        }
        cout << endl;
    }
cout << "soma:" << soma;
return 0;
}