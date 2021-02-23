#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    double num;
    while(cin >> num){
        if(num < 0)
            num = -num;
        printf("%.2f\n", num);
    }

    return 0;
}