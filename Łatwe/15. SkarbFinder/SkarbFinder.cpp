#include <iostream>

using namespace std;

int ile;

int main(){

    cin>>ile;

    for(int i=0; i<ile; i++){

        int ile_wskazowek;
        cin>>ile_wskazowek;

        int pion=0, poziom=0;
        int kierunek;
        int kroki;

        for(int k=0; k<ile_wskazowek; k++){
            cin>>kierunek>>kroki;
            if(kierunek==0) pion=pion+kroki;   //polnoc
            if(kierunek==1) pion=pion-kroki;    //poludnie
            if(kierunek==2) poziom=poziom+kroki; //zachod
            if(kierunek==3) poziom=poziom-kroki;  //wschod
        }

        if(pion==0 && poziom==0) cout<<"studnia";
        else if (poziom==0){
            if(pion>0) cout<<"0"<<" "<<pion<<endl;
            else cout<<"1"<<" "<<-pion<<endl;
        }
        else if(pion==0){
            if(poziom>0) cout<<"2"<<" "<<poziom<<endl;
            else cout<<"3"<<" "<<-poziom<<endl;
        }
        else{
            if(pion>0) cout<<"0"<<" "<<pion<<endl;
            else cout<<"1"<<" "<<-pion<<endl;

            if(poziom>0) cout<<"2"<<" "<<poziom<<endl;
            else cout<<"3"<<" "<<-poziom<<endl;
        }

    }
    return 0;
}

