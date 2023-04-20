#include <iostream>

using namespace std;

bool czy_przestepny(int rok){

    if((rok%4==0 && rok%100!=0) || rok%400==0) return false;
	else return true;

}

string slownie_miesiac(int miesiac){

    if(miesiac == 1) return "stycznia";
    else if(miesiac == 2) return "lutego";
    else if(miesiac == 3) return "marca";
    else if(miesiac == 4) return "kwietnia";
    else if(miesiac == 5) return "maja";
    else if(miesiac == 6) return "czerwca";
    else if(miesiac == 7) return "lipca";
    else if(miesiac == 8) return "sierpnia";
    else if(miesiac == 9) return "wrzesnia";
    else if(miesiac == 10) return "pazdziernika";
    else if(miesiac == 11) return "listopada";
    else if(miesiac == 12) return "grudnia";
    return 0;

}

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        string data;
        cin>>data;

        if(data.length()!=8) cout<<"niepoprawny format daty\n";
        else{
            int dzien, miesiac, rok;
            dzien=stoi(data.substr(0, 2));
            miesiac=stoi(data.substr(2, 2));
            rok=stoi(data.substr(4, 4));

            //cout<<dzien<<" "<<miesiac<<" "<<rok<<"\n";

            if(miesiac<1 || miesiac>12) cout<<"niepoprawny format daty\n";

            else if(rok<1000 || rok>2200) cout<<"niepoprawny format daty\n";


            else if(miesiac == 1 || miesiac == 3 || miesiac == 5 || miesiac == 7 || miesiac == 8 || miesiac == 10 || miesiac == 12){

                if(dzien<=0 || dzien>31) cout<<"niepoprawny format daty\n";

                else{
                    cout<<dzien<<" "<<slownie_miesiac(miesiac)<<" "<<rok<<"\n";
                }

            }

            else if(miesiac == 4 || miesiac == 6 || miesiac == 9 || miesiac == 11){

                if(dzien<=0 || dzien>30) cout<<"niepoprawny format daty\n";

                else{
                    cout<<dzien<<" "<<slownie_miesiac(miesiac)<<" "<<rok<<"\n";                    
                }

            }

            else{

                if(czy_przestepny(rok) == true){

                    if(dzien<=0 || dzien>28) cout<<"niepoprawny format daty\n";

                    else{
                        cout<<dzien<<" "<<slownie_miesiac(miesiac)<<" "<<rok<<"\n";
                    }

                }

                else{
                    if(dzien<=0 || dzien>29) cout<<"niepoprawny format daty\n";

                    else{
                        cout<<dzien<<" "<<slownie_miesiac(miesiac)<<" "<<rok<<"\n";                    
                    }
                }

            }
        }

    }
    return 0;
}