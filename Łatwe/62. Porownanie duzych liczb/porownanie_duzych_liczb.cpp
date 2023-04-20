#include <iostream>

using namespace std;

int main(){

    string num1, num2;
    char znak, znak2;
    

    while(cin>>num1>>znak>>znak2>>num2){
        
        int dlugosc1=num1.length();
        int dlugosc2=num2.length();
        int dlugosc;

        if(dlugosc1<=dlugosc2) dlugosc=dlugosc1;
        else dlugosc=dlugosc2;

        int liczba1[dlugosc1], liczba2[dlugosc2];

        for(int i=0; i<dlugosc1; i++){
            liczba1[i]=num1[i];
        }

        for(int i=0; i<dlugosc2; i++){
            liczba2[i]=num2[i];
        }

        int prawda;

        switch(znak){
            case '=':

                if(dlugosc1 != dlugosc2) cout<<"0"<<endl;
                else{
                    for(int i=0; i<dlugosc; i++){
                        if(liczba1[i] != liczba2[i]){
                            prawda=1;
                            break;
                        }   
                    }
                    if(prawda==1) cout<<"0"<<endl;
                    else cout<<"1"<<endl;
                    prawda=0;
                }
                break;

            case '!':

                if(dlugosc1 != dlugosc2) cout<<"1"<<endl;
                else{
                    for(int i=0; i<dlugosc; i++){
                        if(liczba1[i] != liczba2[i]){
                            prawda=1;
                            break;
                        }   
                    }
                    if(prawda==1) cout<<"1"<<endl;
                    else cout<<"0"<<endl;
                    prawda=0;
                }
                break;
            
            case '>':

                if(dlugosc1 > dlugosc2) cout<<"1"<<endl;
                else{
                    for(int i=0; i<dlugosc; i++){
                        if(liczba1[i] < liczba2[i]){
                            prawda=1;
                            break;
                        }
                        
                    }
                    if(prawda==1) cout<<"0"<<endl;
                    else cout<<"1"<<endl;
                    prawda=0;
                }
                break;

            case '<':

                if(dlugosc1 < dlugosc2) cout<<"1"<<endl;
                else{
                    for(int i=0; i<dlugosc; i++){
                        if(liczba1[i] > liczba2[i]){
                            prawda=1;
                            break;
                        }
                        
                    }
                    if(prawda==1) cout<<"0"<<endl;
                    else cout<<"1"<<endl;
                    prawda=0;
                }
                break;
        
        }
 
    }

    return 0;
}