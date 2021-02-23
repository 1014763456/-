#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int num;
    double sum;
    double input;
    cin >> num;
    for(int i=0;i<num;i++){
        double sign = 1;
        sum = 0;
        cin >> input;
        for(int j=1;j<=input;j++){
            sum += 1.0/j*sign;
            sign = -sign;
        }
        printf("%.2f\n", sum);
    }
    return 0;
}