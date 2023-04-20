#include <iostream>
#include <math.h>

//Ten kod nie dziala

using namespace std;

void drawUnderLine(int x, int* j){

    for(int i=0; i<x; i++){
        cout<<"_";
    }
    *j+=x;

}

void drawSpace(int x, int* j){

    for(int i=0; i<x; i++){
        cout<<" ";
    }
    *j+=x;

}

void draw(int n){

    for(int i=0; i<n; i++){

        for(int j=0; j<pow(3, n-1); j){

            //cout<<j<<"\n";
            if((j+1)%2 == 1) drawUnderLine(pow(3, n-1-i), &j);
            else{
                drawSpace(pow(3, n-1-i), &j);
            } 

        }

        cout<<"\n";

    }

    cout<<"\n";

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests;
    cin>>tests;

    while(tests--){

        int n;
        cin>>n;

        draw(n);




    }
    return 0;
}

