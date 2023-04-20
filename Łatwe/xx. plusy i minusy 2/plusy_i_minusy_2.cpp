#include <iostream>

using namespace std;

int main(){

    string linia;
    cin>>linia;
    int stos=0;
    bool test=true;

    for(int i=0; i<linia.length(); i++){

        if(linia[i]=='+') stos++;
        if(linia[i]=='-') stos--;

        if(stos==3){
            cout<<"5 ";
            test=false;
            stos=0;
        }

        if(stos==-3){
            cout<<"1 ";
            test=false;
            stos=0;
        }

    }

    if(test==true) cout<<"BRAK";

    return 0;
}