#include <iostream>

using namespace std;

int main(){
float num1, acc = 0;
int i, round;

    cout << "Insira a quantidade de alunos:  ";
    cin >> round;
        for (i = 1; i <= round; i++) {

            cout << "digite as notas";
            cin >> num1;
            acc += num1;
            
        }
    acc = acc/round;
    cout << "A media das notas e: " << acc << endl;



return 0;

}