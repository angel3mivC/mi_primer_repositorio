//Angel Emiliano Vargas Carreto A01425478
//06/11/2023

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double p, n, r, ganancia;

    cout << "Cual es la inversion ";
    cin >> p;
    cout << "Taza de interes ";
    cin >> r;
    cout << "Anos ";
    cin >> n;

    ganancia = (p * (1 - pow((r/100), n+1))) / (1 - (r/100));

    cout << "La ganancia es " << ganancia;

    return 0;
}
