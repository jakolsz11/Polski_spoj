#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    string czas1, czas2;
    float dlugosc_statku;

    while(cin>>czas1>>czas2>>dlugosc_statku){
        
        float suma=0;

        suma+=(stoi(czas2.substr(0, 2))-stoi(czas1.substr(0, 2)))*3600;
        suma+=(stoi(czas2.substr(3, 2))-stoi(czas1.substr(3, 2)))*60;
        suma+=(stoi(czas2.substr(6, 2))-stoi(czas1.substr(6, 2)));

        float kmh=0;
        float mh=0;

        kmh=round((dlugosc_statku/suma)*3.6*10);
        kmh/=10;
        cout<<setprecision(1)<<fixed<<kmh<<" ";

        mh=round((dlugosc_statku/suma)*900/463*10);
        mh/=10;
        cout<<setprecision(1)<<fixed<<mh<<"\n";

    }

    return 0;
}