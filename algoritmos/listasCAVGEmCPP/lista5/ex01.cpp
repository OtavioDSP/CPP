#include <iostream>

using namespace std;


int main(){

int i = 0, j = 0, m[3][4];
    for (i = 0; i< 3; i++){
        for(j = 0; j< 4; j++){
            m[i][j] = i*j;

        }
    }
    
    cout << "Resultado final: " << endl;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 4; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

return 0;
}