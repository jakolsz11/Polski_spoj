#include <iostream>
#include <string>

using namespace std;

bool samogloska(char wartosc){

    if(wartosc == 65) return true; //A
    else if(wartosc == 69) return true; //E
    else if(wartosc == 73) return true; //I
    else if(wartosc == 79) return true; //O
    else if(wartosc == 85) return true; //U
    else if(wartosc == 89) return true; //Y
    else if(wartosc == 97) return true; //a
    else if(wartosc == 101) return true; //e
    else if(wartosc == 105) return true; //i
    else if(wartosc == 111) return true; //o
    else if(wartosc == 117) return true; //u
    else if(wartosc == 121) return true; //y
    else return false;

}

int main(){

    int ile;
    cin>>ile;

    string text;

    cin>>text;

    

    int length=text.length();

    if(ile>=length) cout<<text;
    else{

        bool wypisz;
        int ilosc=0;
        int nr=0;
        int length_three;
        while(ilosc != ile){
            cout<<nr<<" ";
            if(isalpha(text[nr])){
                if(samogloska(text[nr]) == false) ilosc++;
            }
            length_three=nr+1;
            if(nr+1 == length) break;
            
            nr++;
            cout<<nr<<" "<<ilosc<<" "<<length<<endl;
        }

        text.erase(length_three+1, length-length_three);

        length=text.length();

        int length_sec=text.length();

        for(int i=0; i<length; i++){
            if(text[length-1-i] == '_') text.erase(length-1-i, 1);
            length_sec=text.length();
            if(length_sec == ile){
                cout<<text;
                wypisz == false;
                break;
            }
        }

        length=text.length();

        for(int i=0; i<length; i++){
            if(isdigit(text[length-1-i])) text.erase(length-1-i, 1);
            length_sec=text.length();
            if(length_sec == ile){
                cout<<text;
                wypisz == false;
                break;
            }
        }

        length=text.length();
        
        bool pierwsza=true;

        for(int i=0; i<length; i++){

            bool test=samogloska(text[i]);
            if(test==true){
                if(pierwsza==false){
                    text.erase(i, 1);
                    i--;   
                } 
                else if(pierwsza==true) pierwsza=false;
            }

            length_sec=text.length();
            if(length_sec == ile){
                cout<<text;
                wypisz == false;
                break;
            }
            else wypisz == true;
        }

        length=text.length();

       /* for(int i=0; i<length-1; i++){
            if(isalpha(text[length-2-i]) || text[length-2-i] == '$'){
                text.erase(length-2-i, 1);
            } 
            length_sec=text.length();
            if(length_sec == ile){
                cout<<text;
                break;
            }
            
        }*/

        //problem z czasem na duzych testach
        
        
        if(wypisz == true){
            text.erase(ile-1, length-ile);
            cout<<text;
        }
    }    
    return 0;
}