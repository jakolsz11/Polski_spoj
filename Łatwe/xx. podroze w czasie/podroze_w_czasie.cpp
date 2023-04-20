#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    const int ile=testy;

    vector <int> x;
    vector <int> y;
    vector <int> nr;
    vector <int> ludzie;

    int a, b;
    int c, d;

    for(int i=0; i<ile; i++){

        cin>>a>>b>>c>>d;
        x.push_back(a);
        y.push_back(b);
        nr.push_back(c);
        ludzie.push_back(d);

    }

    int bomb;
    cin>>bomb;
    const int bomby=bomb;

    int bx[bomby];
    int by[bomby];
    int r[bomby];

    

    for(int i=0; i<bomby; i++){

        cin>>bx[i]>>by[i]>>r[i];

    }

    vector <int> wyniki;
    int suma=0;
    int pom=testy;

    for(int i=0; i<bomby; i++){

        
        int j=0;

        while(pom>0){

            
            float odleglosc=(pow((bx[i]-x[j]), 2)+pow((by[i]-y[j]), 2));
            

            if(odleglosc<=(r[i]*r[i])){
                wyniki.push_back(nr[j]);
                suma+=ludzie[j];
                x.erase(x.begin()+j);
                y.erase(y.begin()+j);
                nr.erase(nr.begin()+j);
                ludzie.erase(ludzie.begin()+j);
                //cout<<wyniki[j];
                j--;
                
            }

            j++;
            pom--;   

        }

        pom=testy-wyniki.size();

        

        if(wyniki.size() > 0){

            for(int j=0; j<wyniki.size(); j++){

                cout<<wyniki[j];
                if(j != wyniki.size()-1) cout<<" ";

            }
            cout<<"\n";

            cout<<suma<<"\n";

        }
        else cout<<"NULL\n";

        wyniki.clear();
        suma=0;

        

    }

    return 0;
}