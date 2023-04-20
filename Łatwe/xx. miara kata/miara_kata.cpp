#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int tests;
    scanf("%d", &tests);


    while(tests--){

        int hour, minu;
        scanf("%d:%d", &hour, &minu);

        hour%=12;

        float th=hour*30+minu*0.5;
        float tm=minu*6;

        float radius=max(th, tm)-min(th, tm);

        if(radius>180) radius=360-radius;

        printf("%.1f\n", radius);

    }
    return 0;
}