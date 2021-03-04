#include<iostream>
#include<vector>
#include<string>
using namespace std;

// 十进制转换到十进制及以下
void Convert1(int n,int x){
    vector<int> answer;
    while(n != 0){
        answer.push_back(n % x);
        n /= x;
    }
    for(int i = answer.size() - 1;i>=0;--i){
        cout << answer[i];
    }
    cout << endl;
}

// 10 -> N
char IntToChar(int x){
    if(x >= 0 && x <= 9)
        return x + '0';
    else{
        return x - 10 + 'A';
    }
}
void Convert2(int n,int x){
    vector<char> answer;
    if(n == 0)
        answer.push_back('0');
    else{
        while(n != 0){
            answer.push_back(IntToChar(n % x));
            n /= x;
        }
    }
    
    for(int i=answer.size() - 1;i>=0;--i){
        cout << answer[i];
    }
    cout << endl;
}

// M -> 10
int CharToInt(char x){
    if(x >= '0' && x <= '9')
        return x - '0';
    else{
        return x - 'A' + 10;
    }
}
void Convert3(string str, int x){
    int ans = 0;
    for(int i=0;i<str.size();++i){
        ans *= x;
        ans += CharToInt(str[i]);
    }
    cout << ans << endl;
}

//  M -> N : M -> 10 -> N
void Convert4(string str, int x){

}



int main(){
    string str;
    while(cin >> str){
        Convert3(str,16);
    }
    return 0;
}
