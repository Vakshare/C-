#include <iostream>
using namespace std;
double srednia(double a, double b);
int main(){
    double a;
    double b;
    double aver;
    cout << "Podaj dwie liczby: " ;
    cin >> a >> b;
    aver = srednia(a, b);
    cout << "\nSrednia twoich liczb: " << aver << endl;
}
double srednia(double a, double b) {
    return (a + b) / 2.0;
   }