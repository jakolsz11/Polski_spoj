#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void decTo16(int x);
void decTo11(int y);

int main(){

    int ile;
    int liczba;
    cin>>ile;

    while(ile>0){
        cin>>liczba;
        decTo16(liczba);
        cout<<" ";
        decTo11(liczba);
        cout<<endl;
        ile--;
    }

    return 0;
}

void decTo16(int x){

    string convertedFigure;
    string hexValue;
    int remainder;

    while(x){

        remainder=x%16;
        x=x/16;
        if(remainder>9){

            switch(remainder){

            case 10:
                convertedFigure="A";
                break;
            case 11:
                convertedFigure="B";
                break;
            case 12:
                convertedFigure="C";
                break;
            case 13:
                convertedFigure="D";
                break;
            case 14:
                convertedFigure="E";
                break;
            case 15:
                convertedFigure="F";
                break;
            }
        
            hexValue=hexValue+convertedFigure;
        }
        else{
            string stringRemainder;
            ostringstream convert;
            convert<<remainder;
            stringRemainder=convert.str();
            hexValue = hexValue + stringRemainder;

        }
    }

    for(int i=(hexValue.length()-1); i>=0; i--){
        cout<<hexValue[i];
    }
    hexValue.erase();
}

void decTo11(int y){

    string convertedFigure;
    string eleValue;
    int remainder;
    while(y){
        remainder=y%11;
        y=y/11;
        if(remainder>9){
            switch(remainder){
            case 10:
                convertedFigure="A";
                break;
            }
            eleValue = eleValue + convertedFigure;
        }
        else{
            string stringRemainder;
            ostringstream convert;
            convert<<remainder;
            stringRemainder=convert.str();
            eleValue = eleValue + stringRemainder;
        }
    
        
    }

    for(int i=(eleValue.length()-1); i>=0; i--){
        cout<<eleValue[i];
    }
    eleValue.erase();
}