#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        string godzina;
        cin>>godzina;

        int hour=stoi(godzina.substr(0, 2));
        int min=stoi(godzina.substr(3, 2));

        //cout<<hour<<" "<<min<<"\n";

        if(min != 59) min+=1;
        else{
            min=0;
            if(hour != 24) hour+=1;
            else{
                hour=0;
            }
        }

        if(hour==0){
            hour=1;
            min=0;
        }
        

        while(min%hour != 0){

            if(hour==0){
                hour=1;
                min=0;
            }
            else if(min != 59) min+=1;
            else{
                min=0;
                if(hour != 24) hour+=1;
                else{
                    hour=0;
                }
            }
            //cout<<hour<<" "<<min<<"\n";

        }

        if(hour<10) cout<<"0"<<hour<<":";
        else cout<<hour<<":";

        if(min<10) cout<<"0"<<min<<"\n";
        else cout<<min<<"\n";



    }
    return 0;
}