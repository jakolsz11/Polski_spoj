#include <iostream>

using namespace std;

int main(){

    


    
    int x, y;
    char znak;

    while(cin>>znak>>x>>y){

        switch(znak){

        case '-':
            cout<<x-y<<endl;
            break;
        case '+':
            cout<<x+y<<endl;
            break;
        case '*':
            cout<<x*y<<endl;
            break;
        case '/':
            cout<<x/y<<endl;
            break;
        case '%':
            cout<<x%y<<endl;
            break;
        case NULL:
            return 0;
        default:
            return 0;
        }
    }
    return 0;
}