#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    int a, b;
    cin>>a>>b;

    char rywal[8][8];
    char znaj[8][8];

    for(int i=0; i<8; i++){

        for(int j=0; j<8; j++){

            rywal[i][j]='0';
            znaj[i][j]='0';

        }
    }

    string wsp[a];

    for(int i=0; i<a; i++){
        
        
        char figura[a];
        string pozycja[a];
        
        cin>>figura[i]>>pozycja[i];
        wsp[i].push_back(figura[i]);
        wsp[i]+=pozycja[i];

        int x, y;
        x=8-stoi(wsp[i].substr(2, 1));
        y=(wsp[i][1]-97);

        //cout<<x<<" "<<y<<"\n";

        rywal[x][y]=wsp[i][0];


    }

    string wspb[b];

    for(int i=0; i<b; i++){
        
        
        char figura[b];
        string pozycja[b];
        
        cin>>figura[i]>>pozycja[i];
        wspb[i].push_back(figura[i]);
        wspb[i]+=pozycja[i];

        int x, y;
        x=8-stoi(wspb[i].substr(2, 1));
        y=(wspb[i][1]-97);

        //cout<<x<<" "<<y<<"\n";

        znaj[x][y]=wspb[i][0];


    }

    

    for(int i=0; i<8; i++){

        for(int j=0; j<8; j++){

            cout<<znaj[i][j];
            
        }
        cout<<"\n";
    }

    sort(wspb, wspb+b);

    for(int i=0; i<b; i++){

        cout<<wspb[i][0]<<" "<<wspb[i][1]<<wspb[i][2]<<"\n";

    }


    for(int i=0; i<8; i++){

        for(int j=0; j<8; j++){

            cout<<rywal[i][j];
            
        }
        cout<<"\n";
    }

    sort(wsp, wsp+a);

    for(int i=0; i<a; i++){

        cout<<wsp[i][0]<<" "<<wsp[i][1]<<wsp[i][2]<<"\n";

    }

    return 0;
}