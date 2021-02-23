#include<iostream>
#include<stdlib.h>
using namespace std;

void quickSort(int *A,int left,int right){
    if(left >= right)
        return;
    int i=left,j=right;
    int key = A[left];
    while(i < j){
        while(i<j && key<=A[j])
            j--;
        A[i] = A[j];
        while(i<j && key>=A[i])
            i++;
        A[j] = A[i];
    }
    A[i] = key;
    quickSort(A,left,i-1);
    quickSort(A,i+1,right);
}

int main(){
    int n,m;
    int A[100],B[100],C[100];
    int num;
    while(cin >> n >> m){
        if(n==0 && m==0)
            break;
        num=0;
        for(int i=0;i<n;i++)
            cin >> A[i];
        for(int i=0;i<m;i++)
            cin >> B[i];
        for(int i=0;i<n;i++){
            int j;
            for(j=0;j<m;j++){
                if(A[i] == B[j])
                    break;
            }
            if(j == m){
                C[num++] = A[i];
            }
        }
        quickSort(C,0,num-1);
        if(num == 0)
            cout << "NULL" << endl;
        else{
            for(int i=0;i<num;i++)
                cout << C[i] << " ";
            cout << endl;
        }
    }   
    return 0;
}