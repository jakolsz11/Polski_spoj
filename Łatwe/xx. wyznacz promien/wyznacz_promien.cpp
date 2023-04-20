#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    double x1, y1, x2, y2, x3, y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    double AB12=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    double AC13=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    double CB32=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));

    double p=(AB12+AC13+CB32)/2;

    double r=sqrt(((p-AB12)*(p-AC13)*(p-CB32))/p);

    double R=(AB12*AC13*CB32)/(4*r*p);

    cout<<setprecision(2)<<fixed<<R<<"\n";

    return 0;
}