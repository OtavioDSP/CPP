#include <iostream>
using namespace std;

int main(){
    int i= 0;
    float cateto1 = 0, cateto2 = 0, hipotenusa = 0;

    do{
        i++;
        cout << "Digite o primeiro cateto: ";
        cin >> cateto1;
        cout << "Digite o segundo cateto: ";
        cin >> cateto2;
        while((cateto1 == 0 or cateto1 <0) and (cateto2 == 0 or cateto2 <0)){

            cout << "Os catetos não podem ser 0 nem negativos. Digite novamente." << endl;
            cout << "Digite o primeiro cateto novamente: ";
            cin >> cateto1;
            cout << "Digite o segundo cateto novamente: ";
            cin >> cateto2;
        }

        hipotenusa = (cateto1 * cateto1) + (cateto2 * cateto2);
        hipotenusa = hipotenusa * hipotenusa;
        cout << hipotenusa << endl;

    }while(i<50);


}