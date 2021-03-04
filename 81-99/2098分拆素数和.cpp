#include<iostream>
#include<cmath>
using namespace std;

int is(int a){
    for(int i=2;i<=sqrt(a);++i){
        if(a%i==0)
            return 0;
    }
    return 1;
}

int main(){
    int a,count;
    while(cin >> a && a != 0){
        count = 0;
        for(int i=2;i<a-i;++i){
            if(is(i) && is(a-i))
                count++;
        }
        cout << count << endl;
    }
    return 0;
}