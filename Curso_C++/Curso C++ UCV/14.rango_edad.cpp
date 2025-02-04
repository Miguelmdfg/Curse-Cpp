//Escriba un programa que solicite una edad (un entero) e indique en la salida si la edad introducida esta en el rango de [18-25].

#include <iostream>
using namespace std;

int main(){

    int edad;

    cout << "Ingrese su edad por favor: ";
    cin >> edad;

   if (edad > 18 && edad < 25){
    cout << "Usted esta en el rango de edad permitido";
        }else{
            cout << "Usted no esta en el rango requerido";
        }


    return 0;
}

//Escribe un programa que lea de entrada tres numeros. Despues debe leer un cuarto numero e indicar si el numero coincide con alguno de los introducidos con anterioridad

#include <iostream>
using namespace std;

int main(){

    int num1, num2, num3, coincidencia;

    cout << "Por favor digite 3 numeros: "; cin >> num1 >> num2 >> num3;

    cout << "Por favor indique otro numero para ser comparado"; cin >> coincidencia;

   if (coincidencia == num1){
    cout << "El ultimo numero ingresado coincide con el primero: ";
   }else if (coincidencia == num2){
     cout << "El ultimo numero ingresado coincide con el segundo: ";
   }else if (coincidencia == num3){
    cout << "El ultimo numero ingresado coincide con el tercero: ";
   }else{
    cout << "El numero no coincide con ninguno de los numeros anteriores";
   }

   return 0;
}