#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int M,N;
    int num[502];
    long long int avg,ans;
    cin >> M;
    while(M--){
        cin >> N;
        avg = ans = 0;
        for(int i=0;i<N;++i){
            cin >> num[i];
            avg += num[i];
        }
        avg /= N;
        for(int i=0;i<N;++i){
            ans += abs(num[i] - avg);
        }
        cout << ans << endl;
    }
    return 0;
}