//Angel Emiliano Vargas Carreto A01425478
//06/11/2023

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float peso, altura, imc;

    cout << "Peso ";
    cin >> peso;
    cout << "Altura ";
    cin >> altura;

    imc = (peso/pow(altura, 2));

    cout << "Tu IMC es " << imc;

    return 0;
}
