#include <iostream>

#include <fstream>

using namespace std;

int main(){

    bool flag;
    char palavra[] = "carro", chute[6] = {'_','_','_','_','_','\0'};
    int palavraTam = sizeof(palavra);
    

    
    

    for (int i = 0; i < palavraTam - 1; i++){
        cout << "dica: anda na terra";
        cout << "\nInsira uma letra:"; 
        cin >> chute[i];

        

        do{ 
            flag = true;
            if (chute[i] != palavra[i]){

                    cout << "Letra errada.\nInsira novamente: "; 
                    cin >> chute[i];
                    cout << "\nSeu Progresso: " << chute;
                    
                    flag = false;

                }else if (chute[i] == palavra[i]){
                    cout << "\nLetra certa";
                    cout << "\nSeu progresso:" << chute << "\n"; 
                }
            }while(!flag);
        } 
    cout << "\nVoce acertou!";
return 0;
} 






