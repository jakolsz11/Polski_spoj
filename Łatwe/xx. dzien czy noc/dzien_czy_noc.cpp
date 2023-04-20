#include <iostream>

using namespace std;

int main(){

    string wschod, zachod, teraz;

    cin>>wschod>>zachod>>teraz;

    int tab[6];
    tab[0]=stoi(wschod.substr(0, 2));
    tab[1]=stoi(wschod.substr(3, 2));
    tab[2]=stoi(zachod.substr(0, 2));
    tab[3]=stoi(zachod.substr(3, 2));
    tab[4]=stoi(teraz.substr(0, 2));
    tab[5]=stoi(teraz.substr(3, 2));

    if(tab[4]==tab[0]){
        if(tab[5]>=tab[1] && tab[4]==tab[2]){
            if(tab[5]<tab[3]) cout<<"dzien\n";
            else cout<<"noc\n";
        }
        else if(tab[5]>=tab[1] && tab[4]<tab[2]){
            cout<<"dzien\n";
        }
        else cout<<"noc\n";
    }
    else if(tab[4]>tab[0]){
        if(tab[4]==tab[2]){
            if(tab[5]<tab[3]) cout<<"dzien\n";
            else cout<<"noc\n";
        }
        else if(tab[4]<tab[2]) cout<<"dzien\n";
        else cout<<"noc\n";
    }
    
    else cout<<"noc\n";

    return 0;
}