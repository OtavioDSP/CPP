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
    veiculo *v2 = new veiculo(2);
    veiculo *v3 = new veiculo(3);
    // v1->setLigado(1);
    // v2->setLigado(0);
    // v3->setLigado(1);


    cout << v1->getVelMax() << endl;
    cout << v2->getVelMax() << endl;
    cout << v3->getVelMax() << endl;

    cout << v1->getLigado() << endl;
    cout << v2->getLigado() << endl;
    cout << v3->getLigado() << endl;
return 0;
}