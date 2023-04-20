#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        long pole;
        cin>>pole;
        long long bok1=0, bok2=0, minimum=0, obwod=0;
        
        for(int i=1; i<=pole; i++){
            if(pole%i == 0){
                bok1=i;
                bok2=pole/i;
                obwod=2*(bok1+bok2);
                if(i==i) minimum=obwod;
                if(obwod<minimum) minimum=obwod;
            }
        }

        cout<<minimum<<"\n";



    }
    return 0;
}