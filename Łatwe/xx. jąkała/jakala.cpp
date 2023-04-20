#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    char liczby[ile];

    for(int i=0; i<ile; i++){
        cin>>liczby[i];
    }

    string wyraz;
    cin>>wyraz;

    for(int i=0; i<wyraz.length(); i++){

        bool test=true;
        for(int j=0; j<ile; j++){
            if(wyraz[i]==liczby[j]){
                test=false;
                break;
            }  
        }
        if(test==false) cout<<wyraz[i]<<wyraz[i];
        else cout<<wyraz[i];
    }






    return 0;
}