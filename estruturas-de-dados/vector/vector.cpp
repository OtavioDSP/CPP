#include <iostream>
#include <vector>
using namespace std;

int main() {

    int i, tam1, tam2;
    vector<int> numeros, numeros2;

    for (int j = 0; j < 6; j++) {
        numeros.push_back(j);
        numeros2.push_back(j * 2);
    }
    numeros[0] = 20; 
    
    numeros.insert(numeros.end(), 888);
    numeros.erase(numeros.end());

    tam1 = numeros.size();
    tam2 = numeros2.size();
    // numeros.swap(numeros2);

    cout << "primeiro valor do vector 1: " << numeros.front() << endl;
    cout << "ultimo valor do vector 1: " << numeros.back() << endl;
    cout << "valor do meio de vector 1: " <<numeros.at(tam1/2) << endl;

    for (i = 0; i < tam1; i++) {
        cout << numeros[i] << " Vetor 1 " << endl;
        cout << numeros2[i] << " Vetor 2 " <<endl;
        cout << endl;
    }

    return 0;
}