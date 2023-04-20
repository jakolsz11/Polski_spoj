#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float srednie[4];
    float ile[4];

    for(int i=0; i<4; i++){
        cin>>srednie[i];
    }

    for(int i=0; i<4; i++){
        cin>>ile[i];
    }

    float kobiety=(ile[1]*srednie[1]+ile[3]*srednie[3])/(ile[1]+ile[3]);
    float mezczyzni=(ile[0]*srednie[0]+ile[2]*srednie[2])/(ile[0]+ile[2]);
    float wszyscy=(ile[1]*srednie[1]+ile[3]*srednie[3]+ile[0]*srednie[0]+ile[2]*srednie[2])/(ile[1]+ile[3]+ile[0]+ile[2]);

    cout<<"K16K36: "<<setprecision(2)<<fixed<<kobiety<<"\n";
    cout<<"M16M36: "<<setprecision(2)<<fixed<<mezczyzni<<"\n";
    cout<<"M16K16M36K36: "<<setprecision(2)<<fixed<<wszyscy<<"\n";

    return 0;
}