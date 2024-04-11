#include <iostream>
#include <cmath>
using namespace std;

int N,min_perket = INT32_MAX;
int s[10],b[10];

void perket(int i,int S,int B){
    if(i == N){
        if(B > 0 && abs(S-B) < min_perket) min_perket = abs(S-B);
    }else{
        perket(i+1,S,B);
        perket(i+1,S*s[i],B+b[i]);
    }
}

int main() {
    cin >> N;
    
    for(int i = 0;i<N;i++){
        cin >> s[i] >> b[i];
    }

    perket(0,1,0);
    cout << min_perket;
    return 0;
}
