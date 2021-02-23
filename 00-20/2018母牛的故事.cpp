#include<iostream>

using namespace std;

int nainiu(int day){
    int a[4] = {1,0,0,0};
    for(int i=1;i<day;i++){
        a[0] += a[3];
        a[3] = a[2];
        a[2] = a[1];
        a[1] = a[0];
    }
    return a[0] + a[1] + a[2] + a[3];
}

int main(){
    int day;
    while(cin >> day && day!=0){
        cout << nainiu(day) << endl;
    }
    return 0;
}