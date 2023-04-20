#include <iostream>

using namespace std;

int main(){

    string linia;
    
    while(getline(cin, linia)){

        cout<<linia[0];

        for(int i=1; i<linia.length(); i++){

            if(linia[i]==' ') cout<<linia[i+1];
            else if(linia[i]=='.') cout<<" ";

        }

        cout<<"\n";


    }

    return 0;
}