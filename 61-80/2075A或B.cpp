#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int A,B;
        cin >> A >> B;
        if(A % B == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}