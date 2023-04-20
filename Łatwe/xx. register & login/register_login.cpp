#include <iostream>
#include <map>

using namespace std;

int sprawdzlogin(string a){

    int poprawne=0;
    if(a.size()<3 || a.size()>12) return 0;
    else{
        for(int i=0; i<a.size(); i++){
            if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9')) poprawne++;
        }
        if(poprawne == a.size()) return 1;
        else return 0;
    }

    return 0;
}

int sprawdzhaslo(string a){

    int male=0;
    int duze=0;
    int cyfra=0;
    int spec=0;

    if(a.size()<5 || a.size()>15) return 0;
    else{
        for(int i=0; i<a.size(); i++){
            if(a[i]>='a' && a[i]<='z') male=1;
            else if(a[i]>='A' && a[i]<='Z') duze=1;
            else if(a[i]>='0' && a[i]<='9') cyfra=1;
            else spec=1;
        }

        if(male==1 && duze == 1 && cyfra == 1 && spec == 1) return 1;
        else return 0;
    }

    return 0;
}

int main(){

    string komenda;
    int ile;
    map <string, string> dane;

    while(cin>>komenda>>ile){        

        if(komenda=="register"){

            for(int i=0; i<ile; i++){

                string login, haslo;
                cin>>login>>haslo;

                for(int j=0; j<login.size(); j++){
                    if(login[j]>='A' && login[j]<='Z') login[j]+=32;
                }

                //cout<<login<<"\n";

                int test=0;

                test+=sprawdzlogin(login);
                if(test==1){
                    if(dane[login] == ""){
                        test+=sprawdzhaslo(haslo);
                        if(test==2){
                            dane[login]=haslo;
                            cout<<"Zarejestrowano\n";
                        }
                        else cout<<"Blad\n";
                        
                    }
                    else cout<<"Login zajety\n";
                }
                else cout<<"Blad\n";

            }
        }
        else if(komenda=="login"){

            for(int i=0; i<ile; i++){

                string login, haslo;
                cin>>login>>haslo;

                for(int j=0; j<login.size(); j++){
                    if(login[j]>='A' && login[j]<='Z') login[j]+=32;
                }

                //cout<<login<<"\n";

                if(dane[login] == "") cout<<"Konto nie istnieje\n";
                else{
                    if(dane[login] != haslo) cout<<"Zle haslo\n";
                    else cout<<"Zalogowano\n";
                }



            }
        }

    }

    return 0;
}