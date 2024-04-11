#include <iostream>
#include <set>
using namespace std;

set<int> s;

bool contains(int elem){
    for(int i : s){
        if(i == elem) return true;
    }
    return false;
}

int main(){
    int num;
    for(int i = 0;i<10;i++){
        cin >> num;
        num = num % 42;
        if(!contains(num)) s.insert(num);
    }
    cout << s.size();
    return 0;
}