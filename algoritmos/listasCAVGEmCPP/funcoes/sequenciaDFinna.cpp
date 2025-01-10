#include <iostream>
using namespace std;
void sequencia(int end, int start = 0);


int main(){
    int end;
    cout << "Digite o fim da sequência: ";
    cin >> end;
    sequencia(end);

return 0;
}

void sequencia(int end, int start){
    int res = 0, next = 0, inicio = start;
    if(start < end){
        

        sequencia(end, ++start);

    }

}


/*

start = 0 
res = 1
res = 1
res = 2


end = 





*/