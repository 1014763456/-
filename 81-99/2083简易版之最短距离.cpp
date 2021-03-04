#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int M,N,sum;
    int num[502];
    cin >> M;
    while(M--){
        cin >> N;
        sum = 0;
        for(int i=0;i<N;++i){
            cin >> num[i];
        }
        sort(num,num+N);
        for(int i=0;i<N;++i){
            sum += abs(num[i] - num[N/2]);
        }
        cout << sum << endl;
    }
    return 0;
}