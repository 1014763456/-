#include<iostream>

using namespace std;

int main(){
    int a,b,flag;
    while(cin >> a >> b){
        flag = 0;
        if(a == 0 && b == 0)
            break;
        a *= 100;
        for(int i=0;i<100;i++){
            if((a + i) % b == 0){
                if(flag == 0){
                    if(i>=0 && i <=9)
                        cout << '0' << i;
                    else
                        cout << i;
                }
                else{
                    if(i>=0 && i <=9)
                        cout << " 0" << i;
                    else
                        cout << ' ' << i; 
                }
                flag = 1;
            }       
        }
        cout << endl;
    }
    return 0;
}