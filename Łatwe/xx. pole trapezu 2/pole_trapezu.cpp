#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    long double p1, p2;

    //scanf("%Lf %Lf", &p1, &p2)

    while(scanf("%Lf %Lf", &p1, &p2) == 2){

        long double p3, P;

        p3 = ((p2/p1)*(p2/p1))*p1;

        P = p1 + 2*p2 + p3;

        printf("%.2Lf\n", P);

    }

    return 0;
}
