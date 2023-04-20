#include <iostream>
#include <math.h>

using namespace std;

int main(){

    string l1, l2, l3, l4;
    cin>>l1>>l2>>l3>>l4;

    int liczba1=0, liczba2=0, liczba3=0, liczba4=0;

    int d1, d2, d3, d4;

    d3=l3.length();
    d1=l1.length();
    d2=l2.length();
    d4=l4.length();
    int nr=0;

    for(int i=d3-1; i>=0; i--){

        if(l3[i] == '1') liczba3+=pow(2, nr);
        nr++;

    }

    nr=0;

    for(int i=d1-1; i>=0; i--){

        if(l1[i] == '1') liczba1+=pow(2, nr);
        nr++;

    }

    nr=0;

    for(int i=d2-1; i>=0; i--){

        if(l2[i] == '1') liczba2+=pow(2, nr);
        nr++;

    }

    nr=0;

    for(int i=d4-1; i>=0; i--){

        if(l4[i] == '1') liczba4+=pow(2, nr);
        nr++;

    }

    cout<<liczba1<<liczba2<<":"<<liczba3<<liczba4;





    return 0;
}