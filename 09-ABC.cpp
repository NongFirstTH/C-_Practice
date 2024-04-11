#include <iostream>
#include <algorithm> 
#include <string>
using namespace std;

int main(){
    int a,b,c,max,mid,min;
    string s;
    cin >> a >> b >> c;
    cin >> s;

    int arr[3] = {a,b,c};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);
    
    min = arr[0],mid=arr[1],max=arr[2];

    for(char i : s){
        if(i=='A') cout << min << " ";
        else if(i == 'B') cout << mid << " ";
        else cout << max << " ";
    }
    return 0;
}