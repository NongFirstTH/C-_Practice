#include <iostream>
#include <string>
using namespace std;

int main(){
    bool up = false,low = false,mix = false;
    string s;
    cin >> s;
    for(char i : s){
        if(i>='a' && i<= 'z'){
            low = true;
        }else if(i>='A' && i<='Z'){
            up = true;
        }else{
            mix = true;
        }
    }

    if(up && !(low || mix)) cout << "All Capital Letter";
    else if(low && !(up || mix)) cout << "All Small Letter";
    else cout << "Mix";
    return 0;
}