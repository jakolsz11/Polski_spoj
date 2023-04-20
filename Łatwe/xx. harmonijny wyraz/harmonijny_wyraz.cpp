#include <iostream>

using namespace std;

int main(){

    string linia;
    cin>>linia;
    long samogloska=-1;
    long zmiana=0;

    for(long i=0; i<linia.length(); i++){

        if(linia[i]=='A' || linia[i]=='E' || linia[i]=='I' || linia[i]=='O' || linia[i]=='U' || linia[i]=='Y'){
            if(samogloska==1){
                zmiana++;
                samogloska=0;
            }
            else samogloska=1;
        }
        else{
            if(samogloska == 0){
                zmiana++;   
                samogloska=1;
            }
            else samogloska=0;
        }

    }

    long min=zmiana;
    //cout<<min<<"\n";
    zmiana=0;
    long sam=-1;

    for(long i=linia.length()-1; i>=0 ; i--){

        if(linia[i]=='A' || linia[i]=='E' || linia[i]=='I' || linia[i]=='O' || linia[i]=='U' || linia[i]=='Y'){
            if(sam==1){
                zmiana++;
                sam=0;
            }
            else sam=1;
        }
        else{
            if(sam == 0){
                zmiana++;
                sam=1;
            }
            else sam=0;
        }

    }

    if(zmiana<min) min=zmiana;

    cout<<min<<"\n";
    return 0;
}