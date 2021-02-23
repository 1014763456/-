#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int num;
    int i;
    int negtive,positive,zero;
    while(cin >> num){
        if(num == 0)
            break;
        i=0;
        negtive = positive = zero = 0;
        float *arr =(float *)malloc(sizeof(float) * num);
        while(i!=num){
            cin >> arr[i++];
        }
        for(int i=0;i<num;i++){
            if(arr[i] > 0)
                positive++;
            else if(arr[i] < 0)
                negtive++;
            else
                zero++;
        }
        cout << negtive << " " << zero << " " << positive << endl; 

    }
    return 0;
}