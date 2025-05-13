#include <iostream>
using namespace std;

int main() {
    //EJERCICIO 1
  /*
  * float lado1, lado2, area, perimetro;

    cout << "Ingrese el primer lado del rectangulo: ";
    cin >> lado1;
    cout << "Ingrese el segundo lado del rectangulo: ";
    cin >> lado2;

    area= lado1 * lado2;
    perimetro = 2 * (lado1 + lado2);

    cout << "El area del rectangulo es: " << area;
    cout << "El perimetro del rectangulo es: " << perimetro;

    return 0;
  */  



    //EJERCICIO 2
    float N, S;

    int M = 0;
    int F = 0; 
    int PM, PF;

    cout << "Ingrese la cantidad de pacientes";
    cin >> N;

    cout << "Ingrese el sexo de cada paciente";
    cin >> S;

    if(S=M){
       M= M + 1;
        }
    if(S=F){
        F = F + 1;
    }

   PM = (M * 100) / N ; 
   PF = (F * 100) / N ; 

    cout << "Porcentaje Masculino: ";
    cin >> PM;
    cout << "Porcentaje Femenino";
    cin >> PF;


}