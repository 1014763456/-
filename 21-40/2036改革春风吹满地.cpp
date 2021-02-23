#include<iostream>
#include<math.h>
using namespace std;

double triangleArea(int x1,int y1,int x2,int y2,int x3,int y3){
    double p;
    double ans;
    double a = sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));
    double b = sqrt((x2-x3) * (x2-x3) + (y2-y3) * (y2-y3));
    double c = sqrt((x1-x3) * (x1-x3) + (y1-y3) * (y1-y3));
    p = (a+b+c) / 2;
    ans = sqrt(p * (p-a) * (p-b) * (p-c));
    return ans;
}

int main(){
    int n;
    int heng[1000];
    int zong[1000];
    while(cin >> n){
        double ans = 0;
        if(n==0)
            break;
        for(int i=0;i<n;i++){
            cin >> heng[i] >> zong[i];
        }
        for(int i=1;i<n-1;i++){
            ans += triangleArea(heng[0],zong[0],heng[i],zong[i],heng[i+1],zong[i+1]);
        }
        printf("%.1f\n", ans);
    }
    return 0;
}