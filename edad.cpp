//Angel Emiliano Vargas Carreto A01425478
//06/11/2023

#include <iostream>

using namespace std;

int edadTierra;

int edad(int planeta){
    int edad;
    edad = edadTierra * 365 / planeta;
    return edad;
}

int main(){
    cout << "Introduce tu edad ";
    cin >> edadTierra;

    cout << "Tu edad en mercurio es " << edad(88) << endl;
    cout << "Tu edad en venus es " << edad(225) << endl;
    cout << "Tu edad en jupiter es " << edad(4380) << endl;
    cout << "Tu edad en saturno es " << edad(10767) << endl;
    return 0;
}
