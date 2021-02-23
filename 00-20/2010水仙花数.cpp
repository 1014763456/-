#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int shuixianhua(int n){
    int ge,shi,bai;
    ge = n%10;
    bai = n/100;
    shi = (n/10)%10;
    if(n == ge*ge*ge+shi*shi*shi+bai*bai*bai)
        return 1;
    else
        return 0;
}

int main(){
    int left,right;
    int flag;
    while(cin >> left >> right){
        flag = 0;
        for(int i=left;i<=right;i++){
            if(shuixianhua(i)){
                flag++;
                if(flag == 1)
                    cout << i;
                else
                    cout << " " << i;
            }
        }
        if(flag == 0)
            cout << "no" << endl;
        else
            printf("\n");
    }
    return 0;
}