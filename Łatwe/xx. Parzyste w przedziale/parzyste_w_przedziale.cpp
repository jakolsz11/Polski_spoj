#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;
    bool test=true;

    for(int i=0; i<testy; i++){

        int a, b;
        cin>>a>>b;
        test=true;

        if(a%2==0){
            a+=2;
            while(a<b){
                test=false;
                cout<<a<<" ";
                a+=2;
            }
        }

        else{
            a+=1;
            while(a<b){
                test=false;
                cout<<a<<" ";
                a+=2;
            }
        }

        if(test==true) cout<<"BRAK";

        cout<<"\n";



    }

    return 0;
}