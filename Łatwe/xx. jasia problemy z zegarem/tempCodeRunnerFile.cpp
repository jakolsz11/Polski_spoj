#include <cstdio>
#include <math.h>

using namespace std;

int main(){

    float ha, ma, hb, mb;
    int tests;
    scanf("%d", &tests);
    float kha, kma, khb, kmb;
    bool test;

    while(tests--){

        scanf("%f:%f %f:%f", &ha, &ma, &hb, &mb);
        int count=0;
        
        if(ha==hb && ma==mb){
            kha=(int (ha)%12)*30+ma*0.5;
            kma=ma*6;
            if(kha>=kma) test=false;
            kha+=0.5;
            kma+=6;
            if(kha<=kma && test==false) count++;
        }
        else{

            kha=(int (ha)%12)*30+ma*0.5;
            //printf("%f\n", kha);
            kma=ma*6;
            khb=(int (hb)%12)*30+(mb)*0.5;
            kmb=(mb)*6;
            
            float plus=0;
            float plus2=0;

            if(hb>ha){
                if(hb-ha>12) plus2=360;
                
            }
            else if(hb<ha){
                if(hb+24-ha>12) plus2=360;
                plus=-360;
            }
            else{
                if(ma>mb){
                    plus2=360;
                }
            }




            // if((ha>=12 && hb>=12)) plus=360;

            if(kha<kma) test=false;
            else test=true;

            

            while((kha+plus) != (khb+plus2) || kma != kmb){
                kha+=0.5;
                kma+=6;
                if(kha==360){
                    plus+=360;
                    kha=0;
                } 
                if(kma==360) kma=0;  
                //printf("%f %f\n", kha, kma);         
                if(kma<kha) test=true;
                if(test==true && kma>=kha){
                    //printf("%f %f\n\n", kha, kma);
                    test=false;
                    count++;
                }  
            }

            if(kha > kmb){
                kha+=0.49;
                kma+=5.98;
                if(kha==360){
                    plus=360;
                    kha=0;
                } 
                if(kma==360) kma=0;  
                //printf("%f %f\n", kha, kma);         
                if(kma<kha) test=true;
                if(test==true && kma>=kha){
                    //printf("%f %f\n\n", kha, kma);
                    test=false;
                    count++;
                }  
            }
          


        }
        
        

        printf("%d\n", count);
    }



    return 0;
}