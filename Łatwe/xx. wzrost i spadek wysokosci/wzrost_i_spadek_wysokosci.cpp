#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double round_to(double value, double precision)
{
    return round(value / precision) * precision;
}

int main(){

    int testy;
    cin>>testy;

    float plus=0;
    float minus=0;

    for(int i=0; i<testy; i++){

        float kat, odl;
        cin>>kat>>odl;

        if(kat>0){
            kat*=(M_PI/180);
            //cout<<kat<<" ";
            plus+=(sin(kat)*odl);
            //cout<<(tan((M_PI*kat)/180)*odl)<<"a1\n";
        } 
        else if(kat<0){
            kat*=-(M_PI/180);
            minus+=(sin(kat)*odl);
            //cout<<(tan(-(M_PI*kat)/180)*odl)<<"a2\n";
        } 

    }

    cout<<setprecision(2)<<fixed<<plus<<" "<<minus;

    return 0;
}

//kod dziala ale te przyblizenia sa zjebane
//edit: to po prostu ja bylem idiota