#include<iostream>

using namespace std;

int main(){
    int n;
    int count;
    while(cin >> n){
        if(n==1){
            count = 1;
        }else{
            count = 2;
            for(int i=2;i<=n/2;++i){
                if(n%i==0)
                    count++;
            }
        }
        
        if(count%2==1)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}