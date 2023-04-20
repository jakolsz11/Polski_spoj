#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        unsigned int d, n;

        cin>>d>>n;

        long double obwod;

        obwod=M_PI*d;

        long double co_ile;

        

        int ile_ciec;

        if(n%2==0){

            ile_ciec=n/2;
            co_ile=obwod/n;

        } 
        else{

            ile_ciec=n;
            co_ile=(obwod/n)/2;

        } 

        co_ile*=1000;
        co_ile=round(co_ile);
        co_ile=co_ile/1000;


        cout<<fixed<<setprecision(3)<<co_ile;
        cout<<" "<<ile_ciec<<endl;





    }

    return 0;
}