#include <iostream>

int main(){
    int oceny [6] = {5,4,3,5,4,2};
    int rozmiar = sizeof(oceny) / sizeof(oceny[0]);
    int licznik = 0;
    double srednia;
    std::cout<<"Dlugosc listy: " << rozmiar <<std::endl;
    for (int i = 0; i < rozmiar; i++){
        licznik += oceny[i];
    }
    std::cout << "Suma ocen: " << licznik << std::endl;
    
    srednia = float(licznik) / float(rozmiar);
    std::cout<<"Średnia ocen: "<< srednia <<std::endl;

    oceny[2] = 5;
    std::cout << "Nowa tablica: ";
    for (int i = 0; i < rozmiar; i++) {
        std::cout << oceny[i] << " ";
    }
    std::cout << std::endl;
    for (auto ocena: oceny){
        std::cout<<ocena<<std::endl;
    }
    return 0;
    
}