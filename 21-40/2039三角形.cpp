#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    // 三角形给的边可能是浮点数
    double arr[3];
    int num;
    cin >> num;
    while (num--){
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        if (arr[0] + arr[1] > arr[2])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}