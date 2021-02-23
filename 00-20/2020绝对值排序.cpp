#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;

// void quickSort(int *arr,int left,int right){
//     if(left>=right)
//         return;
//     int i=left,j=right;
//     int key = arr[left];
//     while(i<j){
//         while(i<j && abs(arr[j]) <= abs(key))
//             j--;
//         arr[i] = arr[j];
//         while(i<j && abs(arr[i]) >= abs(key))
//             i++;
//         arr[j] = arr[i];
//     }
//     arr[i] = key;
//     quickSort(arr,left,i-1);
//     quickSort(arr,i+1,right);
// }

bool function(int i, int j){
    return abs(i) > abs(j);
}

int main(){
    int size;
    while(cin >> size && size!=0){
        int *arr = (int *)malloc(sizeof(int) * size);
        for(int i=0;i<size;i++)
            cin >> arr[i];
        // quickSort(arr,0,size-1);
        sort(arr, arr+size, function);
        for(int i=0;i<size-1;i++)
            cout << arr[i] << " ";
        cout << arr[size-1] << endl;
        free(arr);
    }
    return 0;
}