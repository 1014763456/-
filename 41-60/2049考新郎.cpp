#include<iostream>

using namespace std;

long long int cp[21] = {0,0,1};
long long int jc[21]={1,1};
void solve(){
    // 错排结果
    for(int i=3;i<21;++i){
        cp[i] = (i-1) * (cp[i-1] + cp[i-2]);
    }
    // 阶乘结果
    for(int i=2;i<21;++i){
        jc[i] = i * jc[i-1];
    }
}


int main(){
    int c,n,m;
    solve();
    cin >> c;
    while(c--){
        cin >> n >> m;
        // n中选出m个有多少可能 * m个有多少错排可能
        // 组合 n!/m!/(n-m)!
        cout << jc[n] / jc[m] / jc[n-m] * cp[m] << endl;
    }
    return 0;
}