#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int size;
    while(cin >> size && size!=0){
        int min = INT_MAX;
        int minpos;
        int *arr = (int *)malloc(sizeof(int) * size);
        for(int i=0;i<size;i++){
            cin >> arr[i];
            if(arr[i] < min){
                min = arr[i];
                minpos = i;
            }
        }
        int temp = arr[0];
        arr[0] = arr[minpos];
        arr[minpos] = temp;
        for(int i=0;i<size;i++){
            if(i==0)
                cout << arr[i];
            else
                cout << " " << arr[i];
        }
        cout << endl;
    }
    return 0;
}