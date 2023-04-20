#include <iostream>
#include <string>

using namespace std;

int main(){

    string linia="";

    while(getline(cin, linia)){

        int dlugosc=linia.length();

        
        
        for(int i=0; i<dlugosc; i++){

            

            if(linia[i]=='A' || linia[i]=='a') cout<<".-/";
            else if(linia[i]=='B' || linia[i]=='b') cout<<"-.../";
            else if(linia[i]=='C' || linia[i]=='c') cout<<"-.-./";
            else if(linia[i]=='D' || linia[i]=='d') cout<<"-../";
            else if(linia[i]=='E' || linia[i]=='e') cout<<"./";
            else if(linia[i]=='F' || linia[i]=='f') cout<<".-../";
            else if(linia[i]=='G' || linia[i]=='g') cout<<"--./";
            else if(linia[i]=='H' || linia[i]=='h') cout<<"..../";
            else if(linia[i]=='I' || linia[i]=='i') cout<<"../";
            else if(linia[i]=='J' || linia[i]=='j') cout<<".---/";
            else if(linia[i]=='K' || linia[i]=='k') cout<<"-.-/";
            else if(linia[i]=='L' || linia[i]=='l') cout<<"..-./";
            else if(linia[i]=='M' || linia[i]=='m') cout<<"--/";
            else if(linia[i]=='N' || linia[i]=='n') cout<<"-./";
            else if(linia[i]=='O' || linia[i]=='o') cout<<"---/";
            else if(linia[i]=='P' || linia[i]=='p') cout<<".--/";
            else if(linia[i]=='Q' || linia[i]=='q') cout<<"--.-/";
            else if(linia[i]=='R' || linia[i]=='r') cout<<".-./";
            else if(linia[i]=='S' || linia[i]=='s') cout<<".../";
            else if(linia[i]=='T' || linia[i]=='t') cout<<"-/";
            else if(linia[i]=='U' || linia[i]=='u') cout<<"..-/";
            else if(linia[i]=='V' || linia[i]=='v') cout<<"...-/";
            else if(linia[i]=='W' || linia[i]=='w') cout<<".--/";
            else if(linia[i]=='X' || linia[i]=='x') cout<<"-..-/";
            else if(linia[i]=='Y' || linia[i]=='y') cout<<"-.--/";
            else if(linia[i]=='Z' || linia[i]=='z') cout<<"--../";
            else if(linia[i]==' ') cout<<"/";

        }
        cout<<"\n";

    }
    return 0;
}