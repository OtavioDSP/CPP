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
    Carro car1, car2;
    car1.insere("gol", "cermelho", 2021, 80,160);
    car2.insere("fusca", "azul", 1980, 60, 50);
    car1.imprime();
    car1.mudaVel(200);
    car1.imprime();


    return 0;
}