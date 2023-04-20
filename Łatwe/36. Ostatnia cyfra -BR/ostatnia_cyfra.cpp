#include <iostream>
#include <string>

using namespace std;





int main(){

    string liczba;
    cin>>liczba;

    int dlugosc;
    dlugosc=liczba.length();

    cout<<liczba[dlugosc-1];



    return 0;
}