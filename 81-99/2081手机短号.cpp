#include<iostream>
using namespace std;

int main(){
    int N;
    long long int num;
    cin >> N;
    while(N--){
        cin >> num;
        num = num % 100000 + 600000;
        cout  << num << endl;
    }
    return 0;
}