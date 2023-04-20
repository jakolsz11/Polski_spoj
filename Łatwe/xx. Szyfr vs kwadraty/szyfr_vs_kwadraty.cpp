#include <iostream>
#include <math.h>

using namespace std;

int main(){

    string line;

    while(getline(cin, line)){

        int ile=ceil(sqrt(line.size()));
        //cout<<ile<<"\n";

        string wynik;

        for(int i=0; i<ile; i++){

            for(int j=i; j<line.length(); j+=ile){

                wynik.push_back(line[j]);

            }
        }

        cout<<wynik<<"\n";
    }
    return 0;
}