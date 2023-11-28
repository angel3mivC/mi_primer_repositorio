//Angel Emiliano Vargas Carreto A01425478
//06/11/2023

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float celsius = 0, farenheit = 0;

    cout << "Introduzca los grados celsius ";
    cin >> celsius;

    farenheit = (celsius * 9)/5 + 32;

    cout << setprecision(2) << farenheit;
    //pause(system);

    return 0;
}
