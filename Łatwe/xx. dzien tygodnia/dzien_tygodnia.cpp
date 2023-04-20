#include <iostream>
#include <map>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    map<string, int> dzien{
        {"Pn", 1}, {"Wt", 2}, {"Sr", 3}, {"Cz", 4}, {"Pt", 5}, {"So", 6}, {"Nd", 0}
    };

    for(int i=0; i<testy; i++){

        string d;
        int ile;

        cin>>d>>ile;

        int suma=0;
        suma=dzien[d]+ile;

        suma%=7;
        

        for(auto it=dzien.begin(); it != dzien.end(); it++){
            if(it->second == suma) cout<<it->first<<"\n";
        }



    }

    return 0;
}