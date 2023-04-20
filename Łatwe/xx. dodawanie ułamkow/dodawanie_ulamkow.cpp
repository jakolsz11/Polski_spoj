#include <iostream>
#include <string>

using namespace std;

unsigned long long NWD(unsigned long long m1, unsigned long long m2){

    unsigned long long pom;

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

    unsigned long long l1=0, m1=0, l2=0, m2=0;

    for(long long i=0; i<ulamek1.length(); i++){

        if(ulamek1[i]=='/'){

            l1=stoull(ulamek1.substr(0, i));
            //cout<<l1<<"\n";
            ulamek1.erase(0, i+1);

            m1=stoull(ulamek1);
            //cout<<m1<<"\n";
            
        }

        

    }

    for(long long i=0; i<ulamek2.length(); i++){

        if(ulamek2[i]=='/'){

            l2=stoull(ulamek2.substr(0, i));
            //cout<<l2<<"\n";
            ulamek2.erase(0, i+1);

            m2=stoull(ulamek2);
            //cout<<m2<<"\n";
            
        }

    }

    unsigned long long NWW=(m1/NWD(m1, m2))*m2;

    unsigned long long licz1=NWW/m1*l1;
    unsigned long long licz2=NWW/m2*l2;

    unsigned long long suma=licz1+licz2;
    //cout<<suma<<"\n";
    unsigned long long wartosc=suma;

    //cout<<suma<<" "<<NWW<<"\n";

    while(NWD(suma, NWW) != 1){
        suma/=NWD(suma, NWW);
        NWW/=NWD(wartosc, NWW);
        wartosc=suma;
    }

    //if(NWW == 1) cout<<l1<<"/"<<m1<<" + "<<l2<<"/"<<m2<<" = "<<suma<<"\n";
    cout<<l1<<"/"<<m1<<" + "<<l2<<"/"<<m2<<" = "<<suma<<"/"<<NWW<<"\n";


    return 0;
}

//cos chujowo sumuje