#include <iostream>

using namespace std;

int main(){

    string textLine;
    char letterArray[123];

    for(int i=0; i<123; i++){
        letterArray[i]=0;
    }

    int howManyLines;
    cin>>howManyLines;

    while(howManyLines>=0){

        getline(cin, textLine);

        for(int i=0; i<textLine.length(); i++){

            letterArray[textLine[i]]=letterArray[textLine[i]]+1;

        }
        howManyLines--;
    }

    for(int i=97; i<123; i++){
        if(int(letterArray[i]>0)) cout<<char(i)<<" "<<int(letterArray[i])<<endl;
    }
    for(int i=65; i<91; i++){
        if(int(letterArray[i]>0)) cout<<char(i)<<" "<<int(letterArray[i])<<endl;
    }

    return 0;
}