#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int p1[3];
    int p2[3];

    for(int i=0; i<3; i++){
        cin>>p1[i];
    }

    for(int i=0; i<3; i++){
        cin>>p2[i];
    }

    sort(p1, p1+3);
    sort(p2, p2+3);

    int ile1=0;
    int ile2=0;

    for(int i=0; i<3; i++){

        if(p1[i]<p2[i]) ile1++;
        else if(p1[i]>p2[i]) ile2++;
        else{
            ile1++;
            ile2++;
        }

    }

    if(ile1 == 3 || ile2 == 3) cout<<"tak\n";
    else cout<<"nie\n";
    return 0;
}