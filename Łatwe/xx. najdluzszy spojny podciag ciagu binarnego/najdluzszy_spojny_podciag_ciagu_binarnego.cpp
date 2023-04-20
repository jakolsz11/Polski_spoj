#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int max, x, y, n, k, tests, start, end;
    char z;
    cin>>tests;

    while(tests--){

        max = x = y = start = end = 0;
        cin>>n>>k;
        int *tab = new int[n];

        for(int i=0; i<n; i++){
            cin>>z;

            if(z == '0'){
                x++;
            }
            else if(y<k){
                x++;
                y++;
                tab[end++]=i;
            }
            else{
                if(x>max){
                    max=x;
                }
                x=i-tab[start++];
                tab[end++]=i;
            }

        }
        if(x>max){
            max=x;
        }

        cout<<max<<"\n";

        delete [] tab;

    }

    return 0;
}