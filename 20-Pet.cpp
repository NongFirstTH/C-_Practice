#include <iostream>
using namespace std;

int main(){
    int a[5][4],sum[5] = {0,0,0,0,0},max_score = INT32_MIN,idx = 0;

    for(int i = 0;i<5;i++){
        for(int j = 0;j<4;j++){
            cin >> a[i][j];
            sum[i] += a[i][j];
        }
         if(sum[i] > max_score){
            max_score = sum[i];
            idx = i;
        }
    }
    cout << idx+1<< " "<< max_score;
    return 0;
}