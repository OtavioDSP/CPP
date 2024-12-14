#include <iostream>
using namespace std;

int main(){
    int x, y, z; 
    // while ((x=10) && (z<10)){    
    for (x=0, y= 0, z= 0; (x=10) && (z<10); x++, y++,z++){
        cout << x<<"\n";
        cout << y;
        cout << z;

    }

    return 0;



}