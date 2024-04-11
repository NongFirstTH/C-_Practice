#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int N;
    string s,name[3] = {"Adrian" ,"Bruno","Goran"};
    cin >> N >> s;

    string A = "ABCABC";
    string B = "BABC";  
    string G = "CCAABB";

    map<string,int> m;
    m.insert({name[0],0});
    m.insert({name[1],0});
    m.insert({name[2],0});

    for(int i = 0;i<N;i++){
        if(A[i%6] == s[i]) m[name[0]]++;
        if(B[i%4] == s[i]) m[name[1]]++;
        if(G[i%6] == s[i]) m[name[2]]++;
    }

    string max = name[0];
    map<string, int>::iterator it = m.begin();
    while (it != m.end()) {
        if(it->second >= m.at(max)) max = it->first;
        ++it;
    }
    
    it = m.begin();
    cout << m.at(max) << endl;
    while (it != m.end()){
        if(it->second >= m.at(max)) cout << it->first << endl;
        ++it;
    }

    return 0;
}