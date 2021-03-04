#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int row,col;
    int temp;
    int maxNum;
    int maxRowPos;
    int maxColPos;

    while(cin >> row >> col){
        maxNum = 0;
        maxRowPos = 1;
        maxColPos = 1;
        for(int i=1;i<=row;i++){
            for(int j=1;j<=col;j++){
                cin >> temp;
                if(abs(temp) > abs(maxNum)){
                    maxNum = temp;
                    maxRowPos = i;
                    maxColPos = j;
                }
            }
        }
        cout << maxRowPos << " " << maxColPos << " " << maxNum << endl;
    }
    return 0;
}