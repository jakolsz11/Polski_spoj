#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    string haslo="FRAKTAL";

    for(int i=0; i<testy; i++){

        string kod;
        cin>>kod;
        char skok;
        char roznica;
        bool test=true;
        

        if(kod.length() != 7) cout<<"nie\n";
        else{
            skok=kod[0]-haslo[0];

            for(int j=0; j<7; j++){

                if((haslo[j]+skok)>'Z'){
                    roznica=haslo[j]+skok-26;
                    //cout<<roznica;
                    if(roznica != kod[j]){
                        test=false;
                        //cout<<"1\n";
                        break;
                    } 
                }
                else if(haslo[j]+skok<'A'){
                    roznica=haslo[j]+skok+26;
                    //cout<<roznica;
                    if(roznica != kod[j]){
                        test=false;
                        //cout<<"2\n";
                        break;
                    } 
                }
                else{
                    roznica=haslo[j]+skok;
                    //cout<<roznica;
                    if(roznica != kod[j]){
                        test=false;
                        //cout<<"3\n";
                        break;
                    }
                }
            
            }

            if(test==true) cout<<"tak\n";
            else cout<<"nie\n";



        }

        

        



    }
    return 0;
}