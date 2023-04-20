#include <iostream>

using namespace std;

int main(){

    int tests;
    cin>>tests;

    while(tests--){

        int HowMany;
        cin>>HowMany;

        int sumL=0, sumR=0;

        for(int i=0; i<HowMany; i++){

            int succulence; //soczystosc
            cin>>succulence;

            if((i+1)%2 == 1) sumL+=succulence;
            else sumR+=succulence;

        }

        cout<<max(sumL, sumR)<<"\n";
    }
    return 0;
}