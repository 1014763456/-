#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float num,size;
    float ans;
    while(cin >> num >> size){
        ans = 0;
        for(int i=0;i<size;i++){
            ans += num;
            num = sqrt(num);
        }
        printf("%.2f\n", ans);
    }
    return 0;
}