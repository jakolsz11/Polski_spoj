#include <iostream>
#include <iomanip>

using namespace std;

int main(){


    float s, vj, vp;
    cin>>s>>vj>>vp;
    s/=1000;

    float tj=s/vj;

    float sp=tj*vp;
    sp*=1000;

    cout<<setprecision(2)<<fixed<<sp<<"\n";

    return 0;
}