#include <iostream>

using namespace std;

class aviao{
    public: 
        int vel = 0;
        int velMax;
        string tipo;
        void ini(int tp);
    private:
        
};

void  aviao::ini(int tp){

    if (tp == 1){
        this->velMax = 1000;
        this->tipo = "Jato";
    }else if(tp == 2){
        this->velMax = 350;
        this->tipo = "Monomotor";
    }else if (tp == 3){
        this->velMax = 180;
        this->tipo = "Planador";
    }


}

int main(){
    aviao *av1 = new aviao();
    av1->ini(3);
    cout << av1->velMax << endl;
    
    

    return 0;
}