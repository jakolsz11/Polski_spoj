#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;
    const double eps = 10e-9;

    for(int i=0; i<ile; i++){

        long double tab_x[50000];
        long double tab_y[50000];

        int testy;
        cin>>testy;

        for(int j=0; j<testy; j++){

            cin>>tab_x[j]>>tab_y[j];

        }

        if(testy <= 2) cout<<"TAK"<<"\n";

        else{

            int nr=0;
            while(tab_x[nr] == tab_x[nr+1] && tab_y[nr] == tab_y[nr+1]){
                nr++;
                if(nr+1==testy) break;
            }

            if(nr+1==testy) cout<<"TAK"<<"\n";
            else{

                bool test=true;
                for(int j=nr+2; j<testy; j++){

                    

                    if(tab_x[0] == tab_x[nr+1] && tab_y[0] != tab_y[nr+1]){
                        if(tab_x[0] != tab_x[j]){
                            cout<<"NIE"<<"\n";
                            test=false;
                            break;
                        }
                        
                    }
                    else if(tab_y[0] == tab_y[nr+1] && tab_x[0] != tab_x[nr+1]){
                        if(tab_y[0] != tab_y[j]){
                            cout<<"NIE"<<"\n";
                            test=false;
                            break;
                        } 
                        
                    }
                    
                    else{
                        //prawa=double((b-d)/(a-c))*x+(b-((b-d)/(a-c))*a);
                        long double a, b;
                        a=((tab_y[0] - tab_y[nr+1])/(tab_x[0] - tab_x[nr+1]));
                        b=(tab_y[0]-((tab_y[0] - tab_y[nr+1])/(tab_x[0] - tab_x[nr+1]))*tab_x[0]);

                        if(tab_y[j] >= a*tab_x[j]+b-eps && tab_y[j] <= a*tab_x[j]+b+eps){
                            cout<<"TAK"<<"\n";
                            break;
                        }  
                    }

                }
                if(test==true) cout<<"TAK"<<"\n";

            }

        }



    }
    return 0;
}