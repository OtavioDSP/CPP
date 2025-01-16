#include <iostream>

using namespace std;

struct Carro{

    string name;
    string cor;
    int ano;
    int pot;
    int velMax;
    int vel;


    void insere(string stNome, string stCor, int stAno, int stPot, int stVelMax){
        name = stNome;
        cor = stCor;
        ano = stAno;
        pot = stPot;
        velMax = stVelMax;
        vel = 0;
    }

    void imprime(){
    cout << name << endl;
    cout << cor << endl;
    cout << ano << endl;
    cout << pot << " cv" << endl;
    cout << velMax << " km/h" << endl;
    cout << "andando a: " << vel << " km/h" << endl;

    }
    void mudaVel(int mv){
        vel = mv;
        if(vel > velMax){
            vel = velMax;

        }if (vel< 0){
            vel = 0;
        }

    }

};

int main() {
    Carro *carros = new Carro[5];
    Carro car1, car2, car3, car4, car5;

    carros[0] =car1;
    carros[1] =car2;
    carros[2] =car3;
    carros[3] =car3;
    carros[4] =car5;

    carros[0].insere("Gol", "vermelho", 2021, 80, 160);
    carros[1].insere("fusca","azul", 1978,50,100);
    carros[2].insere("Celta", "preto",2005, 59,120);
    carros[3].insere("Uno", "branco", 1999, 50, 110);
    carros[4].insere("Porsche 930","cinza", 1980, 660, 275);

    for(int i = 0; i< 5; i++){
        carros[i].imprime();

    }


    return 0;
}