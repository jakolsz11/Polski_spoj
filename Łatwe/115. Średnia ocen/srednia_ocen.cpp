#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        int oceny;
        cin>>oceny;
        double mianownik=oceny;

        long double ilosc[oceny];
        long double iloczyn[oceny];
        int liczba=0, ujemne=0;

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        for(int j=0; j<oceny; j++){
            
            cin>>ilosc[j];
            if(ilosc[j]>=4) liczba++;
            if(ilosc[j]<4) ujemne++;
            iloczyn[j]=1;

        }
        
        if(liczba == oceny) cout<<"1"<<"\n";
        else if(ujemne == oceny) cout<<"-1"<<"\n";
        else{

            double srednia=0;
            double k=0;
        
            long double suma=0;

            while(srednia<4 && k<32){

            
                suma=0;
                k++;

                for(int j=0; j<oceny; j++){

                    iloczyn[j]*=ilosc[j];
                    suma+=iloczyn[j]/mianownik;

                }
            
                srednia=pow(suma, 1/k);
            
            }

            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            if(k==32) cout<<"-1"<<"\n";
            else cout<<k<<"\n";
            

        }

        

    }
    return 0;
}