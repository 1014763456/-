#include<iostream>
#include<algorithm>
using namespace std;

// 1.每次开一枪
// 最强的枪打最弱的怪
// 所有奖金的总和
const int MAXN = 100000 + 10;
long long gun [MAXN];
long long monster[MAXN];

bool Compare(long long x,long long y){
    return x > y;
}

int main(){
    int num;
    cin >> num;
    while(num--){
        int n,m;
        cin >> n >> m;
        for(int i=0;i<n;++i){
            cin >> gun[i];
        }
        for(int i=0;i<m;++i){
            cin >> monster[i];
        }
        // 枪从大到小
        sort(gun,gun+n,Compare);
        // 怪兽从小到大，默认
        sort(monster,monster+m);
        long long ans = 0;
        for(int i=0;i<n;++i){
            // 怪全死了或者打不死怪或打死怪没有收益
            if(i >= m || gun[i] <= monster[i])
                break;
            ans += gun[i] - monster[i];
        }
        cout << ans << endl;

    }
    return 0;
}