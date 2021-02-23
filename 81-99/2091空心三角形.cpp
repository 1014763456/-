#include<iostream>

using namespace std;

int main(){
    char c;
    int n,i=0;
    while(cin >> c && c != '@'){
        cin >> n;
        if(i!=0)
            cout << endl;
        i++;
        // 除了最后一排
        for(int i=0;i<n-1;++i){
            for(int j=0;j<i+n;j++){
                if(j==n+i-1 || j == n-i-1)
                    cout << c;
                else
                    cout << ' ';
            }
            cout << endl;
        }
        // 最后一排
        for(int i=0;i<2*n-1;++i)
            cout << c;
        cout << endl;
    }
    return 0;
}