#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct peessoa{
    string name;
    int idade;

};

class Veiculo{
    public:
        string marca;
        int ano;
};








int main() {
    int num{10};
    string nome{"otavio"};
    vector<int> valores {1,2,3,4,5,6,7,8,9,10};
    map<string, string> capitais{{"mg", "belo horizonte"},{"sp", "sao paulo"},{"rj", "rio de janeiro"}};


    peessoa p1{"otavio",20};
    peessoa p2{"joao",30};

    Veiculo v1{"fiat",2010};

    cout << "num: " << num << endl;
    cout << "nome: " << nome << endl;
    for(vector<int>::iterator it =valores.begin(); it!=valores.end(); it++){
        cout << *it << endl;

    };


    for(map<string,string>::iterator it = capitais.begin(); it!=capitais.end(); it++){
        cout << it->first<< " - "<< it->second << endl;
    };

    cout << "nome: " << p1.name << " idade: " << p1.idade << endl;

    cout << "marca: " << v1.marca << " ano: " << v1.ano << endl;




return 0;
}