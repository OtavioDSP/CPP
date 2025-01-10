#include <iostream>

using namespace std;

int main() {
    enum armas{fuzil=100, revolver=5, rifle, escopeta};

    armas armaSel;

    armaSel = revolver;
    cout << "Arma selecionada: " << armaSel << endl;

    return 0;
}