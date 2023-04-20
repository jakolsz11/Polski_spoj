#include <iostream>

using namespace std;

int nwd(int a, int b){
    
    while(b != 0){
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int ile;

int main(){
    
    cin>>ile;
    
    for(int i=0; i<ile; i++){
        int liczba1, liczba2;
        cin>>liczba1>>liczba2;
        cout<<nwd(liczba1, liczba2)<<endl;
    }

    return 0;
}