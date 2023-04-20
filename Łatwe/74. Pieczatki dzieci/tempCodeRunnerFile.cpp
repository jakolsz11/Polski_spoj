#include <iostream>
#include <string>

using namespace std;

int main()
{

    // wczytanie danych z konsoli
    string linia;
    int piatki;

    cin >> linia >> piatki;

    // pierwsze sprawdzenie

    int dlugosc = linia.length();

    if (piatki > dlugosc)
    {

        for (int i = 0; i < piatki; i++)
        {

            cout << "5";
        }
    }

    // drugie sprawdzenie (dane pomocnicze)

    long long liczba = stoll(linia);
    string test;
    long long liczba_test;

    for (int i = 0; i < dlugosc; i++)
    {

        test[i] = '5';
    }

    liczba_test = stoll(test);

    // 2 sprawdzenie

    if (piatki == dlugosc && liczba < liczba_test)
    {

        for (int i = 0; i < piatki; i++)
        {

            cout << "5";
        }
    }

    // trzecie sprawdzenie

    if (piatki == dlugosc && liczba >= liczba_test)
    {

        cout << "1";

        for (int i = 0; i < piatki; i++)
        {

            cout << "5";
        }
    }

    // czwarte sprawdzenie

    if (piatki < dlugosc)
    {

        int nr = 0;
        int ile_piatek = 0;

        if (linia[dlugosc - 1] == '9')
        {

            while (linia[dlugosc - 1 - nr] == '9')
            {
                linia[dlugosc - 1 - nr] = '0';
                if ((dlugosc - 1 - nr) != 0)
                    nr++;
            }
            if ((dlugosc - 1 - nr) != 0 || (linia[dlugosc - 1 - nr] < '9' && linia[dlugosc - 1 - nr] != '0'))
                linia[dlugosc - 1 - nr] += 1;
        }
        else
            linia[dlugosc - 1] += 1;

        // cout<<linia<<endl;

        for (int i = 0; i < dlugosc; i++)
        {
            if (linia[i] == '5')
                ile_piatek++;
        }

        if (ile_piatek >= piatki)
            cout << linia;

        else
        {

            ile_piatek = 0;
            bool trt = true;
            bool zmiana = true;

            while (ile_piatek != piatki)
            {

                int do_sprawdzenia = dlugosc - piatki;
                ile_piatek = 0;
                int numer = 0;

                while (do_sprawdzenia)
                {

                    ile_piatek = 0;

                    for (int i = 0; i < do_sprawdzenia; i++)
                    {

                        if (linia[i] == '5')
                            ile_piatek++;
                    }
                    if (numer == ile_piatek)
                        break;
                    else
                    {

                        do_sprawdzenia += ile_piatek - numer;
                        numer = ile_piatek;
                    }
                }

                int nowe_piatki = piatki - ile_piatek;

                if (linia[dlugosc - nowe_piatki] >= '5')
                {

                    nr = 0;

                    while (linia[dlugosc - nowe_piatki - nr - 1] == '9')
                    {

                        linia[dlugosc - nowe_piatki - nr - 1] = '0';
                        if ((dlugosc - nowe_piatki - nr - 1) != 0)
                            nr++;
                    }

                    if (((dlugosc - nowe_piatki - nr - 1) != 0) || (linia[dlugosc - nowe_piatki - nr - 1] < '9' && linia[dlugosc - nowe_piatki - nr - 1] != '0'))
                        linia[dlugosc - nowe_piatki - nr - 1] += 1;
                }

                // cout<<linia<<endl;

                int ilosc = 0;
                ile_piatek = 0;
                for (int i = 0; i < dlugosc; i++)
                {

                    if (linia[i] == '5')
                        ile_piatek++;
                }

                if (ile_piatek == piatki)
                {

                    int nm = 0;

                    while (ilosc != piatki)
                    {

                        if (linia[nm] == '5')
                        {
                            ilosc++;
                        }

                        cout << linia[nm];
                        nm++;
                    }

                    for (int i = nm; i < dlugosc; i++)
                    {
                        cout << "0";
                    }
                    cout << endl;
                    trt = false;
                    break;
                }

                // cout<<linia<<endl;

                for (int i = 0; i < nowe_piatki; i++)
                {

                    linia[dlugosc - 1 - i] = '5';
                }

                // cout<<linia<<endl;

                ile_piatek = 0;

                for (int i = 0; i < dlugosc; i++)
                {
                    if (linia[i] == '5')
                        ile_piatek++;
                }

                // cout<<ile_piatek<<endl;

                if (ile_piatek > piatki)
                {

                    int usun = ile_piatek - piatki;
                    int cyt = 0;

                    while (linia[dlugosc - piatki + cyt] != '5')
                    {
                        usun++;
                        cyt++;
                    }

                    for (int i = 0; i < usun; i++)
                    {
                        linia[dlugosc - piatki + i] = '0';
                    }
                }

                ile_piatek = 0;

                for (int i = 0; i < dlugosc; i++)
                {
                    if (linia[i] == '5')
                        ile_piatek++;
                }
            }

            if (linia[0] == '0')
                cout << "1";
            if (trt == true)
                cout << linia;
        }
    }

    return 0;
}

// testy
// 9559995559595 8 wynik:9559995565555
