#include<iostream>

using namespace std;

double min(double x, double y){
    return x < y ? x : y;
}

double max(double x, double y){
    return x > y ? x : y;
}

int main(){
    double x1,y1,x2,y2,x3,y3,x4,y4,d,h,s;
    double minx1,miny1,maxx1,maxy1,minx2,miny2,maxx2,maxy2;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4){
        minx1 = min(x1,x2);
        miny1 = min(y1,y2);
        maxx1 = max(x1,x2);
        maxy1 = max(y1,y2);

        minx2 = min(x3,x4);
        miny2 = min(y3,y4);
        maxx2 = max(x3,x4);
        maxy2 = max(y3,y4);
        if(minx1 >= maxx2 || miny1 >= maxy2 || minx2 >= maxx1 || miny2 >= maxy1 )
            cout << "0.00" << endl;
        else{
            d = min(maxy2,maxy1) - max(miny1,miny2);
            h = min(maxx2,maxx1) - max(minx1,minx2);
            s = d * h;
            if(s<0)
                s = (-1) * s;
            printf("%.2lf\n", s);
        }
    }
    
    return 0;
}