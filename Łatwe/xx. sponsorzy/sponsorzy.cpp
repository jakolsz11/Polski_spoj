#include <cstdio>

using namespace std;

long long Power(long long a, long long x, long long m){
    //printf("%ld\n", x);
    if (x == 0) return 1 % m;
    long long res = Power(a*a % m, x/2, m);
    //printf("%ld. %ld\n", x, res);
    if (x % 2 == 1) res = res*a % m;
    //printf("%ld, %ld\n", x, res);
    return res;
    
}

int main(){
    int tests, n, m, a, x;
    long long result=1;
    scanf("%d", &tests);

    while(tests--){
        scanf("%d%d", &n, &m);

        result = 1;

        for(int i=0; i<n; i++){
            scanf("%d%d", &a, &x);
            result = result*Power(a, x, m) % m;
        }

        if(result==0) printf("TAK\n");
        else printf("NIE\n");        

    }

    return 0;
}