#include <iostream>
using namespace std;
void wypisz_napis(const char* napis);
int main(){
    int mana = 250;
    int* pointer_mana = &mana;
    cout << "Adres zmiennej mana: " << pointer_mana << endl;
    cout << "Wartość zmiennej mana: " << mana << endl;
    cout << "Wartość odczytana przez wskaźnik: " << *pointer_mana << endl;
    *pointer_mana = 300;
    cout << "Nowa wartość zmiennej mana: " << mana << endl;
    int t[5] = {1, 2, 3, 4, 5};
    int* ptr_t = t;
    for (int i = 0; i<5; i++){
        cout << *(ptr_t+i) << " " ;
    }
    cout << endl;
    int suma = 0;
    for (int i = 0; i<5; i++){
        suma += *(ptr_t+i);
    }   
    cout << "Suma tabeli: " << suma << endl;

    char tekst[] = "Progragmowanie";
    
    char* ptr_char = tekst;
    while (*ptr_char != '\0'){
        cout << *ptr_char << " ";
        ptr_char++;
    }
    int dlugosc_tablicy = sizeof(tekst)/sizeof(tekst[0])-1;
    cout << endl << "Dlugość tablicy: " << dlugosc_tablicy << endl;
    wypisz_napis("Programowanie");
    return 0;
}
void wypisz_napis(const char* napis){
    const char* znak = napis;
    while (*znak != '\0'){
        cout << *znak << endl;
        znak++;
    }
    }
