#include <iostream>
#include <math.h>

using namespace std;

int main(){

    long liczba;
    cin>>liczba;

    long help=sqrt(liczba);

    if(liczba-help*help==0) cout<<"TAK";
    else cout<<"NIE";

    return 0;
}