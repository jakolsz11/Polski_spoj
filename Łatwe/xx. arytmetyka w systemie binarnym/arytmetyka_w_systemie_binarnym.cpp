#include <iostream>
#include <vector>

using namespace std;

int main(){

    int a, b;
    cin>>a>>b;

    const int t1=a;
    const int t2=b;

    int tab1[t1];
    int tab2[t2];

    for(int i=0; i<a; i++){

        cin>>tab1[i];

    }

    for(int i=0; i<b; i++){

        cin>>tab2[i];

    }

    int plus=0;
    vector <int> wynik;

    if(a<=b){
        
        int it=b-1;

        for(int j=a-1; j>=0; j--){

            if((tab1[j]+tab2[it]+plus) == 0){
                wynik.push_back(0);
                plus=0;
            }
            else if((tab1[j]+tab2[it]+plus) == 1){
                wynik.push_back(1);
                plus=0;
            }
            else if((tab1[j]+tab2[it]+plus) == 2){
                wynik.push_back(0);
                plus=1;
            }
            else if((tab1[j]+tab2[it]+plus) == 3){
                wynik.push_back(1);
                plus=1;
            }

            it--;

        }

        for(int i=it; i>=0; i--){
            if((tab2[i]+plus) == 0){
                wynik.push_back(0);
                plus=0;
            }
            else if((tab2[i]+plus) == 1){
                wynik.push_back(1);
                plus=0;
            }
            else if((tab2[i]+plus) == 2){
                wynik.push_back(0);
                plus=1;
            }
        }

        if(plus == 1) wynik.push_back(1);

        
    }
    else{

        int it=a-1;

        for(int j=b-1; j>=0; j--){

            if((tab1[it]+tab2[j]+plus) == 0){
                wynik.push_back(0);
                plus=0;
            }
            else if((tab1[it]+tab2[j]+plus) == 1){
                wynik.push_back(1);
                plus=0;
            }
            else if((tab1[it]+tab2[j]+plus) == 2){
                wynik.push_back(0);
                plus=1;
            }
            else if((tab1[it]+tab2[j]+plus) == 3){
                wynik.push_back(1);
                plus=1;
            }

            it--;

        }

        for(int i=it; i>=0; i--){
            if((tab1[i]+plus) == 0){
                wynik.push_back(0);
                plus=0;
            }
            else if((tab1[i]+plus) == 1){
                wynik.push_back(1);
                plus=0;
            }
            else if((tab1[i]+plus) == 2){
                wynik.push_back(0);
                plus=1;
            }
        }

        if(plus == 1) wynik.push_back(1);

    }

    for(int i=wynik.size()-1; i>=0; i--){
        cout<<wynik[i];
    }

    return 0;
}