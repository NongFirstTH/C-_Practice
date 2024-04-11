#include <iostream>
#include <string>
using namespace std;

void frame1(int size){
    for(int i = 0;i<size;i++){
        if(i == 0) cout <<"..#..";
        else if((i+1)%3 == 0) cout << ".*..";
        else cout <<".#..";
    }
    cout << endl;
}

void frame2(int size){
    for(int i = 0;i<size;i++){
        if(i == 0) cout <<".#.#.";
        else if((i+1)%3 == 0) cout << "*.*.";
        else cout <<"#.#.";
    }
    cout << endl;
}

void frameText(string s,int size){
    for(int i = 0;i<size;i++){
        if((i+1)%3 == 0 && i != 0){
            cout <<"*."<<s[i]<<".*";
        }else{
            if(i == 0) cout <<"#."<< s[0];
            else cout <<"."<<s[i];
            if((i+2)%3 != 0 || i == size-1) cout << ".#";
            else cout << ".";
        }
    }
    cout << endl;
}

int main(){
    string s;
    cin >> s;
    int size = s.length();
    frame1(size);
    frame2(size);
    frameText(s,size);
    frame2(size);
    frame1(size);
    return 0;
}