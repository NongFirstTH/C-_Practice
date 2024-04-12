#include <iostream>
using namespace std;
int main(){
    int x,y,i;
    cin >> x >> y;
    i = y/x;
    
    if(abs(y-x*i) < abs(y-x*(i+1))){
        cout << i;
    }else{
        cout << i+1;
    }
    return 0;
}