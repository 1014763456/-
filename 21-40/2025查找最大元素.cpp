#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    while(cin >> s){
        char max = 'a';
        for(int i=0;i<s.length();i++){
            if(s[i] > max)
                max = s[i];
        }
        for(int i=0;i<s.length();i++){
            if(s[i] == max)
                cout << s[i] << "(max)";
            else
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}