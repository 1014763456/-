#include<iostream>

using namespace std;

int main(){
    int N, a;
    int ans;
    cin >> N;
    while(N--){
        cin >> a;
        ans = 3;
        while(a--){
            ans = ( ans - 1 ) * 2; 
        }
        cout << ans << endl;
    }
    return 0;
}