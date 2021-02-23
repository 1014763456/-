#include<iostream>
#include<math.h>
using namespace std;

int primeNumberSum(int num){
    int sum = 1;
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            sum += i;
            sum += num / i;
        }    
    }
    return sum;
}

int main(){
    int num;
    int a, b;
    cin >> num;
    while(num--){
        cin >> a >> b;
        if(primeNumberSum(a) == b && primeNumberSum(b) == a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}