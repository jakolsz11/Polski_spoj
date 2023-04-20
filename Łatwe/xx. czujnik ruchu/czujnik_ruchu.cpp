#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        int ile;
        cin>>ile;

        int a=0, b=0;
        bool test=true;

        for(int j=0; j<ile; j++){

            string czujnik;
            cin>>czujnik;

            if(czujnik == "AI") a++;
            else if(czujnik == "AO") b--;
            else if(czujnik == "BI") b++;
            else if(czujnik == "BO") a--;

            if(a<0 || b<0){
                test=false;
            }

            czujnik.clear();
        }

        if(test==true) cout<<a+b<<"\n";
        else cout<<"ERROR\n";
        

    }




    return 0;
}