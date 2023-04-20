#include <iostream>

using namespace std;

int main(){

    int tests;
    cin>>tests;

    while(tests--){

        int number;
        cin>>number;

        if(number==2 || number==4) cout<<"BRAK\n";
        else if(number>2){

            if(number%2 == 0){
                cout<<number<<" = "<<number/3-1<<" + "<<number/3<<" + "<<number/3+1<<"\n";
            }
            else{
                cout<<number<<" = "<<number/2<<" + "<<number/2+1<<"\n";
            }
        }



    }
    return 0;
}

//ZLE DLA 100 MA BYC 18 19 20 21 22
// 8 - BRAK
