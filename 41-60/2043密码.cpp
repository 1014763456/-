#include<iostream>
#include<string>
using namespace std;

int main(){
    int M;
    string str;
    int a,b,c,d;
    cin >> M;
    getline(cin, str);
    while(M--){
        a = b = c = d = 0;
        getline(cin, str);
        for(int i=0;i<str.length();i++){
            if(str[i] >= 'A' && str[i] <= 'Z')
                a = 1;
            if(str[i] >= 'a' && str[i] <= 'z')
                b = 1;
            if(str[i] >= '0' && str[i] <= '9')
                c = 1;
            if(str[i] =='^' || str[i]=='!' || str[i]=='@' || str[i]=='#' || str[i]=='$' || str[i]=='%' || str[i]=='~')
                d = 1;
        }
        if(str.length() >= 8 && str.length() <= 16 && a+b+c+d >=3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}