#include<iostream>

using namespace std;

struct{
    int start;
    int end;
}program[101];

int main(){
    int n;
    int sum;
    while(cin >> n){
        if(n == 0)
            break;
        for(int i=0;i<n;i++)
            cin >> program[i].start >> program[i].end;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(program[j].end > program[j+1].end){
                    program[100] = program[j];
                    program[j] = program[j+1];
                    program[j+1] = program[100];
                }
            }
        }
    }
    return 0;
}