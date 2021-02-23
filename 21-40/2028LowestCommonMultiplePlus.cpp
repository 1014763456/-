#include<iostream>

using namespace std;

// 最大公约数
int gcd(int a,int b) {
    if(!b) return a;
    return gcd(b,a%b);
}

int main(){
    int num,ans,temp;
    while(cin >> num >> ans){
        while(--num){
            cin >> temp;
            ans *= temp / gcd(ans,temp);
        }
        cout << ans << endl;
    }
    return 0;
}