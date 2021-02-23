#include<iostream>

using namespace std;

int main(){
    long long ans[51] = { 0 , 3 , 6 , 6};
    int num;
    for( int i = 4 ; i <= 50 ; i++ ){
        ans[i] = ans[i - 1] + ans[i - 2] * 2;
    }
    while (cin >> num) {
        cout << ans[num] << endl;
    }
    return 0;
}