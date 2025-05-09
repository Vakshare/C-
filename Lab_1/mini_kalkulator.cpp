#include <iostream>

double pomiary[4] = {12.3,15.7,14.1,13.9};
int main(){
    double licznik;
    double srednia;
    double min = pomiary[0];
    double max = pomiary[0];
    int dlugosc = sizeof(pomiary) / sizeof(pomiary[0]);
    for (int i =0; i < dlugosc; i++){
        licznik += pomiary[i];
        if (pomiary[i]<min){
            min = pomiary[i];}
        if (pomiary[i]>max){
            max = pomiary[i];}
    }
    srednia = licznik/float(dlugosc);
    std::cout<<"Średnia: "<<srednia<<std::endl;
    std::cout<<"Max: "<<max<<std::endl;
    std::cout<<"Min: "<<min<<std::endl;
    std::string imie;
    std::cout << "Podaj imie: ";
    std::cin >> imie;
    std::cout << "Witaj, " << imie << "!" << std::endl;
    return 0;
}