#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        string liczba;
        cin>>liczba;

        int dlugosc=liczba.length();

        if(liczba.back() == '1') cout<<"Nie"<<"\n";
        else{

            bool ask=true;
            int even=0;
            int odd=0;

            for(int j=dlugosc-1; j>=0; j-=2){

                if(liczba[j]=='1'){

                    if(ask){
                        even+=1;
                    }
                    else{
                        even-=1;
                    }
                }

                ask = !ask;

            }

            ask=true;

            for(int j=dlugosc-2; j>=0; j-=2){

                if(liczba[j]=='1'){

                    if(ask){
                        odd+=1;
                    }
                    else{
                        odd-=1;
                    }
                }

                ask = !ask;

            }

            int suma=2*odd+even;
            if(suma%5==0){
                cout<<"Tak\n";
            }
            else{
                cout<<"Nie\n";
            }



        }

    }
    return 0;
}