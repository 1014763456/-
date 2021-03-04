#include<iostream>

using namespace std;

const int MAXN = 100;

// 结构体最后有分号
struct Matrix{
    int row,col;
    int matrix[MAXN][MAXN];
    Matrix(){}
    Matrix(int r,int c) : row(r),col(c){}
};

// 矩阵加
Matrix Add(Matrix x,Matrix y){
    Matrix ans = Matrix(x.row,x.col);
    for(int i=0;i<ans.row;++i){
        for(int j=0;j<ans.col;++j){
            ans.matrix[i][j] = x.matrix[i][j] + y.matrix[i][j];
        }
    }
}

// 矩阵乘
Matrix Multiply(Matrix x,Matrix y){
    Matrix ans = Matrix(x.row,x.col);
    for(int i=0;i<ans.row;++i){
        for(int j=0;j<ans.col;++j){
          ans.matrix[i][j] = 0;
          for(int k=0;k<x.col;++k){
              ans.matrix[i][j] += x.matrix[i][k] + y.matrix[k][j];
          }  
        }
    }
    return ans;
}

// 矩阵转置
Matrix Transpose(Matrix x){
    // 行列长度相反
    Matrix ans = Matrix(x.col,x.row);
    for(int i=0;i<ans.row;++i){
        for(int j=0;j<ans.col;++j){
            ans.matrix[i][j] = x.matrix[j][i];
        }
    }
    return ans;
}

void InputMatrix(Matrix &x){
    for(int i=0;i<x.row;++i){
        for(int j=0;j<x.col;++j){
            cin >> x.matrix[i][j];
        }
    }
}

void OutputMatrix(Matrix x){
    for(int i=0;i<x.row;++i){
        for(int j=0;j<x.col;++j){
            cout << x.matrix[i][j] << ' ';
        }
        cout << endl;
    }
}

int main(){
    Matrix x = Matrix(2,3);
    InputMatrix(x);
    OutputMatrix(Transpose(x));
    return 0;
}