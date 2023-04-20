#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int l1, l2;
    string l3, l4;
    cin>>l1>>l2>>l3>>l4;

    int liczba3=0, liczba4=0;

    int d3, d4;

    d3=l3.length();
    d4=l4.length();
    int nr=0;

    for(int i=d3-1; i>=0; i--){

        if(l3[i] == '1') liczba3+=pow(2, nr);
        nr++;

    }

    nr=0;

    for(int i=d4-1; i>=0; i--){

        if(l4[i] == '1') liczba4+=pow(2, nr);
        //cout<<liczba4<<endl;
        nr++;

    }

    cout<<l1<<l2<<":"<<liczba3<<liczba4;





    return 0;
}

//pewnie wszystko w binarnym