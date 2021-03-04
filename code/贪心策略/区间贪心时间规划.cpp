#include<iostream>
#include<algorithm>
using namespace std;

// 1.选择开始时间最早的 ×
// 2.选择持续时间最短的 ×
// 3.选择结束时间最早的 √ 剩下的时间越多，看的节目可能更多
struct program{
    int startTime;
    int endTime;
};

const int MAXN = 100 + 10;

program arr[MAXN];

bool Compare(program x,program y){
    return x.endTime < y.endTime;
}

int main(){
    int num;
    while(cin >> num && num != 0){
        for(int i=0;i<num;++i){
            cin >> arr[i].startTime >> arr[i].endTime;
        }
        sort(arr,arr+num,Compare);
        int current = 0;
        int answer = 0;
        for(int i=0;i<num;++i){
            if(current <= arr[i].startTime){
                current = arr[i].endTime;
                answer++;
            }
        }
        cout << answer << endl;
    }
    return 0;
}