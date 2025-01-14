#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> aula, teste;
    list<int>::iterator it;
    int tam;
    tam = 10;
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);

    for(int i = 0; i < tam; i++){

        aula.push_back(i);
    }

    cout << "tamanho da listas: "  << aula.size() << endl;
    
    it = aula.begin();
    advance(it, 3);
    aula.insert(it, 0);
    aula.erase(--it);

    // aula.clear();
    aula.merge(teste);


    tam = aula.size();

    for(int i = 0; i < tam; i++){

        cout << aula.front() << endl;

        aula.pop_front();

    
    }
    


return 0;
}