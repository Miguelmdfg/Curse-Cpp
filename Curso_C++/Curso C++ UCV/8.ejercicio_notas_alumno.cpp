/* La calificacion de un estudiante es la media ponderada de 3 notas:

-La nota de practicas que cuenta con un 30% del total
-La nota teorica que cuenta un 60% 
-La nota de participacion que cuenta el 10% restante.

Escriba un programa que lea de la entrada estandar las 3 notas del alumno y escriba 
en la salida estandar su nota final*/

#include <iostream>
using namespace std;

int main() {
    float practica, teorica, participativa, nota1 = 0, nota2 = 0, nota3 = 0, notaFinal = 0;

    cout << "Ingrese la nota obtenida en la practica: ";
        cin >> practica;

    cout << "Ingrese la nota obtenida en la teorica: ";
        cin >> teorica;

    cout << "Ingrese la nota obtenida en la participativa: ";
        cin >> participativa;

     nota1 = practica * 0.30;
         nota2 = teorica * 0.60;
            nota3 = participativa * 0.10;

    notaFinal = nota1 + nota2 + nota3;

    cout << "La nota final del alumno es: " << notaFinal << endl;

    return 0;
}




/*Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo rectangulo 
y escriba en la salida estandar su hipotenusa*/


#include <iostream>
using namespace std;

int main (){

    float cateto1 = 0, cateto2 = 0, hipotenusa = 0;

    cout << "Ingrese el valor del cateto #1: ";
    cin >> cateto1;

    cout << "Ingrese el valor del cateto #2";
    cin >> cateto2;

    hipotenusa = pow(cateto1, 2) + pow (cateto2, 2);

    hipotenusa = pow(hipotenusa, 2);

    cout << "El resultado de la hipotenusa es: " << hipotenusa << endl;



    return 0;
}


#include <iostream>
#include <cmath> // Necesitas incluir esta biblioteca para usar pow()
using namespace std;

int main() {
    float cateto1 = 0, cateto2 = 0, hipotenusa = 0;

    cout << "Ingrese el valor del cateto #1: ";
    cin >> cateto1;

    cout << "Ingrese el valor del cateto #2: ";
    cin >> cateto2;

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2)); // sqrt() para obtener la raíz cuadrada

    cout << "El resultado de la hipotenusa es: " << hipotenusa << endl;

    return 0;
}

