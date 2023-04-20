#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;
    
    string imie[ile];
    double waga[ile], wzrost[ile];

    for(int i=0; i<ile; i++){

        cin>>imie[i]>>waga[i]>>wzrost[i];

    }

    string niedowaga[ile], norma[ile], nadwaga[ile];
    bool test1, test2, test3;

    for(int i=0; i<ile; i++){

        double bmi[ile];
        bmi[i]=waga[i]/((wzrost[i]*wzrost[i])/10000);
        //cout<<bmi[i]<<endl;

        if(bmi[i]<18.5) niedowaga[i]=imie[i], test1=1;
        else if(bmi[i]>=25) nadwaga[i]=imie[i], test3=1;
        else norma[i]=imie[i], test2=1;


    }

    if(test1 == 1){

        cout<<"niedowaga"<<"\n";
        for(int i=0; i<ile; i++){
            if(niedowaga[i] != ""){
                cout<<niedowaga[i]<<"\n";
            }
        
        }

        cout<<"\n";

    }
    

    
    if(test2 == 1){
        cout<<"wartosc prawidlowa"<<"\n";
        for(int i=0; i<ile; i++){
            if(norma[i] != ""){
                cout<<norma[i]<<"\n";
            }
        
        }

        cout<<"\n";
    }
    
    if(test3 == 1){
        cout<<"nadwaga"<<"\n";
        for(int i=0; i<ile; i++){
            if(nadwaga[i] != ""){
                cout<<nadwaga[i]<<"\n";
            }
        
        
        }

    }
    
    return 0;
}