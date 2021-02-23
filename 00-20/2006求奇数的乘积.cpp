#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int num;
    while(cin >> num){
        int i=0;
        int ans = 1;
        int *arr =(int *)malloc(sizeof(int) * num);
        while(i!=num)
            cin >> arr[i++];
        for(int i=0;i<num;i++){
            if(arr[i]%2 == 1){
                ans *=arr[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}