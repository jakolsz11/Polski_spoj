#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
    
    int kod[4];
    
    srand(time(NULL));
    
    for(int i=0; i<4; i++){
        
        kod[i]=rand() % 5+1;
        //cout<<kod[i]<<" ";

    }

    int strzal[4];
    int runda=1;
    bool test=0;
    int ilosc=0;

    while(runda<10 && ilosc != 4){

        cin>>strzal[0]>>strzal[1]>>strzal[2]>>strzal[3];
        ilosc=0;

        for(int i=0; i<4; i++){

            if(strzal[i] == kod[i]){
                cout<<"1"<<" ";
                ilosc++;
            }

            else if(ilosc == 4){
                break;
            }

            else{

                for(int j=0; j<4; j++){
                    if(strzal[i] == kod[j]){
                        test=true;
                        break;
                    }
                    else test=false;
                }
                if(test == true) cout<<"0"<<" ";
                else if(test == false) cout<<"-1"<<" ";

            }
            
        }
        
        
        cout<<endl;
        runda++;
        fflush(stdout);

    }
    



    





    return 0;
}