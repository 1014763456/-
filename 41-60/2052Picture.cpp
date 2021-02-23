#include<iostream>

using namespace std;

int main(){
    int n,m;
    while(cin >> n >> m){
        for(int i=1;i<=m+2;++i){
            for(int j=1;j<=n+2;++j){
                if((i==1 && j==1) || (i==1 && j==n+2) || (i==m+2 && j==1) || (i==m+2 && j==n+2))
                    cout << '+';
                else if(i==1 || i==m+2)
                    cout << '-';
                else if(j==1 || j==n+2)
                    cout << '|';
                else
                    cout << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}