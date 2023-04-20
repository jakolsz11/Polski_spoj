#include <iostream>

using namespace std;

int main()
{
    string textLine;
    char letterArray[123];
    //LETTERS OF ALPHABET FROM 65 TO 123 ASCII CHAR TABLE
    for(int i=0; i<123; i++)
    {
        letterArray[i] = 0;
    }
    int howManyLines;
    cin>>howManyLines;
    while(howManyLines>=0)
    {
        getline(cin,textLine);
        //COUNTS LETTER INPUTS AS ASCII CHAR TABLE
        for(int i=0; i<textLine.length(); i++)
        {
            letterArray[textLine[i]]=letterArray[textLine[i]]+1;
        }
        howManyLines--;
    }
        //PRINTS LETTER AND COUNTERS
        for(int i=97; i<123; i++)
        {
            if(int(letterArray[i])>0) cout<<char(i)<<" "<<int(letterArray[i])<<endl;
        }
        for(int i=65; i<91; i++)
        {
            if(int(letterArray[i])>0) cout<<char(i)<<" "<<int(letterArray[i])<<endl;
        }
    return 0;
}