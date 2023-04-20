#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int tests;
    cin>>tests;

    while(tests--){

        int ile, min_wpl;
        cin>>ile>>min_wpl;

        const int cile=ile;
        int d[cile];

        for(int i=0; i<ile; i++){

            cin>>d[i];

        }

        cout<<"\n";

        int przek=0;
        int pom=0;
        int n=0;

        for(int i=0; i<ile; i++){
            
            if(d[i]<=przek){
                przek++;
            }
            else{
                pom++;
                przek++;
                i--;
            }
                
            

            if(przek==min_wpl){
                break;
            }




        }

        cout<<pom<<"\n";



    }

    return 0;
}

//kolejnosc taka jak podana