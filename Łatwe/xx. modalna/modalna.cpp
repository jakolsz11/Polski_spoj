#include <iostream>
#include <map>

using namespace std;

int main(){

    std::ios_base::sync_with_stdio(false);
    int tests;
    cin>>tests;

    map <string, int> counter;

    while(tests--){

        string line;
        cin>>line;

        counter[line]+=1;

    }

    int max_1=0, max_2=0;
    string wynik;

    for(auto it=counter.begin(); it != counter.end(); it++){

        if(it->second>=max_1){
            max_2=max_1;
            max_1=it->second;
            wynik=it->first;
        }

    }

    if(max_1 != max_2) cout<<wynik<<"\n";
    else cout<<"BRAK\n";


    return 0;
}