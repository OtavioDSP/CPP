#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int i; 
    ofstream arquivo;
    arquivo.open("teste.exe", ios::app);
    for (i = 0; i < 100; i++) {
        arquivo << "Ola mundo"<< endl;
    }
    arquivo.close();

return 0;
}