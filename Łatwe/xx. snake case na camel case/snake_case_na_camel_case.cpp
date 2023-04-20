#include <iostream>

using namespace std;

int main(){

    string linia;
    getline(cin, linia);

    for(int i=0; i<linia.length(); i++){

        if(linia[i]=='_'){
            i++;
            cout<<(char) toupper(linia[i]);
        }
        else cout<<linia[i];

        
    }
    return 0;
}