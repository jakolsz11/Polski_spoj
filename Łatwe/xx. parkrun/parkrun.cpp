#include <iostream>

using namespace std;

int main(){

    int uczestnicy;
    cin>>uczestnicy;
    string tab[uczestnicy][3];
    int wyniki[uczestnicy];
    int ilosc=1;

    for(int i=0; i<uczestnicy; i++){

        cin>>tab[i][0]>>tab[i][1]>>tab[i][2];

        int minuty=stoi(tab[i][2].substr(0, 2));

        int sekundy=minuty*60+stoi(tab[i][2].substr(3, 2));

        int minimum;
        
        if(i==0){
            wyniki[0]=i;
            minimum=sekundy;
        } 
        else if(sekundy<minimum){
            
            for(int j=0; j<ilosc; j++){
                wyniki[j]=0;
            }
            wyniki[0]=i;
            minimum=sekundy;
            ilosc=1;
        }
        else if(sekundy==minimum){
            wyniki[ilosc]=i;
            ilosc++;
        }

    }

    
    for(int i=0; i<ilosc; i++){
        cout<<tab[wyniki[i]][0]<<" "<<tab[wyniki[i]][1]<<"\n";
    }

    return 0;
}