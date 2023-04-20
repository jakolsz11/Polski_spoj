#include <iostream>

using namespace std;

int main(){

    int tests;
    cin>>tests;

    while(tests--){

        string line;
        cin>>line;

        int ile;
        cin>>ile;

        for(int j=0; j<ile; j++){

            string word;
            cin>>word;

            int licznik=0;
            int pos=0;

            for(int m=0; m<word.size(); m++){

                for(int n=pos; n<line.size(); n++){

                    if(line[n]==word[m]){
                        licznik++;
                        pos=n+1;
                        break;
                    }

                }
            }

            if(licznik==word.size()) cout<<"YES\n";
            else cout<<"NO\n";

        }






    }




    return 0;
}