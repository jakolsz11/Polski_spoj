#include <iostream>
#include <string>

using namespace std;

/*long long dodawanie(int tab[], long long dlugosc, long long K)
{

    int ilosc = 0;

    while (K != ilosc)
    {

        ilosc = 0;
        int nr = dlugosc - 1, liczba = 0;

        if (tab[nr] != 9)
            tab[nr] += 1;

        while (tab[nr] == 9)
        {
            tab[nr] = 0;
            nr--;
            liczba++;
        }

        nr = dlugosc - 1;

        if (tab[0] == 0)
        {

            dlugosc += 1;

            tab[0] = 1;
            tab[nr + 1] = 0;
        }
        else if (liczba != 0)
        {
            tab[nr - liczba] += 1;
        }

        for (int i = 0; i < dlugosc; i++)
        {
            if (tab[i] == 5)
                ilosc++;
        }
    }

    for (int i = 0; i < dlugosc; i++)
    {
        cout << tab[i];
    }

    return 0;
}*/

int main()
{

    long long K;
    string liczba, liczba_test;
    long long licznik = 0, nr = 0;
    cin >> liczba >> K;

    long long N = stoll(liczba);
    int tab[15];

    for (int i = 0; i < liczba.length(); i++)
    {

        liczba_test[i] = '5';
    }

    long long test = stoll(liczba_test);

    if (K > liczba.length())
    {

        for (int i = 0; i < K; i++)
        {
            cout << "5";
        }
        cout << endl;
    }

    else if (K == liczba.length() && N < test)
    {

        for (int i = 0; i < liczba.length(); i++)
        {
            cout << "5";
        }
        cout << endl;
    }

    else
    {

        for (int i = 0; i < liczba.length(); i++)
        {
            tab[i] = liczba[i] - 48;
        }

        tab[liczba.length()-1]+=1;

        int piatki;
        int n;

        while (piatki != K)
        {

            int ile = 0;
            piatki = 0;

            for (int i = 0; i < (liczba.length() - K); i++)
            {
                if (tab[i] == 5)
                    ile++;
            }

            n = K - ile;

            if (tab[liczba.length() - n] > 5)
            {
                int nr = 0;

                while (tab[liczba.length() - n - 1 - nr] == 9)
                {
                    tab[liczba.length() - n - 1-nr] = 0;
                    nr++;
                }
                if(nr != 0) tab[liczba.length() - n - 1 - nr] += 1;
            }
            
            for (int i = 0; i < n; i++)
            {
                tab[liczba.length() - i - 1] = 5;
            }

            for (int i = 0; i < liczba.length(); i++)
            {
                if (tab[i] == 5)
                    piatki++;
            }
        }

        if((liczba.length()-n-1) == nr) cout<<"1";

        for (int i = 0; i < liczba.length(); i++)
        {
            cout << tab[i];
        }
    }

    /*else{

        for(int i=0; i<liczba.length(); i++){
            tab[i]=liczba[i]-48;
        }

        long long dlugosc=liczba.length();

        dodawanie(tab, dlugosc, K);


    }*/

    return 0;
}

/*
TESTY:
499  2
45 1
999 1
999515 2
5559 3
51 1
99 2
*/