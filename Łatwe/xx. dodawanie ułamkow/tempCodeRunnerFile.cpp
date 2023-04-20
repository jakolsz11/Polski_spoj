#include <iostream>
#include <string>

using namespace std;

int NWD(int m1, int m2){

    int pom;

    while(m2 != 0){
        pom=m2;
        m2=m1%m2;
        m1=pom;
    }

    return m1;
}

int main(){

    string ulamek1, ulamek2;
    cin>>ulamek1>>ulamek2;

    long l1=0, m1=0, l2=0, m2=0;

    for(int i=0; i<ulamek1.length(); i++){

        if(ulamek1[i]=='/'){

            l1=stol(ulamek1.substr(0, i));
            //cout<<l1<<"\n";
            ulamek1.erase(0, i+1);

            m1=stol(ulamek1);
            //cout<<m1<<"\n";
            
        }

        

    }

    for(int i=0; i<ulamek2.length(); i++){

        if(ulamek2[i]=='/'){

            l2=stol(ulamek2.substr(0, i));
            //cout<<l2<<"\n";
            ulamek2.erase(0, i+1);

            m2=stol(ulamek2);
            //cout<<m2<<"\n";
            
        }

    }

    int NWW=m1/NWD(m1, m2)*m2;

    int licz1=l1*NWW/m1;
    int licz2=l2*NWW/m2;

    int suma=licz1+licz2;
    int wartosc=suma;

    while(NWD(suma, NWW) != 1){
        suma/=NWD(suma, NWW);
        NWW/=NWD(wartosc, NWW);
        wartosc=suma;
    }
    



    cout<<l1<<"/"<<m1<<" + "<<l2<<"/"<<m2<<" = "<<suma<<"/"<<NWW;


    return 0;
}