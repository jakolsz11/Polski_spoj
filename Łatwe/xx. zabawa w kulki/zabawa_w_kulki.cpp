#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a, b, r, rzuty, testy;
    cin>>a>>b>>r>>rzuty>>testy;

    string imiona[testy];
    int wyniki[testy];
    int max=0;
    int tnt=0;
    int wynik=0;

    for(int j=0; j<testy; j++){

        cin>>imiona[j];
        wynik=0;

        for(int i=0; i<rzuty; i++){

            int x, y;
            cin>>x>>y;

            if(x>=a-r && x<=a+r && y>=b-r && y<=b+r){
                if(sqrt(pow(x-a, 2)+pow(y-b, 2)) <= r) wynik++;
            }

        }

        wyniki[j]=wynik;
        
        if(wynik>tnt){
            tnt=wynik;
            max=j;
        } 

    }

    cout<<imiona[max]<<" "<<wyniki[max]<<"\n";

    return 0;
}