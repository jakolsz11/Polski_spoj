#include <iostream>
#include <math.h>
#include <map>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        int ile;
        cin>>ile;

        map<int, int> wartosci;

        for(int j=0; j<ile; j++){

            int liczba;
            cin>>liczba;
            int liczba2=liczba;
            int nr=0;

            while(liczba!=0){

                liczba2=liczba;

                while(liczba2/2 != 0){
                    liczba2/=2;
                    nr++;
                }

                int wynik=pow(2, nr);
                liczba-=pow(2, nr);
                nr=0;

                wartosci[wynik]+=1;

            } 

            

        }

        bool test=true;

        for(auto it = wartosci.cbegin(); it != wartosci.cend(); ++it ){

            if (it ->second %2 != 0){
                cout<<"1"<<"\n";
                test=false;
                break;
            }


        }

        if(test==true) cout<<"2"<<"\n";


    }

    return  0;
}