#include <iostream>
using namespace std;
void fatorial(int acc, int j=1);

int main() {
    int acc;
    cout << "Digite o fim da sequência: ";
    cin >> acc;
    fatorial(acc); 


return 0;
}

void fatorial(int acc, int j) {
    // 10 = 9*8
    // *7*6*5*4*3*2*1/0
    if(acc == 1){
        
        cout << j;
        return;
        
    }
     fatorial(acc - 1 , acc * j);

}