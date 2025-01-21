#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <string>

class veiculo{
public: 
    int velocidade;
    int tipo;
    veiculo(int tp);
    int getVelMax();
private:
    std::string nome;
    bool ligado;
    int velMax;

};
veiculo::veiculo(int tp){
    int tipo = tp;
    if(tipo == 1){
        nome = "Carro";
        // velMax = 200;
    }else if(tipo == 2){
        nome = "Avião";
        // velMax = 800;
    }else if(tipo == 3){
        // nome = "Navio";
        velMax = 120;
    }else if(tipo == 4){
        nome = "Helicóptero";
        // velMax = 350;
    }
    ligado = false;
    velocidade = 0;


}
int veiculo::getVelMax(){
    return velMax;
}



#endif