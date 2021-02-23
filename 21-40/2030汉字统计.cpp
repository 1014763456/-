#include<iostream>
#include<string>
using namespace std;



int main(){
    int num;
    string s;
    cin >> num;
    getline(cin, s);
    while(num--){
        int count = 0;
        getline(cin, s);
        for(int i=0;i<s.length();i++){
            // 汉字用两个字节表示且最高位为1。计算机数用补码表示，相当于负数
            if(s[i] < 0)
                count++;
        }
        cout << count/2 << endl;
    }

    return 0;
}