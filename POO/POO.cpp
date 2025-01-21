#include <iostream>
#include "torresgemeas.h"
#include "classes.h"

using namespace std;


int main(){
    // aviao *Boing = new aviao(1);
    // aviao *Embraer = new aviao(2);
    // aviao *Chinook = new aviao(4);
    
    // Boing->imprimir();
    // Embraer->imprimir();
    // Chinook->imprimir();

    veiculo *v1 = new veiculo(1);
    cout << v1->getVelMax() << endl;

return 0;
}