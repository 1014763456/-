#include<stdio.h>
#include<cmath>
#include<iostream>
using namespace std;

int main(){
    double a,b,c,d;
    while(cin >> a >> b >> c >> d){
        double res = sqrt((a-c)*(a-c) + (b-d)*(b-d));
        printf("%.2f\n", res);
    }
    return 0;
}