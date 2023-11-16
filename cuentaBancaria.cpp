//Angel Emiliano Vargas Carreto A01425478
//13/11/2023

#include <iostream>
#include<conio.h>

using namespace std;

class Cuenta{
private:

    double saldo;
    string nombre;

public:
    Cuenta(double cant, string nom){
        saldo = cant;
        nombre = nom;
    }

    string getNombre(){
        return nombre;
    }

    double getSaldo(){
        return saldo;
    }

    void setNombre(string nom){
        nombre = nom;
    }

    void setSaldo(double sal){
        saldo = sal;
    }

    void depositar(double cant){
        saldo += cant;
        cout << "Se ha depositado " << cant << "$\n";
    }

    void retirar(double cant){
        if ((saldo - cant) >= 0){
            saldo -= cant;
            cout << "Se han retirado " << cant << "$\n";
        }else{
            cout << "No tienes saldo suficiente\n";
        }
    }

    void consultar(){
        cout << "-------------\n";
        cout << "Nombre: " << nombre << endl;
        cout << "Saldo: " << saldo << endl;
        cout << "-------------\n";
    }
};

int main(){
    Cuenta cuenta(500, "Angel");

    int decision, cant;

    do{
        cout << "Selecciona una opcion\n";
        cout << "1. Consultar\n";
        cout << "2. Retirar\n";
        cout << "3. Depositar\n";
        cout << "4. Salir\n";

        cin >> decision;

        //clrscr();
        system("cls");

        switch(decision){
        case 1:
            cuenta.consultar();
            break;
        case 2:
            cout << "Cuando quieres retirar\n";
            cin >> cant;
            cuenta.retirar(cant);
            break;
        case 3:
            cout << "Cuanto quieres depositar\n";
            cin >> cant;
            cuenta.depositar(cant);
            break;
        case 4:
            cout << "Adios\n";
            break;
        default:
            cout << "Opcion no valida\n";
        }



    }while(decision != 4);

    return 0;
}
