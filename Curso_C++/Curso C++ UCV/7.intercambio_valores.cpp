/*Escriba un fragmento de programa que intercambie los valores de dos variables */

#include <iostream>
using namespace std;


int main (){

    int a, b, resultado = 0;

    cout << "Ingrese un numero entero `A` para intercambiar: ";
    cin >> a;  

    cout << "Ingrese un numero entero `B` para intercambiar: ";
    cin >> b;


    resultado = a = b, b = a;

    cout << "`a` es igual a :" << b << endl << "`b` es igual a: " << a <<  endl;


    return 0;
}