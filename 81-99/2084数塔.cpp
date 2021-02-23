#include<iostream>
#include<algorithm>
using namespace std;

// 升级版杨辉三角
int main(){
    int c,n,res;
    int a[105][105];
    cin >> c;
    while(c--){
        res = -1;
        cin >> n;
        for(int i=1;i<=n;++i){
            for(int j=1;j<=i;++j){
                cin >> a[i][j];
            }
        }
        
        for(int i=2;i<=n;++i){
            for(int j=1;j<=i;++j){
                if(j == 1)
                    a[i][j] += a[i-1][j];
                else if(i == j)
                    a[i][j] += a[i-1][j-1];
                else
                    a[i][j] += max(a[i-1][j],a[i-1][j-1]);
            }
        }

        for(int i=1;i<=n;++i){
            if(a[n][i] > res)
                res = a[n][i];
        }
        cout << res << endl;
    }
    return 0;
}