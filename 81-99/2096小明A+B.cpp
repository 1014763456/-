#include<iostream>

using namespace std;

int main(){
    int T,A,B;
    cin >> T;
    while(T--){
        cin >> A >> B;
        A = A % 100;
        B = B % 100;
        cout << (A + B) % 100 << endl;
    }
    return 0;
}