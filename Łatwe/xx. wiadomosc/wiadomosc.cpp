#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        string line;
        cin>>line;

        int ile;
        cin>>ile;

        for(int j=0; j<ile; j++){

            string word;
            cin>>word;

            int pos=0;

            bool test=true;

            for(int m=0; m<word.size(); m++){

                pos=line.find(word[m], pos);
                if(pos== string::npos){
                    test=false;
                    break;
                }
                pos+=1;

            }

            if(test==true) cout<<"YES\n";
            else cout<<"NO\n";

        }

    }
    return 0;
}