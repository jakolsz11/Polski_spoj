#include <iostream>

using namespace std;

int main(){

    string linia;

    while(getline(cin, linia)){

        int dlugosc=linia.length();

        for(int i=0; i<dlugosc; i++){

            //DUZE LITERY
            if(linia[i]>=65 && linia[i]<=77){
                linia[i]+=13;
                cout<<linia[i];
            }

            else if(linia[i]>=78 && linia[i]<=90){
                linia[i]-=13;
                cout<<linia[i];
            }

            //male litery
            else if(linia[i]>=97 && linia[i]<=109){
                linia[i]+=13;
                cout<<linia[i];
            }

            else if(linia[i]>=110 && linia[i]<=122){
                linia[i]-=13;
                cout<<linia[i];
            }

            //cyfry
            else if(linia[i]>=48 && linia[i]<=52){
                linia[i]+=5;
                cout<<linia[i];
            }

            else if(linia[i]>=53 && linia[i]<=57){
                linia[i]-=5;
                cout<<linia[i];
            }

            else{
                cout<<linia[i];
            }
        }

        cout<<endl;
    }
    return 0;
}