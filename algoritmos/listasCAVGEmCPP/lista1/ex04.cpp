#include <iostream>
#include <fstream>

using namespace std;

int main (){
    bool flag = true;
    int idade = 0, count = 0, i = 0;

    while(flag){

        cout << "Insira a idade: ";
        cin >> idade;


        count = count + idade;


        i++;


        cout << "idade total: " << count << "\n";
        cout << "Deseja inserir mais uma idade?\n 0 - nao \n 1 - sim";
        cin >> idade;
        if(idade == 0){
            cout << "media: " << count/i;
            break;
        } 

    }

    return 0;
}