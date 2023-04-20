#include <iostream>

using namespace std;

int przestepny(int rok){

   if((rok%4==0 && rok%100!=0) || rok%400==0){
        return 2;
   }
   else return 1;

}

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        int rok;
        cin>>rok;
        int poczatek=rok;

        int ilosc;
        ilosc=przestepny(rok);
        int test=ilosc;

        int tnt=-1;
        rok+=1;

        while(ilosc%7 != 0 || test != tnt){

            ilosc+=przestepny(rok);
            rok+=1;
            tnt=przestepny(rok);
            
        }

        cout<<(rok-poczatek)<<"\n";

    }

    return 0;
}