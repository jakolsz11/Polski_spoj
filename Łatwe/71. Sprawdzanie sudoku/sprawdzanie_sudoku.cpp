#include <iostream>

using namespace std;

int main()
{

    int ile;
    cin >> ile;

    for (int i = 0; i < ile; i++)
    {

        int tab[9][9];
        bool test = true;

        // wczytanie sudoku z konsoli
        for (int j = 0; j < 9; j++)
        {

            for (int k = 0; k < 9; k++)
            {

                cin >> tab[k][j];
                if (tab[k][j] < 1 || tab[k][j] > 9)
                {

                    test = false;
                }
            }
        }

        if (test == false)
            cout << "NIE" << endl;

        else
        {

            // sprawdzanie w poziomie

            for (int j = 0; j < 9; j++)
            {

                for (int k = 0; k < 8; k++)
                {

                    for (int m = 1 + k; m < 9; m++)
                    {

                        if (tab[k][j] == tab[m][j])
                        {

                            test = false;
                        }
                    }
                }
            }

            if (test == false)
                cout << "NIE" << endl;

            else
            {

                // sprawdzanie w pionie

                for (int j = 0; j < 9; j++)
                {

                    for (int k = 0; k < 8; k++)
                    {

                        for (int m = 1 + k; m < 9; m++)
                        {

                            if (tab[j][k] == tab[j][m])
                            {

                                test = false;
                                break;
                            }
                        }
                    }
                }

                if (test == false)
                    cout << "NIE" << endl;
                else
                {

                    int mp = 0;

                    for (int p = 0; p < 3; p++)
                    {

                        for (int j = p * 3; j < p * 3 + 3; j++)
                        {

                            for (int i = mp; i < mp + 3; i++)
                            {

                                for (int k = p * 3; k < p * 3 + 3; k++)
                                {

                                    for (int l = mp; l < mp + 3; l++)
                                    {

                                        if (tab[i][j] == tab[l][k] && (i != l || j != k))
                                        {

                                            test = false;
                                        }
                                    }
                                }
                            }

                            if (mp == 6)
                                mp = 0;
                            else
                                mp += 3;
                        }
                    }

                    if (test == false)
                        cout << "NIE" << endl;
                    else
                        cout << "TAK" << endl;
                }
            }
        }
    }

    return 0;
}