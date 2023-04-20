#include <iostream>

using namespace std;

int jaka(string akcja){

    if(akcja=="laga") return 6;
    else if(akcja=="zmiana") return 1;
    else if(akcja=="bramka") return 14;
    else if(akcja=="faul") return 4;
    else if(akcja=="akcja") return 9;

    return 0;
}

int main(){

    int czas;
    cin>>czas;
    int akcje;
    cin>>akcje;
    int ciekawe=10;
    bool test=true;

    for(int i=0; i<akcje; i++){

        int minuty;
        string akcja;
        cin>>minuty>>akcja;

        if(minuty<=ciekawe+1){
            ciekawe=minuty+jaka(akcja);
        }
        else{
            test=false;
        }

        if(i+1==akcje){
            if(ciekawe<=czas) test=false;
        }

    }

    if(test==true) cout<<"Ciekawy mecz\n";
    else cout<<"Nudy\n";

    return 0;
}