#include <iostream>

using namespace std;

int main(){

    unsigned long long cyfry;
    long long strony=0;
    

    while(cin>>cyfry){

        unsigned long long poczatek=9, mnoznik=1, zmienna=1;
        strony=0;

        while(cyfry != 0){

            zmienna=poczatek*mnoznik;

            if((cyfry/zmienna) > 0){
                cyfry=cyfry - zmienna;
                strony+=poczatek;    
                poczatek*=10;
                mnoznik+=1;
                //cout<<cyfry<<" "<<strony<<endl;
            }

            else if((cyfry/zmienna) == 0){

                strony+=(cyfry/mnoznik);
                cyfry=0;
                
            }
        }

        cout<<strony<<endl;
    }
    return 0;
}