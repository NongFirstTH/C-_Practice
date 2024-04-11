#include <iostream>
using namespace std;

int main(){
    int a,b,result = 1;
    cin >> a >> b;

    for(int i = 1;i<=a || i<=b;i++){
        if(a%i == 0 && b%i == 0) result = i;
    }

    cout << result;
    return 0;
}