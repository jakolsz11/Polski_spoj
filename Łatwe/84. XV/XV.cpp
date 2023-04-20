#include <iostream>

using namespace std;

int main(){

    string liczba;

    while(cin>>liczba){

        if(liczba[0] == '0') break;

        if(liczba[liczba.length()-1] != '0' && liczba[liczba.length()-1] != '5') cout<<"NIE"<<endl;

        else{
            int suma;

            for(int i=0; i<liczba.length(); i++){
                if(suma>=3){
                    int ile=suma/3;
                    suma-=(3*ile);
                }
                suma+=liczba[i]-48;
            }

            if(suma%3 == 0)cout<<"TAK"<<endl;
            else cout<<"NIE"<<endl;
            suma=0;
        }
        
    }
    return 0;
}