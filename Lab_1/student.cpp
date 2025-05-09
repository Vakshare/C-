#include<iostream>
using namespace std;
enum StatusStudenta {
    Aktywny,
    Absolwent,
    Urlopowany,
    Skreslony
   };
   
struct Student{
    string imie;
    string nazwisko;
    int numer_indeksu;
    float srednia_ocen;
    StatusStudenta status;};

int main(){
    Student s1{"Anna", "Nowak", 123456, 4.3, Aktywny};
    cout<<"Student: "<<s1.imie<<" "<<s1.nazwisko<<", Indeks: "<<s1.numer_indeksu<<", Srednia: "<<s1.srednia_ocen<< ", Status: ";
    switch(s1.status) {
        case Aktywny: cout << "Aktywny"; break;
        case Absolwent: cout << "Absolwent"; break;
        case Urlopowany: cout << "Urlopowany"; break;
        case Skreslony: cout << "Skreslony"; break;
    }
    cout << endl;
    Student s2;
    int temp_status;
    cin >> s2.imie >> s2.nazwisko >> s2.numer_indeksu >> s2.srednia_ocen >> temp_status;
    s2.status = static_cast<StatusStudenta>(temp_status);
    cout << "Student: " << s2.imie << " " << s2.nazwisko 
    << ", Indeks: " << s2.numer_indeksu 
    << ", Srednia: " << s2.srednia_ocen
    << ", Status: ";

    switch(s2.status) {
        case Aktywny: cout << "Aktywny"; break;
        case Absolwent: cout << "Absolwent"; break;
        case Urlopowany: cout << "Urlopowany"; break;
        case Skreslony: cout << "Skreslony"; break;
    }
    cout << endl;
    return 0;
}