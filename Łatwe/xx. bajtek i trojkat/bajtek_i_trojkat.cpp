#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int tests;
    scanf("%d", &tests);

    while(tests--){

        double a, b, c, d;
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

        double result=sqrt((a*a*c+b*b*d)/(d+c)-d*c);

        printf("%.2lf\n", result);


    }
    return 0;
}