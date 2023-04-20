#include <iostream>
#include <map>
#include <vector>

using namespace std;

map <int, bool> primes;

void sieve(bool *tab, int n){

    for(int i=2; i*i<=n; i++){
        if(!tab[i]){
            primes[i]=false;
            for(int j=i*i; j<=n; j+=i){
                tab[j] = true;
                primes[j]=true;
            }
        }
    }

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    scanf("%d", &n);

    vector <int> numbers;
    int max=0;

    for(int i=0; i<n; i++){

        int a;
        scanf("%d", &a);
        numbers.push_back(a);
        if(a>max) max=a;

    }

    bool *tab;
    tab = new bool [max+1];
    
    primes[0] = true;
    primes[1] = true;

    for(int i=2; i<=max; i++){
        tab[i]=false;
    }

    sieve(tab, max);

    for(int i=0; i<n; i++){
        if(primes[numbers[i]]==false) printf("TAK\n");
        else printf("NIE\n");
    }

    delete []tab;

    return 0;
}