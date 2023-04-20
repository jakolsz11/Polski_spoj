#include <cstdio>

using namespace std;

int main(){

    int tests, speed;
    scanf("%d %d", &tests, &speed);

    int *nr, *prior, *perc, *siz;
    nr = new int[tests];
    prior = new int[tests];
    perc = new int[tests];
    siz = new int[tests];

    for(int i=0; i<tests; i++){

        scanf("%d %d %d %d", nr[i], prior[i], perc[i], siz[i]);

    }

    



    return 0;
}