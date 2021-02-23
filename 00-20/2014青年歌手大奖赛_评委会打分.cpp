#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int max,min;
    int num;
    double sum;
    while(cin >> num){
        int temp;
        sum = 0;
        max = INT_MIN;
        min = INT_MAX;
        for(int i=0;i<num;i++){
            cin >> temp;
            sum += temp;
            if(temp > max)
                max = temp;
            if(temp < min)
                min = temp;
        }
        sum = sum - max - min;
        sum = sum / (num-2);
        printf("%.2f\n", sum);
    }
    return 0;
}