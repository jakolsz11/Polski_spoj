#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>

using namespace std;

double odleglosc(double x1, double y1, double x2, double y2){

    return sqrt(pow((x2-x1), 2)+pow((y2-y1), 2));

}

class Point{

    public:
    double x;
    double y;

};

int main(){

    int ile_pkt, k;
    cin>>ile_pkt>>k;

    if(ile_pkt==3){

        Point p1;
        cin>>p1.x>>p1.y;

        Point p2;
        cin>>p2.x>>p2.y;

        Point p3;
        cin>>p3.x>>p3.y;

        double x, y, z;

        x=odleglosc(p1.x, p1.y, p2.x, p2.y); // pkt 1 i 2
        y=odleglosc(p1.x, p1.y, p3.x, p3.y); // pkt 1 i 3
        z=odleglosc(p3.x, p3.y, p2.x, p2.y); //pkt 2 i 3

        double p=(x+y+z)/2;

        double wynik=sqrt(p*(p-x)*(p-y)*(p-z));
        wynik+=x*k;
        wynik+=y*k;
        wynik+=z*k;
        wynik+=M_PI*k*k;
        

        cout<<setprecision(6)<<fixed<<wynik<<"\n";

    }

    else{

        Point p1;
        cin>>p1.x>>p1.y;

        Point p2;
        cin>>p2.x>>p2.y;

        Point p3;
        cin>>p3.x>>p3.y;

        Point p4;
        cin>>p4.x>>p4.y;

        double res[3];

        res[0]=odleglosc(p1.x, p1.y, p2.x, p2.y); // pkt 1 i 2
        res[1]=odleglosc(p1.x, p1.y, p3.x, p3.y); // pkt 1 i 3
        res[2]=odleglosc(p1.x, p1.y, p4.x, p4.y); //pkt 1 i 4

        sort(res, res+3);

        double a, b;

        a=res[0];
        b=res[1];

        double wynik=a*b;
        wynik+=2*a*k;
        wynik+=2*b*k;
        wynik+=M_PI*k*k;        

        cout<<setprecision(6)<<fixed<<wynik<<"\n";

    }

    return 0;
}