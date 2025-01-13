#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> aula;
    list<int>::iterator it;
    int tam;
    tam = 10;

    for(int i = 0; i < tam; i++){

        aula.push_back(i);
    }

    it= aula.begin();
    advance(it, 7);

    aula.insert(it,0);

    cout << "tamanho da listas: "  << aula.size() << endl;
    
    aula.reverse();

    tam = aula.size();
    for(int i = 0; i < tam; i++){

        cout << aula.front() << endl;
        aula.pop_front();

    
    }



return 0;
}