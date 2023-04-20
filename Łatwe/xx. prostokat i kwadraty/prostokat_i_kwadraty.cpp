#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a, b;
    cin>>a>>b;

    int pole=0;

    int minim=min(a, b);
    int maks=max(a, b);
    int c;

    pole+=pow(minim, 2);
    c=maks-minim;

    pole+=pow(min(minim, c), 2);

    cout<<pole;

    return 0;
}