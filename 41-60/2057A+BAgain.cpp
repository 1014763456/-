#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    long long a,b,z;
    while(cin >> hex >> a >> b){
        if(a+b < 0)
            cout << setiosflags(ios::uppercase) << hex << '-' << -(a+b) << endl;
        else
            cout << setiosflags(ios::uppercase) << hex << a+b << endl;
    }
    return 0;
}