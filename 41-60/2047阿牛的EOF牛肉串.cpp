#include<iostream>

using namespace std;

// 长度为n(n>=3)时
// ①n为O,假定1-n-2都满足定义,那么n-1位置不能为O,故总数为2*f(n-2)
// ②n不为O,n-1位置任取，1-n-1都满足定义,总数为2*f(n-1)
int main(){
    int num;
    long long int ans[40] = {0, 3, 8};
    for(int i=3;i<40;++i){
        ans[i] = 2 * (ans[i-1] + ans[i-2]);
    }
    while(cin >> num){
        cout << ans[num] << endl;
    }
    return 0;
}