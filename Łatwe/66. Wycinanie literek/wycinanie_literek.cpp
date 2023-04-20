#include <iostream>
#include <string>

using namespace std;

int main(){

    string wyraz;
    char znak;

    while(cin>>znak){

        cin>>wyraz;

        for(int i=0; i<wyraz.length(); i++){

            if(wyraz[i] != znak){

                cout<<wyraz[i];
            }
        }

        cout<<endl;
    }
    return 0;
}