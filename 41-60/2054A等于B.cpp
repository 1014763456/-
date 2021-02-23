#include<iostream>
#include<string>
using namespace std;

// 去除小数点后末尾的零
string del_0_after_point(string s){
    if(s.find('.') != string::npos){
        while(s[s.size() - 1] == '0'){
            s.erase(s.begin() + s.size() - 1);
        }
    }
    if(s[s.size() - 1] == '.')
        s.erase(s.begin() + s.size() - 1);
    return s;
}

int main(){
    string a,b;
    while(cin >> a >> b){
        a = del_0_after_point(a);
        b = del_0_after_point(b);
        if(a.compare(b) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}