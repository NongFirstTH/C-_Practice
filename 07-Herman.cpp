#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double r;
    cin >>r;
    r = r*r;
    cout << fixed;
    cout << setprecision(6) << M_PI*r << endl;
    cout << setprecision(6) << 2*r;
    return 0;
}