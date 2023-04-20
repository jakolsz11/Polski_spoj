#include <iostream>
#include <string>

using namespace std;

int main(){

    string tekst;
    cin>>tekst;

    string sto="sto";

    size_t found=tekst.find(sto);

    if(found == -1) cout<<"NIE";
    else cout<<"TAK";

    return 0;
}