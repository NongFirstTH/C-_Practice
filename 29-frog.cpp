#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x,y;
    cin >> x >> y;
    if(y<x){
        cout << 2;
    }else{
        cout << ceil(y/x);
    }
    return 0;
}