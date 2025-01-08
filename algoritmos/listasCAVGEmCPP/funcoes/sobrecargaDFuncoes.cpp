#include <iostream>

using namespace std;
void soma();
void soma(int n1,int n2);

int main() {
    soma(); 
    soma(10,20);

    return 0;
}
void soma(){
    int n1=10,n2=20;
    cout << n1 << " + " << n2 << " = " << n1+n2;
}
void soma(int n1,int n2){
    int re = n1+n2;
    cout << n1 << " + " << n2 << " = " << re;


}