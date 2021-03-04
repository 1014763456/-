#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,m;
    int flag;
    while(cin >> n >> m){
        if(n==0 && m==0)
            break;
        flag = 0;
        for(int i=1;i <= sqrt(abs(m));++i){
            if(m%i != 0)
                continue;
            else{
                if( i+m/i == n || -i + -m/i == n){
                    cout << "Yes" << endl;
                    flag = 1;
                    break;
                }   
            }
        }
        if(flag == 0)
            cout << "No" << endl;
    }
    return 0;
}