#include <iostream>
#include <string>
using namespace std;

enum StatusStudenta {
    Aktywny,
    Absolwent,
    Skreslony
};

struct Student {
    string imie;
    string nazwisko;
    int indeks;
    double srednia;
    StatusStudenta status;
};


Student wczytaj();
void wypisz(const Student& s);

int main() {
    Student grupa[3];


    for (int i = 0; i < 3; i++) {
        cout << "\nWprowadz dane studenta #" << i+1 << ":\n";
        grupa[i] = wczytaj();
    }

    for (int i = 0; i < 3; i++) {
        cout << "\nStudent #" << i+1 << ":\n";
        wypisz(grupa[i]);
    }

    return 0;
}


Student wczytaj() {
    Student s;
    
    cout << "Imie: ";
    cin >> s.imie;
    
    cout << "Nazwisko: ";
    cin >> s.nazwisko;
    
    cout << "Numer indeksu: ";
    cin >> s.indeks;
    
    cout << "Srednia ocen: ";
    cin >> s.srednia;
    
    cout << "Status (0-Aktywny, 1-Absolwent, 2-Skreslony): ";
    int temp_status;
    cin >> temp_status;
    s.status = static_cast<StatusStudenta>(temp_status);
    
    return s;
}

void wypisz(const Student& s) {
    cout << "Imie: " << s.imie << "\n"
         << "Nazwisko: " << s.nazwisko << "\n"
         << "Numer indeksu: " << s.indeks << "\n"
         << "Srednia ocen: " << s.srednia << "\n"
         << "Status: ";
    
    switch(s.status) {
        case Aktywny: cout << "Aktywny"; break;
        case Absolwent: cout << "Absolwent"; break;
        case Skreslony: cout << "Skreślony"; break;
    }
    cout << "\n-------------------\n";
}