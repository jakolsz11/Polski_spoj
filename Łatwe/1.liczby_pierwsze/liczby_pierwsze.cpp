#include <iostream>

using namespace std;


int czypierwsza(int a){
    if (a == 1) return false;

    for (int i=2; i<a; i++){
        if (a % i == 0) return false;   
    }

    return true;
}

int main(){

    int ile;
    cin>>ile;
    string wynik;
    

    for(int i=0; i<ile; i++){
        int liczba;
        cin>>liczba;
        
        wynik = czypierwsza(liczba) == true ? "TAK" : "NIE";
        cout<< wynik<<endl;
        
    }


    return 0;
}

