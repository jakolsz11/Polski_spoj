#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int tests;
    cin>>tests;

    

    while(tests--){

        int a, b;
        scanf("%d %d", &a, &b);

        int tab[a][b];

        int max=a*b;
        int len=to_string(max).size();
        int k=1;
        int l=0;

        while(k <= max){

            for(int i=l; i<b-l; i++){
                tab[l][i]=k;
                k++;
                if(k>max) break;
            }
            if(k>max) break;

            for(int i=l+1; i<a-l; i++){
                tab[i][b-l-1]=k;
                k++;
                if(k>max) break;
            }
            if(k>max) break;

            for(int i=b-l-2; i>=l; i--){
                tab[a-l-1][i]=k;
                k++;
                if(k>max) break;
            }
            if(k>max) break;
            
            for(int i=a-l-2; i>l; i--){
                tab[i][l]=k;
                k++;
                if(k>max) break;
            }
            if(k>max) break;
            
            l++;

        }

        for(int i=0; i<a; i++){

            for(int j=0; j<b; j++){
                printf("%0*d", len, tab[i][j]);
                if(j != b-1) printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}