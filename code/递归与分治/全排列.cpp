#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const int MAXN = 10;
int visited[MAXN];
char sequence[MAXN];

void GetPermutation(string str,int index){
    if(index == str.size()){
        for(int i=0;i<str.size();++i){
            cout << sequence[i];
        }
        cout << endl;
    }
    for(int i=0;i<str.size();++i){
        if(visited[i])
            continue;
        visited[i] = true;
        sequence[index] = str[i];
        GetPermutation(str,index+1);
        visited[i] = false;
    }
}

int main(){
    string temp;
    while(cin >> temp){
        sort(temp.begin(),temp.end());
        GetPermutation(temp,0);
    }
    return 0;
}