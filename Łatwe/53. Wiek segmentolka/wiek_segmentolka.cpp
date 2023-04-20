#include <iostream>

using namespace std;

int main(){

    int ile;

    cin>>ile;

    for(int i=0; i<ile; i++){

        int segmenty, nogi, suma=0;
        cin>>segmenty;
        suma=segmenty-1;

        for(int k=0; k<segmenty; k++){
            cin>>nogi;
            suma+=nogi;
        }

        cout<<suma<<endl;

    }
    return 0;
}