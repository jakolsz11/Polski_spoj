#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    int wynik=0;
    int max=0;

    for(int i=0; i<testy; i++){
        
        string zadanie;
        cin>>zadanie;

        if(zadanie == "for"){
            wynik++;
            if(wynik>max) max=wynik;
        }
        else if(zadanie == "end") wynik--;

        zadanie.clear();   

    }

    if(max==0) cout<<"O(1)\n";
    else if(max==1) cout<<"O(n)\n";
    else cout<<"O(n^"<<max<<")\n";

    return 0;
}