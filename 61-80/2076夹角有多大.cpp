#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int h,m,s;
        double ans;
        cin >> h >> m >> s;
        h %= 12;
        // 每小时，时针走30度 ==》 每分钟，分针走30/60=0.5度 ==》 每秒，秒针走0.5/60度
        ans = 30.0 * h + 0.5 * m + 0.5 * s /60;
        // 每分钟，分针走6度 ==》 每秒走6/60=0.1度
        ans = ans - 6.0 * m - 0.1 * s;
        ans = fabs(ans);
        cout << (int)(ans>180?360-ans:ans) << endl;
    }
    return 0;
}