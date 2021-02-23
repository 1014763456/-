#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int m,n;
    while(cin >> n >> m){
        int **arr = (int **)malloc(sizeof(int *) * n);
        double *stu = (double *)malloc(sizeof(double) * n); 
        double *cla = (double *)malloc(sizeof(double) * m);
        int good=0;
        for(int i=0;i<n;i++){
            arr[i] = (int *)malloc(sizeof(int) * m);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> arr[i][j];
                stu[i] += arr[i][j];
                cla[j] += arr[i][j];
            }
        }
        for(int i=0;i<n;i++){
            stu[i] /=m;
            if(i==n-1)
                printf("%.2f\n", stu[i]);
            else
                printf("%.2f ", stu[i]);
        }
        for(int i=0;i<m;i++){
            cla[i] /=n;
            if(i==m-1)
                printf("%.2f\n", cla[i]);
            else
                printf("%.2f ", cla[i]);
        }
        for(int i=0;i<n;i++){
            int j;
            for(j=0;j<m;j++){
                if(arr[i][j] < cla[j])
                    break;
            }
            if(j==m)
                good++;
        }
        printf("%d\n\n",good);
    }
    return 0;
}