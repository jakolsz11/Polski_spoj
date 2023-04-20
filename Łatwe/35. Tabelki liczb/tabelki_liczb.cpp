#include <iostream>

using namespace std;

int main(){
    
    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        int a, b, n;
        cin>>a>>b;
        int tab[a][b];

        for(int j=0; j<a; j++){
            for(int k=0; k<b; k++){
                cin>>n;
                tab[j][k]=n;
            }
        }

        int rogi[4];
        rogi[0]=tab[0][0];
        rogi[1]=tab[a-1][0];
        rogi[2]=tab[a-1][b-1];
        rogi[3]=tab[1][b-1];

        for(int j=0; j<b-1; j++){
            tab[0][j]=tab[0][j+1];
        }

        for(int j=a-1; j>0; j--){
            tab[j][0]=tab[j-1][0];
        }

        for(int j=b-1; j>0; j--){
            tab[a-1][j]=tab[a-1][j-1];
        }

        for(int j=0; j<a-1; j++){
            tab[j][b-1]=tab[j+1][b-1];
        }

        tab[1][0]=rogi[0];
        tab[a-1][1]=rogi[1];
        tab[a-2][b-1]=rogi[2];
        tab[0][b-1]=rogi[3];

        for(int j=0; j<a; j++){
            for(int k=0; k<b; k++){
                cout<<tab[j][k]<<" ";
            }
            cout<<endl;
        }



    }
    return 0;
}