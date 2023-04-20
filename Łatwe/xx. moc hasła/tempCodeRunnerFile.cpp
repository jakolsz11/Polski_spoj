#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        string haslo;
        cin>>haslo;

        bool test=0;
        bool test1=0;
        bool test2=0;
        bool test3=0;

        int dlugosc=haslo.length();

        if(dlugosc<8) break;
        else{

            for(int j=0; j<dlugosc; j++){

                if((haslo[j]>=32 && haslo[j]<=47) || (haslo[j]>=58 && haslo[j]<=64) || (haslo[j]>=91 && haslo[j]<=96) || 
                (haslo[j]>=123 && haslo[j]<=126)) test=true;

                else if(haslo[j]>=97 && haslo[j]<=122) test1=true;
                else if(haslo[j]>=65 && haslo[j]<=90) test2=true;
                else if(haslo[j]>=48 && haslo[j]<=57) test3=true;

            }

        }

        if(test==true && test1==true && test2==true && test3==true) cout<<haslo<<"\n";
    }
    return 0;
}