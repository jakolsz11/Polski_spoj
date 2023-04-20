#include <iostream>

using namespace std;

int petla;

int odtylu(string liczba1){

    int dlugosc=liczba1.length();
    string liczba2;

    
    
    for(int k=dlugosc-1; k>=0; k--){
        liczba2+=liczba1[k];
    }

    int liczba1_1 = stoi(liczba1);
    int liczba2_2 = stoi(liczba2);
    int suma=liczba1_1;
    string suma1;
    

    

    if(liczba1_1 == liczba2_2){
        cout<<liczba1_1<<" "<<petla<<endl;
    }

    else{
        suma+=liczba2_2;
        suma1 = to_string(suma);
        petla++;
        return odtylu(suma1);
    }
    return 0;
}

int ile;

int main(){

    cin>>ile;

    for(int i=0; i<ile; i++){

        string liczba1;
        cin>>liczba1;

        petla=0;

        odtylu(liczba1);

        
  
    }
    return 0;
}