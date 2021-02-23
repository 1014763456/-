// Problem Description
// 输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
// Input
// 输入数据有多组，每组占一行，有三个字符组成，之间无空格。
// Output
// 对于每组输入数据，输出一行，字符中间用一个空格分开。
// Sample Input
// qwe
// asd
// zxc
// Sample Output
// e q w
// a d s
// c x z

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    char a[4];
    int b;
    while(cin >> a[0] >> a[1] >> a[2]){
        if(a[0] > a[1])
            swap(a[0], a[1]);
        if(a[0] > a[2])
            swap(a[0], a[2]);
        if(a[1] > a[2])
            swap(a[1], a[2]);
        cout << a[0] << " " << a[1] << " " << a[2] << endl;
    }
    return 0;
}