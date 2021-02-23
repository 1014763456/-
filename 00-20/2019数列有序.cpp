#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int num,size;
    while(cin >> size >> num && (size!=0 && num!=0)){
        int pos=size+1;
        int *arr =(int *)malloc(sizeof(int) * (size+1));
        for(int i=0;i<size;i++)
            cin >> arr[i];
        for(int i=0;i<size;i++){
            if(arr[i]<=num && arr[i+1] >=num)
                pos = i+1;
        }
        for(int i=size;i>pos;i--){
            arr[i] = arr[i-1];
        }
        arr[pos] = num;
        for(int i=0;i<size;i++)
            cout << arr[i] << " ";
        cout << arr[size] << endl;
    }
    return 0;
}