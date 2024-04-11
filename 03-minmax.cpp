#include <iostream>
using namespace std;
int main(){
    int n,num;
    cin >> n;
    int min=INT32_MAX,max=INT32_MIN;
    for(int i = 0;i<n;i++){
        cin >> num;
        if(num > max) max = num;
        if(num < min) min = num;
    }
    cout << min <<endl << max;
    return 0;
}