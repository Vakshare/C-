#include <iostream>

using namespace std;
int liczba;
int main(){
    cout << " Podaj liczbę ";
    cin >> liczba;

if (liczba > 0){
    std::cout << "Liczba dodatnia"<< std::endl;
}
else if (liczba < 0){
    std::cout << "Liczba ujemna" << std::endl;
}
else{
    std::cout << "Liczba to zero " << std::endl;
}
if ((liczba % 2) == 1){
    cout << "Liczba jest nieparzysta" << endl;}

else { cout << "Liczba jest parzysta" << endl;} 
}


