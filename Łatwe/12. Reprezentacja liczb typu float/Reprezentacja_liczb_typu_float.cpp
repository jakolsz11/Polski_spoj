#include <iostream>
#include <bitset>
#include <sstream>

using namespace std;

int ile;

void printfloat(float liczba){
    for (int i = sizeof liczba-1; i>=0; i--){
        std::cout << std::hex << (unsigned int)(((const unsigned char*)(&liczba))[i])<<" ";
    }
}

int main(){

    cin>>ile;

    for(int i=0; i<ile; i++){
        float liczba;
        cin>>liczba;
        printfloat(liczba);        
        cout<<endl;
    }

    return 0;
}