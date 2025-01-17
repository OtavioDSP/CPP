#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>


using namespace std;

int main() {
    int num = 10;
    // float pi = M_PI;
    // printf(" valor de pi %07.1f",num);
    // cout << oct << setbase(16) << endl;
    cout << setw(10) << setfill('c') << num << endl;
    // cout.precision(30);
    // cout << pi << endl;
    // cout.precision(-1);
    // cout << std::scientific <<pi  << endl;
    return 0;
}