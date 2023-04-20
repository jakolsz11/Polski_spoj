#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool is_digit(char znak){

    if(znak>='0' && znak<='9') return true;
    else return false;
}

bool is_act(char znak){

    if(znak =='+' || znak == '-' || znak =='*') return true;
    else return false;

}

int str_to_int(string a, int &poz){

    int liczba=0;
    while(poz<a.size() && is_digit(a[poz])){

        liczba=liczba*10+a[poz]-'0';
        poz++;
    }
    poz--;
    return liczba;


}

int operation(int a, int b, char znak){

    switch(znak){

        case '+':
            //cout<<a+b<<" asd"<<"\n";
            return a+b;
            break;
        case '-':
            //cout<<a-b<<" asd"<<"\n";
            return a-b;
            break;
        case '*':
            //cout<<(a*b)<<" asd"<<"\n";
            return (a*b);
            break;

    }

    return 0;


}

int main(){

    stack <int> stack;
    string ONP;

    getline(cin, ONP);

    int a, b;

    for(int i=0; i<ONP.size(); i++){

        if(is_digit(ONP[i]) == true){
            stack.push(str_to_int(ONP, i));
        }
        else{
            if(is_act(ONP[i]) == true){
                
                if(stack.size()<2){
                    cout<<"ERROR\n";
                    return 0;
                } 
                else{
                    a=stack.top();
                    stack.pop();
                    b=stack.top();
                    stack.pop();
                    stack.push(operation(b, a, ONP[i]));

                }

            }
        }

    }

    if(stack.size() != 1) cout<<"ERROR\n";
    else cout<<stack.top()<<"\n";


    return 0;
}