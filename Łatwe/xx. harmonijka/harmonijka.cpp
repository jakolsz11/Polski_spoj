#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    const int ile=testy;
    int liczby[ile];

    for(int i=0; i<testy; i++){

        cin>>liczby[i];
        
    }

    long max=0;
    long skok=1;

    for(int i=0; i<ile; i++){

        for(int j=i; j<ile; j+=2){

            if(liczby[j+1]==(liczby[j]+skok)) skok++;
            else{
                if(skok>max) max=skok;
                //cout<<max<<" ";
                skok=1;
                break;
            }

            if(liczby[j+2]==(liczby[j+1]-skok)) skok++;
            else{
                if(skok>max) max=skok;
                //cout<<max<<" ";               
                skok=1;
                break;
            }

        }
    }

    cout<<max<<"\n";
    return 0;
}