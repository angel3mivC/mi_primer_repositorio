//Angel Emiliano Vargas Carreto A01425478
//06/11/2023

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a, b, c;
    cout << "A ";
    cin >> a;
    cout << "B ";
    cin >> b;
    cout << "C ";
    cin >> c;

    int x1, x2;

    x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

    cout << "x1 " << x1 << endl;
    cout << "x2 " << x2 << endl;

    return 0;
}
