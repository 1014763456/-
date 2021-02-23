#include<iostream>
#include<string>
using namespace std;

int main(){
    string s,c;
    while(cin >> s && s != "#"){
        cin >> c;
        int index = 0,sum = 0;
        while((index = s.find(c,index)) != string::npos){
            index += c.size();
            sum++;
        }
        cout << sum << endl;
    }
    return 0;
}