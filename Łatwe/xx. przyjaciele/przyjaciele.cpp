#include <iostream>

using namespace std;

int nrdnia(string dzien){

    if(dzien == "poniedzialek") return 1;
    else if(dzien == "wtorek") return 2;
    else if(dzien == "sroda") return 3;
    else if(dzien == "czwartek") return 4;
    else if(dzien == "piatek") return 5;
    else if(dzien == "sobota") return 6;
    else if(dzien == "niedziela") return 7;

    return 0;
}

string jakidzien(long long nr){

    if(nr == 1) return "poniedzialek";
    else if(nr == 2) return "wtorek";
    else if(nr == 3) return "sroda";
    else if(nr == 4) return "czwartek";
    else if(nr == 5) return "piatek";
    else if(nr == 6) return "sobota";
    else if(nr == 0) return "niedziela";

    return 0;
}

int main(){

    string godzina, dzien;
    cin>>godzina>>dzien;

    

    string sek;
    cin>>sek;

    long long nrdn=nrdnia(dzien);
    long long hour=stoi(godzina.substr(0, 2));
    long long min=stoi(godzina.substr(3, 2));
    long long se=stoi(godzina.substr(6, 2));

    long long sekundy=stoll(sek.substr(0, sek.length()-1));

    if(sekundy>604800) cout<<"NIE\n";
    else cout<<"TAK\n";

    //cout<<hour<<" "<<min<<" "<<se<<" "<<sekundy;

    long long plusdni=sekundy/86400;
    sekundy%=86400;
    long long plush=sekundy/3600;
    sekundy%=3600;
    long long plusm=sekundy/60;
    sekundy%=60;


    se+=sekundy;
    if(se>=60){
        plusm+=se/60;
        se%=60;
    }

    min+=plusm;
    if(min>=60){
        plush+=min/60;
        min%=60;
    }

    hour+=plush;
    if(hour>=24){
        plusdni+=hour/24;
        hour%=24;
    }

    nrdn+=plusdni;
    nrdn%=7;

    if(hour<10){
        cout<<"0"<<hour<<":";
    }
    else cout<<hour<<":";

    if(min<10){
        cout<<"0"<<min<<":";
    }
    else cout<<min<<":";

    if(se<10){
        cout<<"0"<<se<<" ";
    }
    else cout<<se<<" ";

    cout<<jakidzien(nrdn);

    return 0;
}