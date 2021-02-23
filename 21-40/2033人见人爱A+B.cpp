#include<iostream>

using namespace std;

int main(){
    int num;
    int AH,AM,AS,BH,BM,BS;
    cin >> num;
    while(num--){
        int CH,CM,CS;
        cin >> AH >> AM >> AS >> BH >> BM >> BS;
        CH = AH + BH;
        CM = AM + BM;
        CS = AS + BS;
        CM += CS / 60;
        CH += CM / 60;
        CM = CM % 60;
        CS = CS % 60;
        cout << CH << " " << CM << " " << CS << endl;
    }
    return 0;
}