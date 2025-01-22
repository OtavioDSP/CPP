#include <iostream>
#include "classes.h"

using namespace std;

int main(){
    moto *v1 = new moto();
    carro *v2 = new carro();
    tanque *v3 = new tanque();
    v1->imp();
    v2->imp();
    v3->imp();
    return 0;
}