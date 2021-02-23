#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    while(getline(cin, s)){
        if(s[0] >='a' && s[0] <= 'z')
            s[0] -= 32;
        for(int i=1;i<s.length()-1;i++){
            if(s[i] == ' '){
                if(s[i+1] >='a' && s[i+1] <= 'z')
                    s[i+1] -= 32;
            }
        }
        cout << s << endl;
    }
    return 0;
}