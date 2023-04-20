#include <iostream>

using namespace std;

string RGB(int liczba){

    int pierwsza=0, druga=0;
    pierwsza=liczba/16;
    druga=liczba-pierwsza*16;
    string wynik;
    

    if(pierwsza==10)  wynik='A';
    else if(pierwsza==11)  wynik='B';
    else if(pierwsza==12)  wynik='C';
    else if(pierwsza==13)  wynik='D';
    else if(pierwsza==14)  wynik='E';
    else if(pierwsza==15)  wynik='F';
    else if(pierwsza == 0) wynik='0';
    else  wynik+=pierwsza+48;

    if(druga==10)  wynik.push_back('A');
    else if(druga==11)  wynik.push_back('B');
    else if(druga==12)  wynik.push_back('C');
    else if(druga==13)  wynik.push_back('D');
    else if(druga==14)  wynik.push_back('E');
    else if(druga==15)  wynik.push_back('F');
    else if(druga == 0) wynik.push_back('0');
    else wynik.push_back(druga+48);

    return wynik;

}

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        int a, b, c;
        cin>>a>>b>>c;

        string kolor;

        kolor=RGB(a);
        kolor+=RGB(b);
        kolor+=RGB(c);


        if(kolor == "000000") cout<<"black\n";
        else if(kolor == "C0C0C0") cout<<"silver\n";
        else if(kolor == "808080") cout<<"gray\n";
        else if(kolor == "FFFFFF") cout<<"white\n";
        else if(kolor == "800000") cout<<"maroon\n";
        else if(kolor == "FF0000") cout<<"red\n";
        else if(kolor == "800080") cout<<"purple\n";
        else if(kolor == "FF00FF") cout<<"fuchsia\n";
        else if(kolor == "008000") cout<<"green\n";
        else if(kolor == "00FF00") cout<<"lime\n";
        else if(kolor == "808000") cout<<"olive\n";
        else if(kolor == "FFFF00") cout<<"yellow\n";
        else if(kolor == "000080") cout<<"navy\n";
        else if(kolor == "0000FF") cout<<"blue\n";
        else if(kolor == "008080") cout<<"teal\n";
        else if(kolor == "00FFFF") cout<<"aqua\n";
        else cout<<"#"<<kolor<<"\n";




    }

    return 0;
}