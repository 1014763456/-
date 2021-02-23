#include<iostream>
#define N 1000005
using namespace std;
int cnt,num[N];

void init(){
    cnt = 0;
    for(int i=0;i<N;++i){
        int k = i;
        int last = 0,next;
        while(k){
            next = k % 10;
            if(last == 2 && next == 6 || next == 4){
                cnt++;
                break;
            }
            k /= 10;
            last = next;
        }
        num[i] = cnt;
    }
}

int main(){
    init();
    int n,m;
    while(cin >> n >> m){
        if(n==0 && m==0)
            break;
        else
        // 是num[n-1],不是num[n]
            cout << (m - n + 1) - (num[m] - num[n-1]) << endl;
    }
    return 0;
}