#include<iostream>

using namespace std;

#define ll long long
int T,S,D,ans,N;
int a,b,Time;
const int maxn = 1005;
ll dp[maxn][maxn];
int s[maxn],d[maxn];

void init(){
    ans = INT_MAX;
    N = 0;
    for(int i=0;i<maxn;++i){
        for(int j=0;j<maxn;++j){
            if(i==j)
                dp[i][j] = 0;
            else
                dp[i][j] = INT_MAX;
        }
    }
}

void floyd(){
    for(int k=0;k<=N;++k){
        for(int i=0;i<N;++i){
            if(dp[i][k] == INT_MAX)
                continue;
            for(int j=0;j<=N;++j){
                if(i==j)
                    continue;
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
                dp[j][i] = dp[i][j];
                if(s[i] && d[j] && ans > dp[i][j])
                    ans = dp[i][j];
            }
        }
    }
}

int main(){

    return 0;
}
    