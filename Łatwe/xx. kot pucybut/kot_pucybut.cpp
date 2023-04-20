#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){

    int tests, wi, li, wj, lj, len;
    scanf("%d", &tests);

    while(tests--){

        scanf("%d %d %d %d", &wi, &li, &wj, &lj);

        len = abs(lj-li)-1;

        if(len%3==0){
            (wi>wj) ? printf("%d\n", 0) : printf("%d\n", 1);
        }
        else{
            (wi>wj) ? printf("%d\n", 1) : printf("%d\n", 0);
        }

    }
    return 0;
}