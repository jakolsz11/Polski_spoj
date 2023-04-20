#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        int punkty;
        cin>>punkty;
        double x[punkty];
        double y[punkty];
        double wynik=0;

        for(int j=0; j<punkty; j++){

            cin>>x[j]>>y[j];

            if(j>0){
                wynik+=sqrt(pow(x[j]-x[j-1], 2)+pow(y[j]-y[j-1], 2));
            }

        }

        cout<<wynik/1000<<"\n";
    }

    return 0;
}