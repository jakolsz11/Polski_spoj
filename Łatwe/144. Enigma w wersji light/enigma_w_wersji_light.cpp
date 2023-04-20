#include <iostream>

using namespace std;

int main(){

    string linia;
    

    while(getline(cin, linia)){

        if(linia.length()%2 == 0){

            for(int i=0; i<linia.length(); i++){

                swap(linia[i], linia[i+1]);
                i++;
            }
        }
        else{
            for(int i=0; i<linia.length(); i++){

                if(i==linia.length()-1) continue;
                else swap(linia[i], linia[i+1]);
                i++;
            }
        }
        

        cout<<linia<<"\n";





    }
    return 0;
}