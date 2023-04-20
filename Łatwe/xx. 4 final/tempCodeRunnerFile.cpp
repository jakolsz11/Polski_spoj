#include <cstdio>
#include <cstring>

using namespace std;

int main(){

    int tests, event, h, min, s, sleepAfter, time, timeMax=-1, time0=32400, timeEnd=50400;
    char what[3];
    scanf("%d", &tests);

    while(tests--){

        scanf("%d", &event);
        scanf("%d:%d:%d", &h, &min, &s);
        sleepAfter=(h*3600+min*60+s);

        while(event--){
            scanf("%d:%d:%d %s", &h, &min, &s, &what);
            
            if(strcmp(what, "AC") == 0){
                time = (h*3600+min*60+s);
                if((time-time0) > sleepAfter){
                    if((time-time0-sleepAfter)>timeMax) timeMax=(time-time0-sleepAfter);
                }
                time0=time;
            }
        }

        if((timeEnd-time0) > sleepAfter){
            if((timeEnd-time0-sleepAfter)>timeMax) timeMax=(timeEnd-time0-sleepAfter);
        }

        if(timeMax==-1) printf("0\n");
        else{

            h=timeMax/3600;
            min=(timeMax%3600)/60;
            s=(timeMax%3600)%60;
            printf("%02d:%02d:%02d\n", h, min, s);
        }


    }




    return 0;
}