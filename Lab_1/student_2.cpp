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

int main() {
    // 1. Deklaracja tablicy 3 studentów
    Student grupa[3];

    // 2. Wczytywanie danych 3 studentów
    for (int i = 0; i < 3; i++) {
        cout << "\nWprowadz dane studenta #" << i+1 << ":\n";
        
        cout << "Imie: ";
        cin >> grupa[i].imie;
        
        cout << "Nazwisko: ";
        cin >> grupa[i].nazwisko;
        
        cout << "Numer indeksu: ";
        cin >> grupa[i].numer_indeksu;
        
        cout << "Srednia ocen: ";
        cin >> grupa[i].srednia_ocen;
        
        cout << "Status (0-Aktywny, 1-Absolwent, 2-Urlopowany, 3-Skreslony): ";
        int temp_status;
        cin >> temp_status;
        grupa[i].status = static_cast<StatusStudenta>(temp_status);
    }

    // 3. Wyświetlanie danych wszystkich studentów
    cout << "\nLista studentów:\n";
    for (int i = 0; i < 3; i++) {
        cout << "\nStudent #" << i+1 << ":\n"
             << "Imie: " << grupa[i].imie << "\n"
             << "Nazwisko: " << grupa[i].nazwisko << "\n"
             << "Indeks: " << grupa[i].numer_indeksu << "\n"
             << "Srednia: " << grupa[i].srednia_ocen << "\n"
             << "Status: ";
        
        switch(grupa[i].status) {
            case Aktywny: cout << "Aktywny"; break;
            case Absolwent: cout << "Absolwent"; break;
            case Urlopowany: cout << "Urlopowany"; break;
            case Skreslony: cout << "Skreslony"; break;
        }
        cout << endl;
    }

    return 0;
}