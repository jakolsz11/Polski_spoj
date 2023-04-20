#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int ile;
    cin>>ile;
    int liczba;

    for(int i=0; i<ile; i++){

        
        cin>>liczba;

        int tab[liczba];
        int n;

        for(int j=0; j<liczba; j++){
            cin>>n;
            tab[j]=n;
        }

        float srednia;
        float suma;

        for(int m=0; m<liczba; m++){
            suma+=tab[m];
        }

        srednia=suma/liczba;
        cout<<srednia<<endl;
        float a1, a2;
        int z;

        for(int k=0; k<liczba; k++){

            for(int q=0; q<liczba; q++){
                a1=abs(srednia-tab[q]);
                a2=abs(srednia-tab[q+1]);
                if(a2<a1){
                    z=tab[q];
                    tab[q]=tab[q+1];
                    tab[q+1]=z;
                }
            }
        }

        cout<<tab[0]<<endl;
        srednia=0;
        suma=0;
        


    }
    return 0;
}