#include <iostream>
#include <string>
using namespace std;

enum StatusStudenta {
    Aktywny,
    Absolwent,
    Urlopowany,
    Skreslony
};

struct Student {
    string imie;
    string nazwisko;
    int numer_indeksu;
    float srednia_ocen;
    StatusStudenta status;
};

// Funkcja wypisująca dane studenta
void wypisz(const Student& s) {
    cout << "Imię: " << s.imie << "\n"
         << "Nazwisko: " << s.nazwisko << "\n"
         << "Numer indeksu: " << s.numer_indeksu << "\n"
         << "Średnia ocen: " << s.srednia_ocen << "\n"
         << "Status: ";
    
    switch(s.status) {
        case Aktywny: cout << "Aktywny"; break;
        case Absolwent: cout << "Absolwent"; break;
        case Urlopowany: cout << "Urlopowany"; break;
        case Skreslony: cout << "Skreślony"; break;
    }
    cout << "\n-------------------\n";
}

int main() {
    // Przykładowi studenci
    Student grupa[3] = {
        {"Anna", "Nowak", 123456, 4.5, Aktywny},
        {"Jan", "Kowalski", 234567, 3.8, Urlopowany},
        {"Maria", "Wiśniewska", 345678, 5.0, Absolwent}
    };

    // Wypisanie wszystkich studentów używając funkcji wypisz
    for (int i = 0; i < 3; i++) {
        cout << "\nStudent #" << i+1 << ":\n";
        wypisz(grupa[i]);
    }

    // Można też wypisać pojedynczego studenta
    // Student nowy;
    // cin >> nowy.imie >> nowy.nazwisko ...;
    // wypisz(nowy);

    return 0;
}