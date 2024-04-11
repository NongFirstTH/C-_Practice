#include <iostream>
using namespace std;

int main(){
    int num;
    int arr[9];
    int sum = 0;
    for(int i = 0;i<9;i++){
        cin >> num;
        arr[i] = num;
        sum += num;
    }

    for(int i = 0;i<9;i++){
        for(int j = 0;j<9;j++){
            if(sum - 100 == arr[i]+arr[j]){
                for(int k = 0;k<9;k++){
                    if(k == i || k == j) continue;
                    cout << arr[k] << endl;
                }
                return 0;
            }
        }
    }
    return 0;
}