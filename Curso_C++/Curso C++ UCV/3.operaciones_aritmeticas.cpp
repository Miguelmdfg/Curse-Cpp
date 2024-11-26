/*Escribe un programa que lea de la entrada estandar dos numeros y 
muestre en la salida estandar su suma, resta, multiplicacion y division*/ 

#include <iostream>
using namespace std;

int main(){

   int numero1, numero2, suma=0, resta=0, multiplicacion=0, division=0;

   cout << "Ingrese el primer numero a calcular: "; 
   cin >> numero1;

    cout << "Ingrese el segundo numero a calcular: "; 
    cin >> numero2;

    suma = numero1 + numero2;
     resta = numero1 - numero2;
      multiplicacion = numero1 * numero2;
       division = numero1 / numero2;

       cout << "\nLa suma es: " << suma << endl;
         cout << "\nLa resta es: " << resta << endl;
         cout << "\nLa multiplicacion es: " << multiplicacion << endl;
           cout << "\nLa division es: " << division << endl;

    return 0;
}

//EJERCICIO

/*Escribe un programa que lea de la entrada estandar el precio de un producto y muestre
en la salida estandar el precio del producto con el IVA aplicado*/

#include <iostream>
using namespace std;

int main(){

    float precio, iva = 0;

    cout << "Ingrese a continuacion el precio del producto: ";
    cin >> precio;

    iva = precio * 1.21;

    cout<<"\nEl precio final del producto es: "<< iva <<endl;

    return 0;
}

