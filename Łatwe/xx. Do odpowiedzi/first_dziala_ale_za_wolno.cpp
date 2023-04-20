#include <iostream>
#include <vector>

using namespace std;

void findPrimes(bool *tab, int n){

    int counter=0;
    int i=2;
    while(counter != n){
        if(!tab[i]){
            for(int j=i*i; j<=9999999; j+=i){
                tab[j]=1;
            }
            counter++;
        }
        i++;
    }


}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests, n, max=0;
    bool *tab;
    vector <int> prim;
    cin>>tests;

    while(tests--){
        cin>>n;
        if(n>max){
            prim.clear();
            tab = new bool [10000000];
            for(int i=0; i<10000000; i++){
                tab[i]=0;
            }
            findPrimes(tab, n);
            int counter=0;
            int i=2;
            while(counter != n){
                if(!tab[i]){
                    prim.push_back(i);
                    counter++;
                }
                i++;
            }
            max=n;
        }

        int i, j, k;
        vector <int> v;

        if(n<4){
            cout<<"1\n";
            continue;
        }
        else{
            for(i=1; i<=n; i++){
                v.push_back(i);
            }
            for(i=j=0; i<n-1; i++){
                k=prim[i]-1+j;
                k%=v.size();
                v.erase(v.begin()+k);
                j=k;
                j%=v.size();
            }
            cout<<v[0]<<"\n";
        }
        

        delete [] tab;


    }

    
    return 0;
}