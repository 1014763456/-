#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int num;
    while(cin >> num){
        long long ans=1,temp;
        for(int i=0;i<num;++i){
            cin >> temp;
            if(temp%2 == 1)
                ans *= temp;
        }
        cout << ans << endl;
    }
    return 0;
}