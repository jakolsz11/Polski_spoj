#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    long long x1[2], y1[2], P1;
    long long x2[2], y2[2], P2;
    long long P3;

    long long wynik = 0;

    cin >> x1[0] >> y1[0] >> x1[1] >> y1[1];
    cin >> x2[0] >> y2[0] >> x2[1] >> y2[1];

    P1 = (abs(x1[1] - x1[0])) * (abs(y1[1] - y1[0]));

    P2 = (abs(x2[1] - x2[0])) * (abs(y2[1] - y2[0]));

    if(x1[0]==x2[0] && y1[0]==y2[0] && x1[1]==x2[1] && y1[1]==y2[1]){
        wynik = P1;
    }

    else if((((x1[0] >= x2[0] && x1[0]<x2[1]) || (x1[1] <= x2[1] && x1[1] > x2[0])) && ((y1[0] >= y2[0] && y1[0] < y2[1]) || (y1[1] <= y2[1] && y1[1] > y2[0]))) || (((x2[0] >= x1[0] && x2[0] < x1[1]) || (x2[1] <= x1[1] && x2[1] > x1[0])) && ((y2[0] >= y1[0] && y2[0] < y1[1]) || (y2[1] <= y1[1] && y2[1] > y1[0])))){

        int x=0;
        int y=0;
        if(((x1[0] >= x2[0] && x1[0] < x2[1]) || (x1[1] <= x2[1] && x1[1] > x2[0])) && ((y1[0] >= y2[0] && y1[0] < y2[1]) || (y1[1] <= y2[1] && y1[1] > y2[0]))){

            if((x1[0] >= x2[0] && x1[0] < x2[1])){

                if(x2[1] > x1[1]) x=abs(x1[0] - x1[1]);
                else x=abs(x1[0] - x2[1]);

            }

            else{

                if(x2[0] > x1[0]) x=abs(x2[0] - x1[1]);
                else x=abs(x1[0] - x1[1]);

            }

            if((y1[0] >= y2[0] && y1[0] < y2[1])){

                if(y2[1] > y1[1]) y=abs(y1[0] - y1[1]);
                else y=abs(y1[0] - y2[1]);

            }

            else{

                if(y2[0] > y1[0]) y=abs(y2[0] - y1[1]);
                else y=abs(y1[0] - y1[1]);

            }
        }

        else{

            if((x2[0] >= x1[0] && x2[0] < x1[1])){

                if(x1[1] > x2[1]) x=abs(x2[0] - x2[1]);
                else x=abs(x2[0] - x1[1]);

            }

            else{

                if(x1[0] > x2[0]) x=abs(x1[0] - x2[1]);
                else x=abs(x2[0] - x2[1]);

            }

            if((y2[0] >= y1[0] && y2[0] < y1[1])){

                if(y1[1] > y2[1]) y=abs(y2[0] - y2[1]);
                else y=abs(y2[0] - y1[1]);

            }

            else{

                if(y1[0] > y2[0]) y=abs(y1[0] - y2[1]);
                else y=abs(y2[0] - y2[1]);

            }
        }

        wynik = P1 + P2 - x*y;
    }

    else{

        wynik= P1 + P2;
    }

    cout<<wynik<<endl;

    return 0;
}