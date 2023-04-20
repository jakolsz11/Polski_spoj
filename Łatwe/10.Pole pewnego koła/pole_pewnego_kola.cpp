#include <iostream>
#include <math.h>

using namespace std;

int main(){

    double a, b;

    cin>>a>>b;

    double a2=a*a;
    double b2=(b/2)*(b/2);
    double pi=3.141592654;
    long double wynik = pi*(a2-b2);
    long double wynik2 = round(wynik*100)/100;
    cout<<fixed<<wynik2;

    system("pause");

    return 0;
}