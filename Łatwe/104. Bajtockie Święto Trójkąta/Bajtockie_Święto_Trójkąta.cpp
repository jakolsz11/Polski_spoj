#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double pole(double a, double b, double c){

    double p=(a+b+c)/2;

    double S;

    S=sqrt(p*(p-a)*(p-b)*(p-c));

    return S;

}

int main(){

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        long osoby;
        double zuzycie;
        cin>>osoby>>zuzycie;
        double suma=0;

        while(osoby != 0){

            double a, b, c;
            cin>>a>>b>>c;

            for(int j=0; j<2; j++){
                if(b>a) swap(a, b);
                if(c>b) swap(b, c);
            }

            if(b+c>a) suma+=pole(a, b, c);
            

            osoby--;
        }

        long double wynik;

        wynik=(suma/10)*zuzycie;

        cout<<setprecision(0)<<fixed<<wynik<<endl;

        suma=0;

    }
    return 0;
}