#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        double a, b;
        cin>>a>>b;

        double ramie=(a+b)/2;

        double podstawa;

        if(a>b) podstawa=(a/2)-b/2;
        else podstawa=(b/2)-a/2;

        double h;

        h=sqrt(ramie*ramie-podstawa*podstawa);

        double pole=h*(a+b)/2;

        cout<<setprecision(2)<<fixed<<pole<<"\n";

    }
    return 0;
}