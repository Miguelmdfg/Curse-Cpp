/*Condicionales

if (condicion){
    instrucciones 1
}else´{
    instrucciones 2
    }
*/

// ejemplo con "igual que =="
#include <iostream> 
using namespac std;

int main(){

    int numero, dato = 5;

    cout << "Digite un numero: ";
    cin >> numero;

    if (numero == dato){
        cout << "El numero es 5";
    } else {
        cout << "El numero es diferente a 5"
    }

    return 0;
}


// ejemplo con "distinto de !="

if (numero != dato){
        cout << "El numero es 5";
    } else {
        cout << "El numero es diferente a 5"
    }

// ejemplo con "mayor que >"

if (numero > dato){
        cout << "El numero es 5";
    } else {
        cout << "El numero es diferente a 5"
    }

// ejemplo con "menor que <"

if (numero < dato){
        cout << "El numero es 5";
    } else {
        cout << "El numero es diferente a 5"
    }

// ejemplo con "mayor/menor igual que >= / <="

if (numero >= dato){
        cout << "El numero es 5";
    } else {
        cout << "El numero es diferente a 5"
    }