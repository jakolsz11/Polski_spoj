#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        int ile_ocen;
        cin>>ile_ocen;

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        long double mianownik=ile_ocen;

        long double tab[6]={0, 0, 0, 0, 0, 0};
        int ujemne=0, dodatnie=0;

        for(int j=0; j<ile_ocen; j++){

            ios_base::sync_with_stdio(false);
            int liczba;
            cin>>liczba;
            if(liczba == 1) tab[0]+=1, ujemne++;
            else if(liczba == 2) tab[1]+=1, ujemne++;
            else if(liczba == 3) tab[2]+=1, ujemne++;
            else if(liczba == 4) tab[3]+=1, dodatnie++;
            else if(liczba == 5) tab[4]+=1, dodatnie++;
            else if(liczba == 6) tab[5]+=1, dodatnie++;

        }

        //cout<<ujemne<<" "<<dodatnie<<"\n";
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(ujemne == ile_ocen) cout<<"-1"<<"\n";
        else if(dodatnie == ile_ocen) cout<<"1"<<"\n";
        else{

            long double srednia=0;
            double nr=0;

            while(srednia<4 && nr<32){

                nr++;
                srednia=0;
                srednia=(tab[0]/mianownik)+((tab[1]*pow(2, nr))/mianownik)+((tab[2]*pow(3, nr))/mianownik)+
                ((tab[3]*pow(4, nr))/mianownik)+((tab[4]*pow(5, nr))/mianownik)+((tab[5]*pow(6, nr))/mianownik);
                //cout<<srednia<<"\n";
                srednia=pow(srednia, 1/nr);
                //cout<<srednia<<"\n";

            }
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            if(nr == 32) cout<<"-1"<<"\n";
            else cout<<nr<<"\n";

        }
    }
    return 0;
}