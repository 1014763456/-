#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int N,M;
    int sum;
    while(cin >> N >> M && (N!=0 && M!=0)){
        // 等差数列求和公式
        // for(int i=sqrt(2*M);i>=1;i--)
		// {
		// 	int a=(M-((i-1)*i)/2)/i;
		// 	if(M==a*i+(i*(i-1))/2)
		// 	cout << '[' << a << ',' << a+i-1 << ']' << endl;
		// }
        // cout << endl;
        for(int i=1;i<=N;++i){
            sum = 0;
            for(int j=i;j<=N;++j){
                sum += j;
                if(sum == M){
                    cout << '[' << i << ',' << j << ']' << endl;
                    break;
                }
                else if(sum > M)
                    break;
            }
        }
        cout << endl;
    }
    return 0;
}