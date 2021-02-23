#include<iostream>

using namespace std;

int main(){
    int n;
    int a[30][30];
    for(int i=0;i<30;i++){
        a[i][i] = 1;
        a[i][0] = 1;
    }
    for(int i=2;i<30;i++){
        for(int j=1;j<i;j++){
            a[i][j] = a[i-1][j] + a[i-1][j-1];
        }
    }
    while(cin >> n){
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout << a[i][j] << ' ';
            }
            cout << a[i][i] << endl;
        }
        cout << endl;
    }
    return 0;
}