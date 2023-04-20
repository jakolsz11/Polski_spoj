#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        string slowo;
        cin>>slowo;

        for(int j=slowo.size()-1; j>=0; j--){
            if(slowo[j] != 'z'){
                slowo[j]+=1;
                for(int m=j+1; m<slowo.size(); m++){
                    slowo[m]='a';
                }
                break;
            }
            else if(j==0 && slowo[j]=='z'){
                slowo.push_back('a');
            }
            
        }

        cout<<slowo<<"\n";

    }
    return 0;
}