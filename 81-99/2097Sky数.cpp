#include<iostream>

using namespace std;

int solution(int n,int b){
    int res = 0;
    while(n > 0){
        res += n%b;
        n /= b;
    }
    return res;
}

int main(){
    int n;
    while(cin >> n && n != 0){
        int temp = solution(n,10);
        if(temp == solution(n,12) && temp == solution(n,16))
            cout << n << " is a Sky Number." << endl;
        else
            cout << n << " is not a Sky Number." << endl;
    }
    return 0;
}