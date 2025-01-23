#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int i; 
    string linha, entrada; 
    ofstream arquivoO;
    arquivoO.open("teste.txt" , ios::app);
    for (i = 0; i < 10; i++) {
        cin >> entrada; 
        arquivoO << entrada << endl;
    }
    arquivoO.clear();
    arquivoO.close();

    ifstream arquivoI;
    
    arquivoI.open("teste.txt");
    if(arquivoI.is_open()){
        while(getline(arquivoI, linha)){
            cout << linha << endl;

        }
        arquivoI.close();
    }else{
        cout << "falha";

    }

return 0;
}
