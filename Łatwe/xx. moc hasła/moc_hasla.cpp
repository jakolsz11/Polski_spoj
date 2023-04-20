#include <iostream>

using namespace std;

int silne(string haslo){

    bool test=false;
    bool test1=false;
    bool test2=false;
    bool test3=false;

    int dlugosc=haslo.length();

    for(int j=0; j<dlugosc; j++){

        if(haslo[j]>='a' && haslo[j]<='z') test1=true;
        else if(haslo[j]>='A' && haslo[j]<='Z') test2=true;
        else if(haslo[j]>='0' && haslo[j]<='9') test3=true;
        else test=true;

    }

    if(test==true && test1==true && test2==true && test3==true) return 1;
    else return 0;
}



int main(){

    int testy;
    cin>>testy;
    cin.get();

    for(int i=0; i<testy; i++){

        string haslo;
        getline(cin, haslo);

        int dlugosc=haslo.length();

        
        if(dlugosc>=8){

            if(silne(haslo) == 1) cout<<haslo<<"\n";

        }

        
    }
    return 0;
}