#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double dlugosc(double kat, double r){

    kat*=(M_PI/180);
    return sqrt(2*r*r-2*r*r*cos(kat));

}

int main(){

    double promien, alfa, beta, gamma;
    cin>>promien>>alfa>>beta>>gamma;

    double delta=180-(360-((180-alfa)+(180-beta)+(180-gamma)));
    //cout<<delta;

    double a, b, c, d;

    a=dlugosc(alfa, promien);
    b=dlugosc(beta, promien);
    c=dlugosc(gamma, promien);
    d=dlugosc(delta, promien);

    double p=(a+b+c+d)/2;

    double P=sqrt((p-a)*(p-b)*(p-c)*(p-d));

    cout<<setprecision(4)<<fixed<<P;

    return 0;
}