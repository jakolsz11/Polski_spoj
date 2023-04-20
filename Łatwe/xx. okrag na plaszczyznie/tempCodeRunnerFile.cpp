#include <iostream>

using namespace std;

int delta(float a, float b, float r){

    float delta=(4*a*a-4*(a*a+b*b-r*r));
    if(delta>0) return 2;
    else if(delta==0) return 1;
    else return 0;

}

int main(){

    //std::ios::sync_with_stdio(false);
    float x, y, r;
    scanf("%f %f %f", &x, &y, &r);
    //cin>>x>>y>>r;

    int wynik=0;

    if(x>r) wynik+=0;
    else if(x==r) wynik+=1;
    else{
        //wynik+=delta(y, x, r);
        wynik+=2;
    }

    if(y>r) wynik+=0;
    else if(y==r) wynik+=1;
    else wynik+=2;

    

    //wynik+=delta(x, y, r);

    if((x*x+y*y)==r*r) wynik-=1;

    printf("%d", wynik);
    //cout<<wynik;

    return 0;
}