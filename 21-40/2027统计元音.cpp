#include<iostream>
#include<string>
using namespace std;

int main(){
    int num;
    int count[5];
    string s;

    cin >> num;
    getline(cin, s);
    for(int i=0;i<num;i++){
        for(int j=0;j<5;j++)
            count[j] = 0;
        getline(cin, s);
        for(int j=0;j<s.length();j++){
            if(s[j] == 'a')
                count[0]++;
            else if(s[j] == 'e')
                count[1]++;
            else if(s[j] == 'i')
                count[2]++;
            else if(s[j] == 'o')
                count[3]++;
            else if(s[j] == 'u')
                count[4]++;
        }
        cout << "a:" << count[0] << endl;
        cout << "e:" << count[1] << endl;
        cout << "i:" << count[2] << endl;
        cout << "o:" << count[3] << endl;
        if(i==num-1)
            cout << "u:" << count[4] << endl;
        else
            cout << "u:" << count[4] << endl << endl;

    }
    return 0;
}