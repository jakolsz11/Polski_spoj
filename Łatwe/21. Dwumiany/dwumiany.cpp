#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double silnia(double a, double b){

    double wynik=1;

    for(int k=1; k<=b; k++){
        wynik=(wynik*(a-k+1))/k;
    }
    return round(wynik);
}


int main(){
 
    double ile;
    cin>>ile;
    
    for(int i=0; i<ile; i++){

        double a, b;
        cin>>a>>b;

        cout<<setprecision(20);
        cout<<silnia(a, b)<<endl;
    }
    return 0;
}