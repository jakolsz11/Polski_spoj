#include <iostream>

using namespace std;

int main(){

    string wyraz;

    while(cin>>wyraz){

        int dlugosc=wyraz.length();
        string odtylu[dlugosc];

        for(int i=dlugosc-1; i>=0; i--){

            cout<<wyraz[i];
            
        }

        cout<<"\n";

    }
    return 0;
}