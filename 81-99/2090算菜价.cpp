#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    double num,price;
    double ans = 0;
    while(cin >> name){
        cin  >> num >> price;
        ans += num * price;
    }
    printf("%.1lf\n",ans);
    return 0;
}
