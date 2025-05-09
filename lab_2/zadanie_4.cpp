#include <iostream>

using namespace std;
string haslo;
string poprawne_haslo = "admin123";
int main(){
cout << " Podaj haslo";
cin >> haslo;
    while (poprawne_haslo != haslo){
        cout << "Haslo Niepoprawne" << endl;
        cout << " Podaj haslo" << endl;
        cin >> haslo;
    }
    cout << "Haslo poprawne" << endl;
}