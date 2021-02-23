#include<iostream>
using namespace std;

// 异或
int main(){
    int a,n,ans;
    while(cin >> n && n){
        ans = 0;
        for(int i=0;i<n;++i){
            scanf("%d",&a);
            ans ^= a;
        }
        cout << ans << endl;
    }

    return 0;
}