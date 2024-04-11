#include <iostream>
using namespace std;

int main(){
    string a,b;
    char op;
    cin >> a >> op >> b;
    int size_a = a.size(),size_b = b.size();
    int max_size = max(size_a,size_b);
    int diff_size = abs(size_a-size_b);

    if(op == '*'){
        cout << a;
        for(int i = 1;i<b.size();i++){
            cout << b[i];
        }
    }
    if(op == '+'){
        for(int i = 0;i<max_size;i++){
            if(size_a == size_b){
                cout << '2';
                for(int j = 0;j<size_a-1;j++){
                    cout << '0';
                }
                return 0;
            }else if(i < diff_size){
                if(a>b) cout << a[i];
                else cout << b[i];
            }else{
                for(int j = 0;j<min(size_a,size_b);j++){
                 if(a<b) cout << a[j];
                else cout << b[j];
                }
                return 0;
            }
        }
     
    }

    return 0;
}