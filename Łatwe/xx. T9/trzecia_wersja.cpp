#include <iostream>

using namespace std;

int main(){

    int tests;
    cin>>tests;

    while(tests--){

        string text;
        int number;

        cin>>text>>number;
        bool test=true;

        for(int i=text.size()-1; i>=0; i--){

            char sign;
            sign=text[i];

            sign=toupper(sign);
            //cout<<sign<<" ";

            if(sign=='1' || sign=='*'){
                if(number%10 != '1'){
                    test=false;
                    break;
                } 
            }
            else if(sign=='0' || sign=='*'){
                if(number%10 != '0'){
                    test=false;
                    break;
                } 
            }
            else if((sign>='A' && sign<='C') || sign=='2' || sign=='*'){
                if(number%10 != 2){
                    test=false;
                    break;
                } 
            }
            else if((sign>='D' && sign<='F') || sign=='3' || sign=='*'){
                if(number%10 != 3){
                    test=false;
                    break;
                } 
            }
            else if((sign>='G' && sign<='I') || sign=='4' || sign=='*'){
                if(number%10 != 4){
                    test=false;
                    break;
                } 
            }
            else if((sign>='J' && sign<='L') || sign=='5' || sign=='*'){
                if(number%10 != 5){
                    test=false;
                    break;
                } 
            }
            else if((sign>='M' && sign<='O') || sign=='6' || sign=='*'){
                if(number%10 != 6){
                    test=false;
                    break;
                } 
            }
            else if((sign>='P' && sign<='S') || sign=='7' || sign=='*'){
                if(number%10 != 7){
                    test=false;
                    break;
                } 
            }
            else if((sign>='T' && sign<='V') || sign=='8' || sign=='*'){
                if(number%10 != 8){
                    test=false;
                    break;
                } 
            }
            else if((sign>='W' && sign<='Z') || sign=='9' || sign=='*'){
                if(number%10 != 9){
                    test=false;
                    break;
                } 
            }

            number/10;

        }

        if(test==true) cout<<"TAK - "<<text<<"\n";
        else cout<<"NIE\n";

    }
    return 0;
}