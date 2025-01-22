#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <string>
#include <iostream>
class base_Um{
public:
    void impBase1();

};

void base_Um::impBase1(){
    std::cout << "Impressão da base 1" << std::endl;
}
class base_Dois{
public:
    void impBase2();
};
void base_Dois::impBase2(){
    std::cout << "Impressão da base 2" << std::endl;
}

class derivada:public base_Um, public base_Dois{
};



#endif