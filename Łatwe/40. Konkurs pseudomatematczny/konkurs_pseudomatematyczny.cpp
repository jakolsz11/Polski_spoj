#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        int uczestnicy;
        cin>>uczestnicy;

        int tab[uczestnicy];

        for(int k=0; k<uczestnicy; k++){
            int n;
            cin>>n;
            tab[k]=n;
        }

        int zmienna;

        for(int j=0; j<uczestnicy-1; j++){
            
            for(int z=0; z<uczestnicy-1; z++){
                if(tab[z]<tab[z+1]){
                    zmienna=tab[z];
                    tab[z]=tab[z+1];
                    tab[z+1]=zmienna;
                }
            }
        }

        int z=0;

        while(tab[z]==tab[z+1]){
            z++;
        }

        for(int n=0; n<=z; n++){
            cout<<tab[n]<<" ";
        }

        for(int m=uczestnicy-1; m>z; m--){
            cout<<tab[m]<<" ";
        }

        cout<<"\n";


    }
    return 0;
}