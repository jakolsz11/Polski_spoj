#include <iostream>

using namespace std;

int jaka(string akcja){

    if(akcja=="laga") return 7;
    else if(akcja=="zmiana") return 2;
    else if(akcja=="bramka") return 15;
    else if(akcja=="faul") return 5;
    else if(akcja=="akcja") return 10;

    return 0;
}

int main(){

    int czas;
    cin>>czas;
    int akcje;
    cin>>akcje;
    int ciekawe=11;
    bool test=false;

    if(akcje==0 && czas<=10) test=true;

    for(int i=0; i<akcje; i++){

        int minuty;
        string akcja;
        cin>>minuty>>akcja;

        if(minuty<=ciekawe){
            if(ciekawe<minuty+jaka(akcja)) ciekawe=minuty+jaka(akcja);
            test=true;
        }
        else test=false;

        if(i+1==akcje){
            if(ciekawe<=czas) test=false;
        }

    }

    if(test==true) cout<<"Ciekawy mecz\n";
    else cout<<"Nudy\n";

    return 0;
}