#include <iostream>

using namespace std;

int main(){

    string tekst;
    int ile=0;

    while(getline(cin, tekst)){
        ile++;
    }

    cout<<ile;


    return 0;
}