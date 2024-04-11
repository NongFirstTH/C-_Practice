#include <iostream>
#include <string>
using namespace std;

string s,a = {'a','e','i','o','u'};

bool contain(char c){
    for(int i = 0;i<5;i++){
        if(c == a[i]) return true;
    }
    return false;
}

int main(){
    getline(cin,s);
    for(int i = 0;i<s.size();i++){
        if(s[i] == ' ') continue;
        if(contain(s[i])) s.erase(i+1,2);
    }
    cout << s;
    return 0;
}
