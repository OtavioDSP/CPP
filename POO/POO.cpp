#include <iostream>
#include "torresgemeas.h"

using namespace std;


int main(){
    aviao *Boing = new aviao(1);
    aviao *Embraer = new aviao(2);
    aviao *Chinook = new aviao(4);
    
    Boing->imprimir();
    Embraer->imprimir();
    Chinook->imprimir();

return 0;
}