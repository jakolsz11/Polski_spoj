#include <iostream>
#include <string>

using namespace std;

int ile_zmian_slowo(string slowo) {
    int n = slowo.length();
    int ile_zmian = 0;

    // Początkowo ustawiamy flagę na false, co oznacza, że poprzednia litera nie była samogłoską
    bool poprzednia_samogloska = true;

    for (int i = 0; i < n; i++) {
        // Sprawdzamy, czy aktualna litera jest samogłoską
        bool czy_samogloska = false;
        switch (slowo[i]) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'Y':
                czy_samogloska = true;
                break;
        }

        if (czy_samogloska && poprzednia_samogloska) {
            // Jeśli poprzednia i aktualna litera są samogłoskami, to musimy zmienić aktualną literę
            ile_zmian++;
            poprzednia_samogloska = false;  // Ustawiamy flagę na false, bo zmieniliśmy aktualną literę
        } else {
            poprzednia_samogloska = czy_samogloska;
        }
    }

    return ile_zmian;
}

// Przykładowe użycie:
int main() {
    string slowo;
    cin>>slowo;
    cout << ile_zmian_slowo(slowo) << endl;  // Wynik: 2

    return 0;
}