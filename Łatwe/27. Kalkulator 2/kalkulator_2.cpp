#include <iostream>

using namespace std;

int main(){

    int tab[10];

    char znak;
    int x, y;

    while(cin>>znak>>x>>y){

        if(znak=='z') tab[x]=y;
        else{
            switch(znak){
            case '+':
                cout<<tab[x]+tab[y]<<endl;
                break;
            case '-':
                cout<<tab[x]-tab[y]<<endl;
                break;
            case '*':
                cout<<tab[x]*tab[y]<<endl;
                break;
            case '/':
                cout<<tab[x]/tab[y]<<endl;
                break;
            case '%':
                cout<<tab[x]%tab[y]<<endl;
                break;
            case NULL:
                return 0;
            default:
                return 0;
            }
        }
    }
    return 0;
}