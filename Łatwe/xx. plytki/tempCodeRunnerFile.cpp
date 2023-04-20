#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        int a, b;
        cin>>a>>b;

        if(a<b) swap(a, b);


        //char tab[x][y];

        for(int m=0; m<a; m++){

            for(int n=0; n<b; n++){

                if((m+n)%2 == 0) cout<<"B";
                else cout<<"W";

            }

            cout<<"\n";
        }



    }
    return 0;
}