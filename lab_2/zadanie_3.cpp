#include <iostream>

using namespace std;
int liczba;
int main(){
    cout << " Podaj liczbę ";
    cin >> liczba;
    int i = 1;
    int suma = 0;
    while (i <= liczba){
        suma += i;
        i+=1;
    }
    cout << "Obliczona suma: " << endl;
    cout << suma << endl;
}
