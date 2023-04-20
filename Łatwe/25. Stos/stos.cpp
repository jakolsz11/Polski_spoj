#include <iostream>

using namespace std;

int main(){

    int tab[10];
    char znak;
    int liczba;
    int ilosc=1;

    while(cin>>znak){
        

        switch(znak){

        case '+':
            cin>>liczba;
            if(ilosc==11) cout<<":("<<endl;
            else{
                for(int i=ilosc-1; i>=0; i--){
                    tab[i+1]=tab[i];
                }
                tab[0]=liczba;
                cout<<":)"<<endl;
                ilosc++;
            }
            break;
        case '-':
            if(ilosc==1) cout<<":("<<endl;
            else{
                cout<<tab[0]<<endl;
                for(int k=0; k<ilosc-1; k++){
                    tab[k]=tab[k+1];
                }
                ilosc--;
            }
            break;
        case NULL:
            return 0;
        default:
            return 0;
        }

        
    }
   

    return 0;
}