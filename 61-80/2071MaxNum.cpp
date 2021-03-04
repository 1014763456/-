#include<iostream>
#include<algorithm>
#include<iomanip>//IO Manipulators
using namespace std;

const int MAXN = 100 + 5;
double stu[MAXN];

int main(){
    int n,num;
    cin >> n;
    while(n--){
        cin >> num;
        for(int i=0;i<num;++i){
            cin >> stu[i];
        }
        sort(stu,stu+num);
        cout << fixed << setprecision(2) << stu[num-1] << endl;
    }
    return 0;
}