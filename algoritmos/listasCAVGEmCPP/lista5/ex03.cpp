#include <iostream>

using namespace std; 

int main(){
float media = 0,m[2][2];
int i = 0, j = 0; 
    for (i = 0; i< 2; i++){
        for (j = 0; j< 2; j++){

            cout << "Digite um numero para a matriz [" << i << "][" << i << "]: ";
            cin >> m[i][j];
            media = media + m[i][j];
        }

    }
    
    for ( i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cout << m[i][j] << " ";
        }
    }
    media = media / (i*j);
    cout << "\nMedia dos numeros da matriz: " << media;

return 0;
}