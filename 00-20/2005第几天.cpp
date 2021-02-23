#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int y,m,d;
    char p,q;
    int month[12] = {31,0,31,30,31,30,31,31,30,31,30,31};
    int ans;

    while(cin >> y >> p >> m >> q >> d){
        ans = 0;
        if((y%4==0 && y%100!=0) || y%400==0)
            month[1] = 29;
        else
            month[1] = 28;
        for(int i=0; i<m-1; i++){
            ans += month[i];
        }
        ans += d;
        cout << ans << endl;
    }
    return 0;
}