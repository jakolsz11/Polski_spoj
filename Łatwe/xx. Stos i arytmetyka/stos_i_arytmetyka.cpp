#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack <int> liczby;

    std::ios::sync_with_stdio(false);
    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        int war, liczba;
        char znak;

        cin>>war;

        if(war==1){
            cin>>liczba;
            liczby.push(liczba);
        }
        else if(war==0){
            int x, y;
            cin>>znak;
            x=liczby.top();
            liczby.pop();
            y=liczby.top();
            liczby.pop();

            switch(znak){
                case '+':
                    liczby.push(y+x);
                    break;
                case '-':
                    liczby.push(y-x);
                    break;
                case '*':
                    liczby.push(y*x);
                    break;
                case '/':
                    liczby.push(y/x);
                    break;

            }
            
        }

    }

    cout<<liczby.top()<<"\n";
    cout<<"ONP\n";

    return 0;
}