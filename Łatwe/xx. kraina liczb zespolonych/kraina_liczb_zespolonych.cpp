#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        long double a;
        scanf("%Lf", &a);

        long double rz, ur;

        rz=cos(log(a));
        ur=sin(log(a));

        printf("%.2Lf %.2Lf\n", rz, ur);


    }

    return 0;
}