#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    char change[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int N,R;
    int flag;
    while(cin >> N >> R){
        stack<int> stk;
        if(N > 0)
            flag = 0;
        else{
            N = -N;
            flag = 1;
        }
        while(N){
            stk.push(N%R);
            N = N / R;
        }
        if(flag == 1)
            cout << '-';
        while(!stk.empty()){
            cout << change[stk.top()];
            stk.pop();
        }
        cout << endl;
    }
    return 0;
}