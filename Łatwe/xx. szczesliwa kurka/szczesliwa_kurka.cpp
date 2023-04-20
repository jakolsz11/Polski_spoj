#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    long long jajka;
    cin>>jajka;
    double wynik=0;

    if(jajka>=1000){
        wynik=50000+(jajka-1000)*100;
    }
    else{
        int odjac=10-(jajka/100);
        wynik=jajka*(50-odjac*5);
    }

    cout<<wynik/100;




    return 0;
}