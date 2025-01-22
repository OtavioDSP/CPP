#ifndef TORRESGEMEAS_H_INCLUDED
#define TORRESGEMEAS_H_INCLUDED
#include <string>
class aviao{
    public: 
        int vel = 0;
        int velMax;
        std::string tipo;
        aviao(int tp);
        void imprimir();
    private:
        
};
aviao::aviao(int tp){
    
    
    if (tp == 1){
        tipo = "Jato Particular";
        velMax = 1000;
    }else if (tp == 2){
        tipo = "Aeronave de combate";
        velMax = 1550;
    }else if (tp == 3){
        tipo = "Transporte comercial";
        velMax = 900;

    }else if (tp == 4){
        tipo = "Cargueiro Militar";
        velMax = 700;
    }

   






}
 void aviao::imprimir(){
        std::cout << "tipo de aviao: " << tipo << std::endl;
        std::cout << "velocidade maxima: " << velMax << std::endl;
        std::cout << "------------------------" << std::endl;


    }

#endif