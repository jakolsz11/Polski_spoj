#include <cstdlib>
#include <math.h>
#include <iomanip>

using namespace std;

int NWD(int a, int b){

    int temp;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }

    return a;

}

double Len(double &ax, double &ay, double &bx, double &by, int &z){

    return sqrt(pow(ax-bx, 2)+pow(ay-by, 2))/z;

}

int main(){

    int tests, count;
    scanf("%d", &tests);
    double ax, ay, bx, by;

    while(tests--){

        scanf("%lf%lf%lf%lf", &ax, &ay, &bx, &by);
        count = NWD(abs(ax-bx), abs(ay-by));
        printf("%d %.2lf\n", count, Len(ax, ay, bx, by, count));

    }



    return 0;
}