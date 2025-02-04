//Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el caracter es una vocal minuscula o no

#include <iostream>
using namespace std;

int main(){

    char letra;

    cout << "Por favor digite una vocal"; cin >> letra;

    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
              cout << "Ingresaste una vocal minuscula";
              break;
     default:
             cout << "No es una vocal minuscula";
        break;
    }




    return 0;
}


//Escriba un programa que de entrada reciba un cracter e indique en la salida si el caracter es una vocal minuscula, mayuscula o no es una vocal 

#include <iostream>
using namespace std;

int main(){

    char letra;

    cout << "Por favor digite una vocal: "; 
    cin >> letra;

    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Ingresaste una vocal minuscula";
            break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "Ingresaste una vocal MAYUSCULA";
            break;
        default:
            cout << "No es una vocal";
            break;
    }

    return 0;
}