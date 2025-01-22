#include <iostream>
#include "classe.h"

using namespace std;

int main(){
base_Um *obj1 = new base_Um();
base_Dois *obj2 = new base_Dois();
derivada *der1 = new derivada();

obj1->impBase1();
obj2->impBase2();
der1->impBase1(),der1->impBase2();
}