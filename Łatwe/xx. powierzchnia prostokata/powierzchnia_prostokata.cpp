#include <iostream>

using namespace std;

int main(){

    long long testy;
    cin>>testy;

    for(long long i=0; i<testy; i++){

        long long obwod;
        cin>>obwod;

        if(obwod%2 != 0 || obwod<4) cout<<"BRAK\n";
        else{
            long long bok=0;
            long long pole=0;

            if(obwod%4==0){
                bok=obwod/4;
                pole=bok*bok;
                cout<<pole<<"\n";
            }
            else{
                bok=obwod/4;
                pole=bok*(bok+1);
                cout<<pole<<"\n";
            }
            

        }
    }
    return 0;
}