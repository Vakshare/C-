#include <iostream>
using namespace std;

int* kopiuj (int* tab, int n){
    int* nowa_tablica = new int[n];
    for (int i = 0; i < n; i++){
        nowa_tablica[i] = tab[i];
    }
    return nowa_tablica;
}
void usuń_obiekt(int*& ptr){
    delete[] ptr;
    ptr = nullptr;
}

int main(){
    //zdanie 1
    double* p = new double;
    *p = 3.14;
    cout << *p << endl;
    delete p;
    //zadanie 2
    cout << "Podaj długość tablicy: " ;
    int* n = new int;
    cin >> *n;
    int* tab = new int[*n];
    for (int i = 0; i<*n; i++){
        cout << "Podaj " << i << " element tablicy: ";
        cin >> tab[i];
    }
    double* suma = new double;
    *suma = 0;
    double* średnia = new double;
    *średnia = 0;
    for (int i = 0; i<*n ; i++){
        *suma += tab[i];
    }
    *średnia = *suma / *n;
    cout << "Suma: " << *suma << endl;
    cout << "Średnia: " << *średnia << endl;
    for (int i = 0; i<*n; i++){
        if (tab[i] > *średnia){
            cout << tab[i] << endl;
        }
    }
    delete suma, średnia, n;
    delete [] tab;
    //zadanie 3
    int* tablica = new int[3]{1, 2, 3};
    int* kopia = kopiuj(tablica, 3);
    delete [] tablica;
    delete [] kopia;
    //zadanie 4
    int* tablica = new int[5]{1, 2, 3};
    usuń_obiekt(tablica);
    return 0;
}