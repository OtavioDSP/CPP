#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <string>

class veiculo{
public: 
    int velocidade;
    int tipo;
    veiculo(int tp);
    int getVelMax();
    bool getLigado();
    void setLigado(int l);
private:
    void setVelMax(int vm);
    std::string nome;
    bool ligado;
    int velMax;

};
veiculo::veiculo(int tp){
    int tipo = tp;
    if(tipo == 1){
        nome = "Carro";
       setVelMax(200);
    }else if(tipo == 2){
        nome = "Avião";
        setVelMax(800);
    }else if(tipo == 3){
        setVelMax(120);

    }else if(tipo == 4){
        nome = "Helicóptero";
        setVelMax(180);
    }
    ligado = false;
    velocidade = 0;
    setLigado(0);


}
int veiculo::getVelMax(){
    return velMax;
}
void  veiculo::setVelMax(int vm){
    velMax = vm;
}
bool veiculo::getLigado(){
    return ligado;


}
void veiculo::setLigado(int l){
    if (l ==1)
    {
        ligado = true;
    }else if (l == 0){
        ligado = false;
    }
    

}


#endif