#include <iostream>
using namespace std;

// Funkcja do obliczania dnia tygodnia na podstawie numeru PESEL
string obliczDzienTygodnia(int rok, int miesiac, int dzien) {
    string dniTygodnia[7] = {"Niedziela", "Poniedziałek", "Wtorek", "Środa", "Czwartek", "Piątek", "Sobota"};
    int miesiace[12] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    rok -= miesiac < 3;
    int dzienTygodnia = (rok + rok/4 - rok/100 + rok/400 + miesiace[miesiac-1] + dzien) % 7;
    return dniTygodnia[dzienTygodnia];
}

int main() {
    string pesel;
    cout << "Podaj pierwsze 6 cyfr numeru PESEL: ";
    cin >> pesel;
    
    if (pesel.length() != 6) {
        cout << "Nieprawidłowa długość numeru PESEL!" << endl;
        return 0;
    }

    int rok = stoi(pesel.substr(0, 2));
    int miesiac = stoi(pesel.substr(2, 2));
    int dzien = stoi(pesel.substr(4, 2));

    // Dodanie odpowiedniego stulecia na podstawie miesiąca
    if (miesiac > 12 && miesiac <= 32) {
        rok += 1800;
        miesiac -= 20;
    } else if (miesiac > 32 && miesiac <= 52) {
        rok += 1900;
        miesiac -= 40;
    } else if (miesiac > 52 && miesiac <= 72) {
        rok += 2000;
        miesiac -= 60;
    } else if (miesiac > 72 && miesiac <= 92) {
        rok += 2100;
        miesiac -= 80;
    }

    cout << "Dzień tygodnia urodzenia: " << obliczDzienTygodnia(rok, miesiac, dzien) << endl;

    return 0;
}