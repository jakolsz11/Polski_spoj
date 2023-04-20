#include <iostream>

using namespace std;

string napis;
int ile;

int main(){

    cin>>ile;

    for(int i=0; i<ile; i++){

        cin>>napis;

        int dlugosc;

        dlugosc=napis.length();

        int ilosc=1;

        for(int j=0; j<dlugosc; j++){


            if(napis[j] != napis[j+1]){

                cout<<napis[j];

                if(ilosc==2){
                    cout<<napis[j];
                    ilosc=1;
                }

                else if(ilosc>=3){
                    cout<<ilosc;
                    ilosc=1;
                }
            }
            else{
                ilosc++;
            }

        }

        cout<<"\n";


    }

    system("pause");

    return 0;
}