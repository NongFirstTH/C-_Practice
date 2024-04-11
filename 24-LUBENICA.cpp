#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int N,H,ans=0;
    cin >> N >> H;

    vector<int> hit,hit_New,zero;
    string Friend[N];

    for(int i = 0;i<N;i++){
            zero.push_back(0);
            hit.push_back(0);
            hit_New.push_back(0);
            cin >> Friend[i];
    }

    for(int h = 1;h<=H;h++){
        if(h == 1){
            for(int i = 0;i<N;i++){
                if(Friend[0][i] == '1'){
                    hit[i]++;
                    ans++;
                }
            }
        }else{
            
            for(int i = 0;i<N;i++){
                for(int j = 0;j<N;j++){
                    if(i == j) continue;

                        if(hit[i]%2 == 1 && Friend[i][j] == '1') {
                            hit_New[j]++;
                            ans++;
                        }else if(hit[i]%2 == 0 && Friend[i][j] == '1'){
                            hit_New[j]+=2;
                            ans+=2;
                        }

                }
            }

        }
        if(h>1){
            hit = hit_New;
            hit_New = zero;
        }

    }

        cout << ans;

    return 0;
}