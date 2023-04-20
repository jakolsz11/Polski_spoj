#include <iostream>

using namespace std;

int main()
{

    int testy;
    cin >> testy;
    bool test = true;

    for (int i = 0; i < testy; i++)
    {

        string haslo, wpis;
        cin >> haslo >> wpis;
        test = true;

        if (haslo.length() != wpis.length())
        {
            cout << "error"
                 << "\n";
            test = false;
        }
        else
        {

            for (int j = 0; j < haslo.length(); j++)
            {

                if (wpis[j] != '*')
                {
                    if (haslo[j] != wpis[j])
                    {
                        cout << "error"
                             << "\n";
                        test = false;
                        break;
                    }
                }
            }
        }

        if (test == true)
            cout << "ok\n";
    }
    return 0;
}