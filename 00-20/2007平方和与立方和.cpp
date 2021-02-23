#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int ouans,jians;
    int a,b;
    // 数范围有大小关系
    while(cin >> a >> b){
        if(a > b){
            int temp = a;
            a = b;
            b = temp;
        }
        ouans = 0;
        jians = 0;
        for(int i=a;i<=b;i++){
            if(i%2==0)
                ouans += i*i;
            else
                jians += i*i*i;
        }
        cout << ouans << " " << jians << endl;

    }
    return 0;
}