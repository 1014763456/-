#include<iostream>
#include<algorithm>

using namespace std;

const int MAXN = 40 + 5;

int difficult[MAXN]; 

int main(){
    int T;
    cin >> T;
    while(T--){
        int n,m;
        cin >> n >> m;
        for(int i=0;i<n;++i){
            cin >> difficult[i];
        }
        sort(difficult,difficult+n);
        cout << (100 - difficult[0]) * (100 - difficult[0]) << endl;
    }
    return 0;
}