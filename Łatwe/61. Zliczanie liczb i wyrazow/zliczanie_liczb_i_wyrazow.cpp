#include <iostream>
#include <cctype>

using namespace std;

int main(){

    string wczyt;

    while(getline(cin, wczyt)){

        int slowa=0;
        int liczby=0;

        if(isalpha(wczyt[0])) slowa++;
        else liczby++;

        for(int i=1; i<wczyt.length()-1; i++){

            if(isspace(wczyt[i])){
                if(isdigit(wczyt[i+1])) liczby++;
                else slowa++;
            }
        }

        cout<<liczby<<" "<<slowa<<endl;

    }
    return 0;
}