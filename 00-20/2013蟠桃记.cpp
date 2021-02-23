#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int num;
    int sum;
    while(cin >> num){
        sum = 1;
        for(int i=1;i<num;i++){
            sum = (sum+1) * 2;
        }
        cout << sum << endl;
    }
    return 0;
}