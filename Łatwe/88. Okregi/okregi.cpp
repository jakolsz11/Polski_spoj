#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        double  x1, y1, r1; 
        cin>>x1>>y1>>r1;

        double x2, y2, r2; 
        cin>>x2>>y2>>r2;

        double d, wynik, wieksza, mniejsza;

        wieksza=max(r1, r2);
        mniejsza=min(r1, r2);

        d=sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

        if((r1+r2)<=d) wynik=0;
        else if(wieksza>=d){

            if(wieksza>=(d+mniejsza)) wynik=2*mniejsza;

            else wynik=wieksza-d+mniejsza;
            
        }
        else{

            wynik=r1+r2-d;

        }

        cout<<setprecision(2)<<fixed<<wynik<<endl;

    }

    return 0;
}