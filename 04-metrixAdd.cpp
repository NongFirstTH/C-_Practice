#include <iostream>
using namespace std;

int main(){
    int m,n,num;
    cin >> m >> n;
    int arr[m][n];

    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            arr[i][j] = 0;
        }
    }
    
    for(int r = 0;r<2;r++){
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                cin >> num;
                arr[i][j] += num;
            }
        }
    }

    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}