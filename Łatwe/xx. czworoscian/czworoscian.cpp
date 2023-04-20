#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        double a;
        cin>>a;
        double result=(a*a*0.5*(a/sqrt(2)))/3;

        cout<<setprecision(2)<<fixed<<result<<"\n";

    }
    return 0;
}