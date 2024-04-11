#include <iostream>
#include <vector>
using namespace std;

vector<int> num,ans;

bool contain(int x){
    for(int i : ans){
        if(i == x) return true;
    }
    return false;
}

int main(){
    int N,K;
    cin >> N >> K;
    for(int i = 2;i<=N;i++){
        num.push_back(i);
    }

    int p;
    while (num.size()!=0){
        p = *num.begin();
        if (!contain(p)) ans.push_back(p);
        num.erase(num.begin());

        for(int i : num){
            if(i%p == 0 && !contain(i)){
                ans.push_back(i);
            }
        }
    }
    cout << ans[K-1];
    return 0;
}