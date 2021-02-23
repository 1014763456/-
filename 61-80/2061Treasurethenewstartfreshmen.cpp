#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int N,K;
    string courseName;
    double credits,score;
    double ans,sum;
    int flag;
    cin >> N;
    while(N--){
        ans = sum = flag = 0;
        cin >> K;
        while(K--){
            cin >> courseName >> credits >> score;
            if(score < 60 && score >= 0){
                flag = 1;
            }
            ans += credits * score;
            sum += credits;
            
        }
        if(flag==0){
            ans /= sum;
            cout << fixed << setprecision(2) << ans << endl;
        }else{
            cout << "Sorry!" << endl;
        }
        if(N!=0)
            cout << endl;
    }
    return 0;
}