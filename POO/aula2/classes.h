#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <iostream>
#include <string>

class veiculo{
public:
    int vel;
    int blind;
    int rodas;
    void setTipo(int tp);
    void setVelMax(int vm);
    void setArma(bool ar);
    void imp();
    int getVelMax();
    bool getArma();
    int getTipo();
    
private:
    int tipo; 
    int velMax;
    bool arma;


};




int veiculo::getVelMax(){
    return velMax;
}

bool veiculo::getArma(){
    return arma;
}

int veiculo::getTipo(){
    return tipo;
}


void veiculo::imp(){
    std::cout <<  rodas << std::endl;
    std::cout <<  vel << std::endl;
    std::cout <<  blind << std::endl;
    std::cout <<  arma << std::endl;
    std::cout <<  tipo << std::endl;
    std::cout <<  velMax << std::endl;

}
void veiculo::setTipo(int tp){
    tipo = tp;
}
void veiculo::setVelMax(int vm){
    velMax = vm;
}
void veiculo::setArma(bool ar){
    arma = ar;
}










class moto:public veiculo{

public:
    moto();


};
moto::moto(){
    vel = 0;
    blind = 0;
    rodas = 2;
    setTipo(1);
    setVelMax(299);
    setArma(false);


}

#endif
