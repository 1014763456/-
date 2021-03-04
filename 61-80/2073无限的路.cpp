#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int N;
    cin >> N;
    while(N--){
        int x1,y1,x2,y2;
        double ans = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1+y1 > x2+y2){
            int temp = x1;
            x1 = x2;
            x2 = temp;
            temp = y1;
            y1 = y2;
            y2 = temp;
        }
        if(x1+y1 == x2+y2){
            ans = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
            printf("%.3lf\n",ans);
        }else{
            for(int i=0;i<2*(x2+y2-x1-y1)+1;++i){
                
            }
        }
    }
    return 0;
}