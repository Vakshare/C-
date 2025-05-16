#include <iostream>
#include <array>
using namespace std;

struct Osoba{
    string Imie;
    int wiek;
};

void ustaw_na_zero_wartość(int x){
    x = 0;
}
void ustaw_na_zero_wskaźnik(int* x){
    *x = 0;
}

void ustaw_na_zero_referencja(int& x){
    x = 0;
}
void podwojenie(int* t, int rozmiar){
    for (int i = 0; i < rozmiar; i++){
        t[i] *=2;
    }}
void podwojenie_2(array<int, 5> &t2){
    for (int& wartość : t2){
        wartość *=2;
    }
}

void zamień(int& a, int& b){
    int c = a;
    a = b;
    b = c;
}

void postarzej(Osoba& o){
    o.wiek +=1;
}

bool znajdz_element(const int* t, int rozmiar, int szukana, int& indeks){
    for (int i = 0; i < rozmiar; i++){
        if (t[i]==szukana){
            indeks = i;
            return true;
        }
    }
    return false;
}

int main(){
    int x = 2;
    ustaw_na_zero_wartość(x);
    cout << x << endl;
    x = 2;
    ustaw_na_zero_wskaźnik(&x);
    cout << x << endl;
    x = 2;
    ustaw_na_zero_referencja(x);
    cout << x << endl;
    
    //zadanie 2
    cout << "Zadanie 2:" << endl;
    int t[5] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(t)/sizeof(t[0]);
    podwojenie(t, rozmiar);
    for (int i = 0; i < rozmiar; i++ ){
        cout << t[i] << endl;}
    array<int, 5> t2 = {1, 2, 3, 4, 5};  
    podwojenie_2(t2);
    for (int wartość :  t2){
        cout << wartość << endl;}
    
    //zadanie 3
    cout << "Zadanie 3:" <<endl;
    int a = 5;
    int b = 10;
    zamień(a, b);
    cout <<"Nowa wartość a: " << a <<endl;
    cout <<"Nowa wartość b: " << b << endl;
    //zadanie 4
    Osoba osoba{"Jan", 17};
    cout << "Stary wiek: " << osoba.wiek << endl;
    postarzej (osoba);
    cout << "Nowy wiek: " << osoba.wiek << endl;
    //Zadanie 5
    int tablica[] = {10, 11, 12, 13, 14};
    int indeks;
    bool znaleziony = znajdz_element(tablica, 5, 13, indeks);
    cout << indeks << endl;
    return 0;
}


    
