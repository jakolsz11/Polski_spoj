#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        int osoby, miejsce;
        cin>>osoby>>miejsce;

        if(osoby%2 != 0) cout<<"BRAK\n";
        else{

            miejsce+=osoby/2;
            if(miejsce>osoby) miejsce%=osoby;

            cout<<miejsce<<"\n";



        }

    }
    return 0;
}