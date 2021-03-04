#include<iostream>
#include<string>
#include<set>
#include<sstream>
using namespace std;
int main(){
    set<string> ans;
    string cur,temp;
    while(getline(cin,cur)){
        if(cur.compare("#") == 0)
            break;
        ans.clear();
        // 再整个缓冲区
        stringstream ss(cur);
        while(ss >> temp)
            ans.insert(temp);
        cout << ans.size() << endl;
    }
    return 0;
}