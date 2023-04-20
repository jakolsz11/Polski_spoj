#include <iostream>

using namespace std;

int NWD(int a, int b){

    int pom;

    while(b != 0){

        pom=b;
        b=a%b;
        a=pom;

    }

    return a;

}

int main(){

    std::ios::sync_with_stdio(false);
    int tests;
    cin>>tests;

    while(tests--){

        int number;
        cin>>number;

        int ile=0;
        string results_1, results_2;        

        for(int i=1; i<number/2+1; i++){

            int nwd=NWD(i, number);

            if(nwd==i){
                int b=number/nwd;
                string paste=to_string(b);
                results_1.push_back('1');
                results_1.push_back('/');
                results_1+=paste;
                results_1.push_back(' ');

                int a=b-1;
                string paste2=to_string(a);

                results_2.insert(0, 1, ' ');
                results_2.insert(0, paste);
                results_2.insert(0, 1, '/');
                results_2.insert(0, paste2);

                ile+=2;
                
            }

        }

        int it=0;
        if(number%2==0){
            while(!isspace(results_2[it])){
                it++;
            }

            results_2.erase(0, it+1);
            ile--;
        }

        if(ile == 0) cout<<"0\n";
        else{
            cout<<ile<<"\n";
            cout<<results_1<<results_2<<"\n";
        }

    }
    return 0;
}