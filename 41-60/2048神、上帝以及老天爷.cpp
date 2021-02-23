#include<iostream>

using namespace std;

double cp[21] = {0,0,1};
double jc[21] = {1,1};

void solve(){
    // 错排结果
    for(int i=3;i<21;++i){
        cp[i] = (i-1) * (cp[i-1] + cp[i-2]); 
    }
    // 阶乘结果
    for(int i=2;i<21;++i){
        jc[i] = i*jc[i-1];
    }
}

int main(){
    int c,n;
    solve();
    cin >> c;
    while(c--){
        cin >> n;
        // 输出%要用两个%%
        printf("%.2lf%%\n",cp[n] / jc[n] * 100);
    }
    return 0;
}