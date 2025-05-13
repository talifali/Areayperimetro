#include <iostream>

int main() {
    float lado1, lado2, area, perimetro;

    cout << "Ingrese el primer lado del rectangulo: ";
    cin >> lado1;
    cout << "Ingrese el segundo lado del rectangulo: ";
    cin >> lado2;

    area= lado1 * lado2;
    perimetro = 2 * (lado1 + lado2);

    cout<< "El area del rectangulo es: " << area 
    cout << "El perimetro del rectangulo es: " << perimetro

    return 0;
}