#include<iostream>
#include<algorithm>
using namespace std;

const int MAXN = 100 + 10;
struct program{
    int start;
    int end;
};
program arr[MAXN];

bool Compare(program x,program y){
    return x.end < y.end;
}

int main(){
    int num;
    while(cin >> num && num != 0){
        for(int i=0;i<num;++i){
            cin >> arr[i].start >> arr[i].end;
        }
        sort(arr,arr+num,Compare);
        int current = 0;
        int ans = 0;
        for(int i=0;i<num;++i){
            if(current <= arr[i].start){
                current = arr[i].end;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}