#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int score;
    while(cin >> score){
        if(score>=90 && score <= 100)
            printf("A\n");
        else if(score>=80 && score < 90)
            printf("B\n");
        else if(score>=70 && score < 80)
            printf("C\n");
        else if(score>=60 && score < 70)
            printf("D\n");
        else if(score>=0 && score < 60)
            printf("E\n");
        else
            printf("Score is error!\n");
        
    }
    return 0;
}