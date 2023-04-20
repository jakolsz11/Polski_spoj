#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float a, b, c;

    while(cin>>a>>b>>c){

        float delta;
        delta = pow(b, 2) - 4*a*c;
        if(delta<0) cout<<0<<endl;
        else if (delta==0) cout<<1<<endl;
        else cout<<2<<endl;

    }
    return 0;
}