// 普通汉诺塔
// f(n) = 2*f(n-1) + 1
// f(1) = 1
// 求得f(n) = 2^n - 1;
long long Hanoi1(int n){
    // return pow(2,n) -  1;
    if(n==1)
        return 1;
    else
        return 2*Hanoi1(n-1) + 1;
}


// 只能在相邻的汉诺塔中移动
// f(n) = 3*f(n-1) + 2
// f(1) = 2;
// 求得f(n) = 3^n - 1;

long long Hanoi2(int n){
    if(n==1)
        return 2;
    else
        return 3*Hanoi2(n-1) + 2;
}