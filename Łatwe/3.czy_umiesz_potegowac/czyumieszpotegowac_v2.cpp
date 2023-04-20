#include <iostream>

using namespace std;

int ile, a, b;

int main(){

    cin>>ile;

    for(int i=0; i<ile; i++){

        cin>>a>>b;

        a = a % 10;        

        if (b>0){
            
            if(b%4==0){
                b=4;   
            }

            else{
                b=b%4;
            }
            
            int wynik=a;
            for(int i=1; i<b; i++){
                wynik *= a;
            }

            cout<< wynik%10<<endl;  
        }
        else cout<< "1"<<endl;
    }

    return 0;
}