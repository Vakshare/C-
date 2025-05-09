#include <iostream>
using namespace std;
void ustawNaZero(int x); 
int main(){
    int x = 1;
    cout << "Wartosc x: " << x << endl;
    ustawNaZero(x);
    cout << "Wartosc x: " << x << endl;
    return 0;
}

void ustawNaZero(int x){
    x = 0;
    cout << "Wartosc x: " << x << endl;
}