#include<iostream>

using namespace std;

int main(){
    int A,B;
    while(cin >> A >> B){
        int ans = A;
        if(A==0 && B==0)
            break;
        while(--B){
            ans = ans*A%1000;
        }
        cout << ans << endl;
    }
    return 0;
}