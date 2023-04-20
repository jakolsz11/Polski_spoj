#include <iostream>

using namespace std;

int main(){

    string tekst;
    while(getline(cin, tekst)){

        for(int i=0; i<tekst.length(); i++){

            if(tekst[i]>=65 && tekst[i]<=90){

                tekst[i]=tekst[i]+3;

                if(tekst[i]>90){

                    tekst[i]=65+(tekst[i]-90-1);
                    
                }
            }
        }
        cout<<tekst<<endl;
    }
    return 0;
}
