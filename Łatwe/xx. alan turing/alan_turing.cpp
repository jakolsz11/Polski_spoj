#include <iostream>
#include <string>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    string tekst;
    string instrukcja;
    string litera;
    char znak;
    long long liczba;
    int ilosc=0;

    for(int i=0; i<ile; i++){

        cin>>instrukcja>>litera;

        if(instrukcja == "DODAJ"){
            znak= litera[0];
            tekst.push_back(znak);
            ilosc++;
        } 
        else if(instrukcja == "USUN"){
            liczba=stoll(litera);
            if(liczba>=tekst.length()) tekst.clear();
            else{
                tekst.erase(tekst.length()-liczba, liczba);
            }
        }
        else if(instrukcja == "ZAMIEN"){
            if(tekst.length() != 0){
                znak=litera[0];
                tekst[tekst.length()-1]=znak;
            }
            
        }

    }

    cout<<tekst;

    return 0;
}