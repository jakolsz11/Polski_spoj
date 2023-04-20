#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testy, ile, i, j;
    long long suma_left=0;
    long long suma_right=0;
    int *tab;
    cin>>testy;

    while(testy--){

        cin>>ile;

        tab = new int [ile];
        suma_left=0;
        suma_right=0;


        for(i=0; i<ile; i++){

            cin>>tab[i];
            suma_left+=tab[i];

        }


        for(j=0; j<ile-1; j++){

            suma_right+=tab[j];
            suma_left-=tab[j];

            if(suma_left == suma_right){
                break;
            }

        }

        if(j==ile-1) cout<<"0\n";
        else cout<<j+1<<"\n";

        delete [] tab;

    }
    return 0;
}