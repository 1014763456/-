#include<iostream>

using namespace std;

int main(){
    // 与2041题目相同
    // 要用long long int
    // 用int结果超出了
    long long int ans[50];
    int N;
    int a, b;
    cin >> N;
    ans[1] = 1;
    ans[2] = 2;
    for ( int i = 3 ; i <= 50 ; i++ )
        ans[i] = ans[i - 1] + ans[i - 2]; 
    while(N--){
        cin >> a >> b;
        cout << ans[b - a] << endl;
    }
    return 0;
}