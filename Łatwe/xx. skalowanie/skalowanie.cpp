#include <iostream>
#include <string>

using namespace std;

int main(){

    string napis;
    cin>>napis;

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        int skala;
        cin>>skala;

        if(skala==0) cout<<napis.back(); 
        else if(skala>0){
            for(int j=0; j<napis.length(); j++){
                cout<<napis[j];
                if(j != napis.length()-1){
                    for(int m=0; m<skala-1; m++){
                        cout<<" ";
                    }
                }
            }
            
                
        }

        else if(skala<0){
            skala*=-1;
            for(int j=napis.length()-1; j>=0; j--){
                cout<<napis[j];
                if(j != 0){
                    for(int m=0; m<skala-1; m++){
                        cout<<" ";
                    }
                }
            }
            
        }

        if(i != testy-1)cout<<"\n";



    }
    return 0;
}