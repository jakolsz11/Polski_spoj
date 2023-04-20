#include <iostream>

using namespace std;

int main()
{
    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){
        string wyraz;
        cin>>wyraz;
        int dlugosc=wyraz.length();
        string wyraz2;
        for(int k=0; k<=(dlugosc/2)-1; k++){
            wyraz2+=wyraz[k];
        }
        cout<<wyraz2<<endl;
    }


   return 0;
}