#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.1415926
int main(){
    // 两点坐标为实数，为小数
    double T,x1,y1,x2,y2;
    double a,b,c,ans;
    cin >> T;
    while(T--){
        cin >> x1 >> y1 >> x2 >> y2;
        // 直接用余弦定理
        a = sqrt(x1 * x1 + y1 * y1);
        b = sqrt(x2 * x2 + y2 * y2);
        c = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        ans = acos((a*a + b*b - c*c) / (2*a*b)) * 180.0 / PI;
        printf("%.2lf\n", ans);
    }
    return 0;
}