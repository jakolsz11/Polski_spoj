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
            kat*=(3.14/180);
            kat=round_to(kat, 0.0001);
            //cout<<kat<<" ";
            plus+=(tan(kat)*odl);
            //cout<<(tan((M_PI*kat)/180)*odl)<<"a1\n";
        } 
        else if(kat<0){
            kat*=(3.14/180);
            kat=-round_to(kat, 0.0001);
            minus+=(tan(kat)*odl);
            //cout<<(tan(-(M_PI*kat)/180)*odl)<<"a2\n";
        } 

    }

    cout<<setprecision(2)<<fixed<<plus<<" "<<minus;

    return 0;
}

//pobawic  sie w zaokraglanie kat do 2 msc jako pi 3,14 