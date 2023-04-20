#include <iostream>

using namespace std;

int main(){

    string a, b, c;
    cin>>a>>b>>c;

    int dlugosc=a.length();
    long suma=0;

    for(int i=0; i<dlugosc; i++){

        if(a[i] != b[i]) suma++;
        if(a[i] != c[i]) suma++;
        if(b[i] != c[i] && a[i] != b[i] && a[i] != c[i]) suma--;

    }

    cout<<suma<<endl;
    return 0;
}