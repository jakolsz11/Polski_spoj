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
        long long iloczyn[oceny];

        for(int j=0; j<oceny; j++){
            
            cin>>ilosc[j];
            iloczyn[j]=1;
        }

        double srednia=0;
        double k=0;
        
        long double suma=0;

        while(srednia<4){

            
            suma=0;
            k++;
            if(k == 32){
                cout<<"-1"<<endl;
                break;
            }

            for(int j=0; j<oceny; j++){

                iloczyn[j]*=ilosc[j];
                suma+=iloczyn[j]/mianownik;

            }
            
            srednia=pow(suma, 1/k);
            
            //cout<<suma<<" "<<srednia<<endl;

            if(srednia>=4){
                cout<<k<<endl;
                break;
            }
            
        }

        //cout<<k<<endl;



    }
    return 0;
}