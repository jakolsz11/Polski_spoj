#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

int main(){

    long double p1, p2;

    /*while(scanf("%Lf %Lf", &p1, &p2)){

        long double p3, P;

        p3=pow((p2/p1), 2)*p1;

        P=p1+2*p2+p3;

        printf("%.2Lf\n", P);

    }*/
    string tekst;

    while(getline(cin, tekst)){
        if(tekst == "") return 0;
        else{
            for(int i=0; i<tekst.size(); i++){
                if(isspace(tekst[i])){
                    p1=stoi(tekst.substr(0, i));
                    p2=stoi(tekst.substr(i+1, tekst.size()-i));
                }
            }
        }
        //cin>>p1>>p2;
        

        long double p3, P;

        p3=pow((p2/p1), 2)*p1;

        P=p1+2*p2+p3;

        cout<<setprecision(2)<<fixed<<P<<"\n";

    }

    return 0;
}