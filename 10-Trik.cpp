#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int cup = 1;

int main(){
    string s;
    cin >> s;
    int arr[3] = {1,0,0};

    for(char i:s){
        if(i == 'A') swap(arr[0],arr[1]);
        else if(i == 'B') swap(arr[1],arr[2]);
        else swap(arr[0],arr[2]);
    }

    for(int i = 0;i<3;i++){
        if(arr[i] == 1){
            cup = i+1;
            break;
        }
    }
    cout << cup;
    return 0;
}