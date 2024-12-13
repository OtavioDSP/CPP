#include <iostream>
#include <locale.h>
#include <stdlib.h>


using namespace std;


int main(){
    setlocale(LC_ALL,"Português");


    int n1, n2, nota;
    char opc;
    inicio:
    system("cls");
    cout << "Insira o valor da primeira nota: "; 
    cin >> n1;
    cout << "Insira o valor da segunda nota: ";
    cin >> n2;

    nota = n1 + n2;

    if (nota>= 60){
        cout << "Aprovado";

    }else if(nota >= 40 and nota < 60) {
        cout << "Recuperação";
    }else{
        cout << "Reprovado";
    }

    cout << "\ndeseja continuar calculando ";
    cin >> opc;

    if (opc == 's' or opc == 'S' ){
        goto inicio;

    }else{
        cout << "Fim do programa";
    }

return 0;
}
