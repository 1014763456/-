#include<iostream>
#include<string>
using namespace std;

int huiwen(string s){
    int i=0,j=s.length()-1;
    while(i<j){
        if(s[i] != s[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main(){
    string s;
    int num;
    cin >> num;
    getline(cin, s);
    while(num--){
        getline(cin, s);
        if(huiwen(s) == 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}