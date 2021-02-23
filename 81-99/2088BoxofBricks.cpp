#include<iostream>

using namespace std;

int main(){
    int num[50];
    int n,f=0;
    long long avg,ans;
    while(cin >> n && n != 0){
        // 看输出格式多输出一个空行
        if(f++)
            cout << endl;
        ans = avg = 0;
        for(int i=0;i<n;++i){
            cin >> num[i];
            avg += num[i];
        }
        avg /= n;
        for(int i=0;i<n;++i){
            if(num[i] > avg)
                ans += num[i] - avg;
        }
        cout << ans << endl;
    }
    return 0;
}