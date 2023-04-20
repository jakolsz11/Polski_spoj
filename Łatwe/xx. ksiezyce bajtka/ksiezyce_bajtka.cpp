#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        long double r1, r2;
        cin>>r1>>r2;

        long double a=2*r1, b=2*r2;

        long double R=(a*a+b*b)/4;

        long double pole;

        pole=(r1*r1+r2*r2-R)*M_PI/2+((a*b)/2);

        cout<<setprecision(2)<<fixed<<pole<<"\n";

    }

    return 0;
}