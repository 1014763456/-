


// 简单贪心：买最多的咖啡豆（可以无限切分）
#include<iostream>
#include<algorithm>
using namespace std;

const int MAXN = 1000;

struct JavaBean{
    double weight;
    double cost;
};

JavaBean arr[MAXN];

bool Compare(JavaBean x,JavaBean y){
    return x.weight / x.cost > y.weight / y.cost;
}

int main(){
    int n,m;
    while(cin >> n >> m){
        if(n == -1 && m == -1)
            break;
        for(int i=0;i<m;++i){
            cin >> arr[i].weight >> arr[i].cost;
        }
        sort(arr,arr+m,Compare);
        double ans = 0;
        for(int i=0;i<m;++i){
            if(n>=arr[i].cost){
                ans += arr[i].weight;
                n -= arr[i].cost;
            }else{
                ans += arr[i].weight * n / arr[i].cost;
                n = 0;
                break;
            }
        }
        printf("%.3f\n",ans);
    }
    return 0;
}