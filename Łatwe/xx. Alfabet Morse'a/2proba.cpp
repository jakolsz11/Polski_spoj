#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){

    const map<char, string> kMorseCode{
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
        {'F', ".-.."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
        {'K', "-.-"}, {'L', "..-."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
        {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
        {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
        {'Z', "--.."}, {' ', "/"}
    };

    const char kAfterLetter{'/'};

    string line;

    while(getline(cin, line)){
        
        for(char character : line){
            cout<<kMorseCode.at(static_cast<char>(toupper(character)));
            if(isalpha(character)) cout<<kAfterLetter;
        }
        cout<<"\n";
    }

    return 0;
}