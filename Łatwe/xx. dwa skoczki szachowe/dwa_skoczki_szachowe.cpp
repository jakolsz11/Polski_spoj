#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(){

    char litery[8]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    int cyfry[8]={1, 2, 3, 4, 5, 6, 7, 8};

    string pozycja1, pozycja2;
    cin>>pozycja1>>pozycja2;

    char pozycja1x, pozycja2x;
    int pozycja1y, pozycja2y;

    pozycja1x=pozycja1.front();
    pozycja2x=pozycja2.front();

    pozycja1y=stoi(pozycja1.substr(1,1));
    pozycja2y=stoi(pozycja2.substr(1,1));

    if(abs(pozycja1y-pozycja2y)==1 && (pozycja1x+2==pozycja2x || pozycja1x-2==pozycja2x)) cout<<"TAK";
    else if(abs(pozycja1y-pozycja2y)==2 && (pozycja1x+1==pozycja2x || pozycja1x-1==pozycja2x)) cout<<"TAK";
    else cout<<"NIE";
    




    return 0;
}