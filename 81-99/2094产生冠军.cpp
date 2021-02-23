#include<iostream>
#include<set>
#include<string>
using namespace std;

// 在全部选手中减去败者组的人后只剩一人
int main(){
    int n;
    string a,b;
    set<string> all,lose;
    while(cin >> n && n){
        all.clear();
        lose.clear();
        for(int i=0;i<n;++i){
            cin >> a >> b;
            all.insert(a);
            all.insert(b);
            lose.insert(b);
        }
        if(all.size() - lose.size() == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}