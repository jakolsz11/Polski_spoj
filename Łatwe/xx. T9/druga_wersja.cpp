#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        string tekst, numer;
        cin>>tekst>>numer;
        string znaki[11];
        znaki[0]="0";
        znaki[1]="1";
        znaki[2]="2 a b c A B C";
        znaki[3]="3 d e f D E F";
        znaki[4]="4 g h i G H I";
        znaki[5]="5 j k l J K L";
        znaki[6]="6 m n o M N O";
        znaki[7]="7 p q r s P Q R S";
        znaki[8]="8 t u v T U V";
        znaki[9]="9 w x y z W X Y Z";
        znaki[10]="0 1 2 3 4 5 6 7 8 9";


        if(tekst.length() != numer.length()) cout<<"NIE\n";
        else{

            bool test=true;
        
            

            for(int j=0; j<tekst.length(); j++){

                int ilosc=0;

                for(int m=0; m<znaki[numer[j]-48].length(); m++){

                    if(numer[j]=='*' && tekst[j]>='0' && tekst[j]<='9') continue; 
                    else if(znaki[numer[j]-48][m] == tekst[j]){
                        ilosc=1;
                        break;
                    } 
    
                }

                if(ilosc==0){
                    cout<<"NIE\n";
                    test=false;
                    break;
                } 

                
            }

            if(test==true) cout<<"TAK - "<<tekst;
        }

    }
    return 0;
}