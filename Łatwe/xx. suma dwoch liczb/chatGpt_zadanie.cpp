#include <iostream>
#include <string>
#include <cmath>

int main() {
    int system;
    std::string liczba1, liczba2;
    std::cout << "Podaj system liczbowy: ";
    std::cin >> system;
    std::cout << "Podaj pierwszą liczbę: ";
    std::cin >> liczba1;
    std::cout << "Podaj drugą liczbę: ";
    std::cin >> liczba2;

    // Konwersja liczb na system dziesiętny
    int l1 = 0, l2 = 0;
    for (int i = 0; i < liczba1.length(); i++) {
        l1 += pow(system, i) * (liczba1[liczba1.length() - i - 1] - '0');
    }
    for (int i = 0; i < liczba2.length(); i++) {
        l2 += pow(system, i) * (liczba2[liczba2.length() - i - 1] - '0');
    }

    // Dodawanie liczb w systemie dziesiętnym
    int suma = l1 + l2;

    // Konwersja sumy na podany system
    std::string wynik;
    while (suma > 0) {
        int reszta = suma % system;
        wynik = std::to_string(reszta) + wynik;
        suma /= system;
    }
    std::cout << "Wynik: " << wynik << std::endl;

    return 0;
}