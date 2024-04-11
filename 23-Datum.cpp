#include <iostream>
using namespace std;

int main(){
    string day[] = {"Wednesday","Thursday","Friday","Saturday", "Sunday","Monday","Tuesday"};
    int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int D,M;
    cin >> D >> M;
    for(int i = 0;i<M-1;i++){
        D += month[i];
    }
    cout << day[D%7];
    return 0;
}