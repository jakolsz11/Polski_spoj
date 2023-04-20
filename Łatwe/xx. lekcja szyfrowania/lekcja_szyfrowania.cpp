#include <iostream>

using namespace std;

int main(){

    string linia;

    while(getline(cin, linia)){

        for(int i=0; i<linia.length(); i++){

            if(linia[i]>='A' && linia[i]<='Z'){
                linia[i]-=16;
                //cout<<linia[i]<<" ";

                if(linia[i]<'A'){
                    linia[i]+=26;
                    cout<<linia[i];
                }
                else cout<<linia[i];
            }
            else cout<<linia[i];
            



        }

        cout<<"\n";
    }
    return 0;
}