#include <iostream>
#include <fstream>

using namespace std;

int main () {
    int i = 0;
    float peso = 0.0f, pesoMed = 0.0f, maior = 0.0f;
    bool flag = true;
        cout << "Insira um numero negativo para finalizar o programa\n";
        cout << "Insira seu peso: ";
        cin >> peso;
        
    while(flag){
        cout << "Insira um numero negativo para finalizar o programa\n";
        cout << "Insira seu peso: ";
        cin >> peso;
        if(peso < 0){
            cout << "programa finalizado";
            break;
        }else if(peso >=60){
    
            pesoMed = pesoMed + peso;
            i++;
            
    
        }else if(peso < 60){
            if(peso > maior){
                maior = peso;
                
            }


        } 
    
    }
    pesoMed = pesoMed / i;
    cout << "Maior Peso: " << maior << "\n"; 
    cout << "Media de peso: " << pesoMed;
    return 0;
}