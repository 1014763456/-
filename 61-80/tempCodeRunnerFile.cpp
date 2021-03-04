#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    set<string> ans;
    string cur;
    while(cin >> cur){
        if(cur.compare("#") == 0)
            break;
        ans.insert(cur);
    }
    cout << ans.size();
    return 0;
}