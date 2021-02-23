#include<iostream>

using namespace std;

int main(){
    // 与2044题目相同
    int ans[41];
    int N, num;
    ans[1] = 0;
    ans[2] = 1;
    ans[3] = 2;
    for(int i=4;i<=41;i++)
        ans[i] = ans[i-1] + ans[i-2];
    cin >> N;
    while(N--){
        cin >> num;
        cout << ans[num] << endl;
    }
    return 0;
}