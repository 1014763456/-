#include<iostream>
#include<string>
using namespace std;

int isLegal(string s){
    if(s[0] <='9' && s[0] >='0')
        return 0;
    for(int i=0;i<s.length();i++){
        if(!(s[i]=='_' || (s[i] >='0' && s[i] <='9') || (s[i] >='a' && s[i] <='z') || (s[i] >='A' && s[i] <='Z')))
            return 0;
    }
    return 1;
}

int main(){
    int num;
    string s;

    cin >> num;
    getline(cin, s);
    for(int i=0;i<num;i++){
        getline(cin, s);
        if(isLegal(s))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    
    return 0;
}