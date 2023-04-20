#include <iostream>

using namespace std;

int main(){

    long long liczba1=1, liczba2=0, liczba;
    bool pierwsza=true;

    while(cin>>liczba){

        if(liczba ==0) break;
        else if(pierwsza==true){
            liczba1=liczba;
            pierwsza=false;
        }

        else if(liczba>liczba2 && liczba>liczba1){
            liczba2=liczba1;
            liczba1=liczba;
        }
        else if(liczba>liczba2 && liczba<liczba1){
            liczba2=liczba;
        }        

    }
    if(liczba2 == 0) cout<<liczba1;
    else cout<<liczba2;

    return 0;
}