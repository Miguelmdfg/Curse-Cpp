/*Escriba un fragmento de programa que intercambie los valores de dos variables */

#include <iostream>
using namespace std;


int main (){

    int a, b, resultado = 0;

    cout << "Ingrese un numero entero `A` para intercambiar: ";
    cin >> a;  

    cout << "Ingrese un numero entero `B` para intercambiar: ";
    cin >> b;

    int temp = a;
    a = b;
    a = temp;
   
    cout << "`a` es igual a : " << b << endl << "`b` es igual a: " << a <<  endl;


    return 0;
}



/*Escriba un programa que lea la nota final de cuatro alumnos 
y calcule la nota final media de los cuatro alumnos*/

#include <iostream>
using namespace std;

int main (){

    float alumno01, alumno02, alumno03, alumno04, suma = 0 ,resultado = 0;

    cout << "Ingresa la nota del alumno numero 01: ";
        cin >> alumno01;

    cout << "Ingresa la nota del alumno numero 02: ";
        cin >> alumno02;

    cout << "Ingresa la nota del alumno numero 03: ";
        cin >> alumno03;

    cout << "Ingresa la nota del alumno numero 04: ";
        cin >> alumno04;


        suma = alumno01 + alumno02 + alumno03 + alumno04;
        resultado = suma / 4;

        cout << "La media de la seccion es: " << resultado << endl; 

    return 0;
}


