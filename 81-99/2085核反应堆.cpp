#include<iostream>

using namespace std;

struct he {
    long long int high;
    long long int low;
};
struct he cnt[34];

void init(){
    cnt[0].high = 1;
    cnt[0].low = 0;
    for(int i=1;i<=33;++i){
        cnt[i].high += cnt[i-1].high * 3 + cnt[i-1].low * 2;
        cnt[i].low += cnt[i-1].high + cnt[i-1].low;
    }
}
int main(){
    int n;
    init();
    while(cin >> n && n != -1){
        cout << cnt[n].high << ", " << cnt[n].low << endl;
    }
    return 0;
}