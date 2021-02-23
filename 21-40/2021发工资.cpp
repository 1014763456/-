#include<iostream>

using namespace std;

int minNum(int pay){
    int min=0;
    min += pay/100;
    pay = pay%100;
    min += pay/50;
    pay = pay%50;
    min += pay/10;
    pay = pay%10;
    min += pay/5;
    pay = pay%5;
    min += pay/2;
    min += pay%2;
    return min;
}

int main(){
    int num;
    int sum;
    int temp;
    while(cin >> num && num!=0){
        sum = 0;
        for(int i=0;i<num;i++){
            cin >> temp;
            sum += minNum(temp);
        }
        cout << sum << endl;
    }
    return 0;
}