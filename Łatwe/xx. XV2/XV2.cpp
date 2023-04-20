#include <iostream>
#include <vector>

using namespace std;

string wynik(string a, unsigned long long sum){

    vector <int> v(a.rbegin(), a.rend());    

    int len=a.size();

    v.resize(len, 0);

    /*for(int i=0; i<len; i++){

        cout<<v[i]-48;


    }*/

    

    while(sum%3 != 0){

        int it=1;

        if(v[0]-48==5){
            v[0]=48;
            sum-=5;
        }
        else{
            v[0]=53;
            sum+=5;

            while(v[it]==48){
                v[it]=57;
                sum+=9;
                it++;
            }

            v[it]-=1;
            sum-=1;

        }

    }

    while (v.size() > 1 && v.back() == 48) {
        v.pop_back();
    }

    string result(v.rbegin(), v.rend());
    return result;

}

int main(){

    int tests;
    cin>>tests;

    //przez 15 podzielna gdy suma podzielna przez 3 i 5

    for(int i=0; i<tests; i++){

        string liczba;
        cin>>liczba;

        unsigned long long sum=0;

        for(int j=0; j<liczba.length(); j++){

            sum+=(liczba[j]-48);

        }

        if(liczba.back() > 53){

            sum-=(liczba.back()-48-5);
            liczba.back()='5';            

        }
        else if(liczba.back() > 48 && liczba.back() < 53){

            sum-=(liczba.back()-48);
            liczba.back()='0';            

        }

        cout<<wynik(liczba, sum)<<"\n";


        //cout<<liczba<<"\n";

        


    }
    return 0;
}