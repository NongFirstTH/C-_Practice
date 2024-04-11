#include <iostream>
using namespace std;

int main(){
    int N,n,mid;
    cin >> N;

    bool make = false;
    n = N;
    if(N>1 && N%2==0) n = N-1;

    mid = n/2;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i > mid){
                if((i%mid != 0 && (j == i%mid || j == n-1-(i%mid))) || i%mid == 0 && j==mid){
                    cout << '*';
                }else{
                    cout << '-';
                }
            }else{
                if((i!=mid && (j == mid-(i%mid) || j == mid+(i%mid))) || (j == mid-i || j == mid+i)){
                    cout << '*';
                }else{
                    cout << '-';
                }
            }
        }
        if(i == mid && N%2 == 0 && !make){
            make = true;
            --i;
        }
        cout << endl;
    }

    return 0;
}