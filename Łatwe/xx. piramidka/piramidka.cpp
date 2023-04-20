#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    string wyraz;
    cin>>wyraz;

    int sr=ile/2;
    //cout<<sr;

    for(int i=0; i<sr+1; i++){

        for(int j=0; j<sr-i; j++){
            cout<<".";
        }

        for(int j=sr-i; j<=sr+i; j++){
            cout<<wyraz[j];
        }

        for(int j=sr+i+1; j<wyraz.length(); j++){
            cout<<".";
        }

        cout<<"\n";

    }
    return 0;
}