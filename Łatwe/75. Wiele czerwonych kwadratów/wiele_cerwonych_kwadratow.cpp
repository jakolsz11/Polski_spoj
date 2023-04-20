#include <iostream>
#include <math.h>

using namespace std;

int main(){

    long long x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    long long suma=0;
    int licznik=0;
    int licznik_drugi=0;
    bool test=false;

    if(y1%2 == 0){

        
        for(long long i=y1+2; i<=y2; i+=2){

            if(i<=x2 && i>x1){
                suma+=(i-x1);
                licznik++;
                //if((i-x1) != 1) test=true;
            }
            else if(i>x1 && i>=x2){
                suma+=(x2-x1);
                licznik++;
                //if((x2-x1) != 1) test=true;
            }
            //if(test==true) licznik++;
            //test=false;
        }
        
        
    }

    if(y1%2 != 0){

        for(long long i=y1+1; i<=y2; i+=2){

            if(i<=x2 && i>x1){
                suma+=(i-x1);
                licznik++;
                //if((i-x1) != 1) test=true;
            }
            else if(i>x1 && i>=x2){
                suma+=(x2-x1);
                licznik++;
                //if((x2-x1) != 1) test=true;
            }
            //if(test==true) licznik++;
            //test=false;
        }
        
        
    }

    if(x1%2 == 0){

        
        for(long long i=x1+2; i<=x2; i+=2){

            if(i<=y2 && i>y1){
                suma+=(i-y1);
                licznik_drugi++;
                //if((i-y1) != 1) test=true;
            }
            else if(i>y1 && i>=y2){
                suma+=(y2-y1);
                licznik_drugi++;
                //if((y2-y1) != 1) test=true;
            }
            //if(test==true) licznik++;
            //test=false;
        }
        
        
    }

    if(x1%2 != 0){

        for(long long i=x1+1; i<=x2; i+=2){

            if(i<=y2 && i>y1){
                suma+=(i-y1);
                licznik_drugi++;
                //if((i-y1) != 1) test=true;
            }
            else if(i>y1 && i>=y2){
                suma+=(y2-y1);
                licznik_drugi++;
                //if((y2-y1) != 1) test=true;
            }
            //if(test==true) licznik++;
            //test=false;
        }
        
    }
    //cout<<suma<<endl;
    if(licznik != licznik_drugi && licznik != 0 && licznik_drugi != 0){
        if(licznik<licznik_drugi) suma-=licznik;
        else suma-=licznik_drugi;
    }
    else if(licznik != 0 && licznik_drugi != 0) suma-=licznik;
    cout<<suma;
    //cout<<" "<<licznik<<" "<<licznik_drugi;

    return 0;
}