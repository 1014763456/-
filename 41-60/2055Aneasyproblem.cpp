#include<iostream>

using namespace std;

int f(char x){
    if(x >= 'A' && x <= 'Z')
        return x - 'A' + 1;
    else
        return -1 * (x - 'a' + 1);
}

int main(){
    int t;
    char x;
    int y;
    cin >> t;
    while(t--){
        cin >> x >> y;
        cout << f(x) + y << endl;
    }
    return 0;
}