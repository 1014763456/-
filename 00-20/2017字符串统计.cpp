#include<string>
#include<iostream>

using namespace std;

int main(){
    string a;
    int num,sum;
    cin >> num;
    while(num--){
        sum = 0;
        cin >> a;
        for(int i=0;i<a.size();i++){
            if(a[i] >='0' && a[i] <='9')
                sum++;
        }
        cout << sum << endl;
    }
    return 0;
}