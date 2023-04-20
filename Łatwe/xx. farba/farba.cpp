#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float a, b, h;
    cin>>a>>b>>h;

    float wiaderka=0;

    float sciany;
    sciany=2*a*h+2*b*h;
    wiaderka+=ceil(sciany/5);

    float dach;
    dach=a*b;
    wiaderka+=ceil(dach/3);

    cout<<wiaderka;

    return 0;
}