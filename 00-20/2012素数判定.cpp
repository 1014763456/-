#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int sushu(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i == 0)
            return 0;
    }
    return 1;
}

int main(){
    int left,right;
    int flag;
    while(cin >> left >> right){
        flag = 0;
        if(left==0 && right==0)
            return 0;
        if(left<-39 || right>50)
            return 0;
        for(int i=left;i<=right;i++){
            int num = i*i+i+41;
            if(sushu(num) == 0){
                flag = 1;
                printf("Sorry\n");
                break;
            }   
        }
        if(flag == 0)
            printf("OK\n");
    }
    return 0;
}