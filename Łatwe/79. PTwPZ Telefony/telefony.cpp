#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        string linia;
        cin>>linia;
        
        int dlugosc=linia.length();
        

        for(int j=0; j<dlugosc; j++){

            if(linia[j]>=65 && linia[j]<=67) cout<<"2";
            else if(linia[j]>=68 && linia[j]<=70) cout<<"3";
            else if(linia[j]>=71 && linia[j]<=73) cout<<"4";
            else if(linia[j]>=74 && linia[j]<=76) cout<<"5";
            else if(linia[j]>=77 && linia[j]<=79) cout<<"6";
            else if(linia[j]>=80 && linia[j]<=83) cout<<"7";
            else if(linia[j]>=84 && linia[j]<=86) cout<<"8";
            else if(linia[j]>=87 && linia[j]<=90) cout<<"9";
            
        }

        cout<<endl;

    }
    return 0;
}