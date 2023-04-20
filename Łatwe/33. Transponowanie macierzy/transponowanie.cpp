#include <iostream>

using namespace std;

int main(){

    int m, n, liczba;
    cin>>m>>n;

    int tab[m][n];
    int wynik[n][m];

    for(int i=0; i<m; i++){
        for(int k=0; k<n; k++){
            cin>>liczba;
            tab[i][k]=liczba;
        }
    }

    for(int i=0; i<n; i++){
        for(int k=0; k<m; k++){
            wynik[i][k]=tab[k][i];
            cout<<wynik[i][k]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}