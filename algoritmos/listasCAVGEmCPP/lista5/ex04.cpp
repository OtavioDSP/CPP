#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int i =0, j = 0, m[5][4], menor = 99, maior = 0, random, seed = time(0);
    srand(seed);
    for (i = 0; i < 5; i++){
        for (j = 0; j < 4; j++){
            random = rand() % 100;
            m[i][j] = random;
            if (m[i][j] < menor){
                menor = m[i][j];
            }
            if (m[i][j] > maior){
                maior = m[i][j];
            }
            
        }
    }
    for (i = 0; i < 5; i++){
        for (j = 0; j < 4; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Menor numero da matriz: " << menor << endl;
    cout << "Menor numero da matriz: " << maior << endl;

return 0;
}