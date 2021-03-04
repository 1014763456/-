#include<iostream>

using namespace std;

const int MAXN = 50 + 5;
long long ans[MAXN];

void init(){
    ans[0] = 0;
    ans[1] = 1;
    for(int i=2;i<=50;++i){
        ans[i] = ans[i-1] + ans[i-2];
    }
}
int main(){
    init();
    int n;
    while(cin >> n && n != -1){
        cout << ans[n] << endl;
    }
    return 0;
}