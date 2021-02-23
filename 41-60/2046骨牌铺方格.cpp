#include<iostream>

using namespace std;

int main(){
    int num;
    long long int ans[51] = {0, 1, 2};
    for(int i=3;i<51;++i){
        ans[i] = ans[i-1] + ans[i-2];
    }
    while(cin >> num){
        cout << ans[num] << endl;
    }
    return 0;
}