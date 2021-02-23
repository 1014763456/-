#include<iostream>

using namespace std;

int main(){
    int c,n;
    cin >> c;
    while(c--){
        cin >> n;
        cout << n * n * 2 - n + 1 << endl;
    }
    return 0;
}