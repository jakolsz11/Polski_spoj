#include <iostream>
#include <string>
#include <math.h>
#include <sstream>

using namespace std;

int ile;

int main(){

    cin>>ile;

    for(int i=0; i<ile; i++){

        int ile_pkt, zmiana;
        cin>>ile_pkt;
        int x[1000], y[1000];
        double p_1, p_2;
        string nazwa[1000];
        string tmp_nazwa;

        for(int k=0; k<ile_pkt; k++){
            cin>>nazwa[k]>>x[k]>>y[k];
        }

        for(int j=0; j<ile_pkt; j++){

            for(int k=0; k<ile_pkt-1; k++){

                p_1=sqrt(x[k]*x[k]+y[k]*y[k]);
                p_2=sqrt(x[k+1]*x[k+1]+y[k+1]*y[k+1]);

                if(p_1>p_2){
                    
                    zmiana=x[k];
                    x[k]=x[k+1];
                    x[k+1]=zmiana;

                    zmiana=y[k];
                    y[k]=y[k+1];
                    y[k+1]=zmiana;

                    tmp_nazwa=nazwa[k];
                    nazwa[k]=nazwa[k+1];
                    nazwa[k+1]=tmp_nazwa;

                }
            }
        }
        for(int j=0; j<ile_pkt; j++){
            cout<<nazwa[j]<<" "<<x[j]<<" "<<y[j]<<endl;
        }
        cout<<"\n";
    }
    return 0;
}