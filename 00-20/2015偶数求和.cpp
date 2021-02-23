#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int num,size;
    int sum;
    while(cin >> num >> size){
        sum = 0;
        for(int i=1;i<=num;i++){
            sum += i*2;
            if(i%size==0){
                if(i==size)
                    cout << sum/size;
                else
                    cout << " " << sum/size;
                sum = 0;
            }   
        }
        if(num%size == 0){
            printf("\n");
        }else{
            cout << " " << sum/(num%size) << endl;
        }
    }
    return 0;
}

// 没看懂
// int main(){
//     int num,size;
//     while(cin >> num >> size){
//         int i=1;
//         for(i;(i+size)<=num;i+=size)
//             printf("%d ", 2*i+size-1);
//         printf("%d\n", 2*i+num-i);
//     }
//     return 0;
// }

