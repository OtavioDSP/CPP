#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<string> produtos = {
        "mouse",
        "teclado",
        "monitor",
        "gabinete",
        "placa de video",
        "placa mae",
        "processador",
        "memoria ram",
        "hd",
        "ssd"
    };

    vector<string>::iterator it;

    for (it = produtos.begin(); it != produtos.end(); advance(it,1)){ // pode ser usado i++ mas quis testar assim

        cout << *it << endl;
    }





    // advance(it,1);
  


return 0;
}