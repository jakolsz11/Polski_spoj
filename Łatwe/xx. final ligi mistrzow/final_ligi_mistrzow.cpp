#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double licz(int n, int x, double team[]){
    
    if(x==0){
        double result=1.0;
        for(int i=0; i<n; i++){
            result*=(1-team[i]/100);
        }
        return result;
    }
    else if(x==5 || x==n){
        double result=1.0;
        for(int i=0; i<n; i++){
            result*=team[i]/100;
        }
        return result;
    }
    else{
        return licz(n-1, x-1, team)*team[n-1]/100+licz(n-1, x, team)*(1-team[n-1]/100);
    }   

}

int main(){

    ios_base::sync_with_stdio(false);
    double real[5];
    double atletico[5];
    double x;

    for(int i=0; i<5; i++){
        scanf("%lf", &real[i]);
    }

    for(int i=0; i<5; i++){
        scanf("%lf", &atletico[i]);
    }
    double result=0;

    for(int i=5; i>=0; i--){
        result+=(licz(5, i, real))*licz(5, i, atletico);
    }

    printf("%.6lf\n", 1-result);

    return 0;
}