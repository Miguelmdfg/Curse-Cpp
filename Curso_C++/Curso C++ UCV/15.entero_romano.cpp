/*Cambiar un numero entero con el mismo valor pero en romano 

M = 1000
D = 500
C = 100
L = 50
X = 10
V = 5
I = 1
*/

#include <iostream>
using namespace std;

int main(){
    int numero, unidad, decena, centena, millar;

    cout << "Digite un numero: "; cin >> numero;
    //numero 2152 -> 2000 + 100 + 50 + 2

    unidades = numero % 10, numero /= 10; // unidades = 2, numero = 215
    decenas = numero % 10, numero /= 10; // decenas = 5, numero = 21
    centena = numero % 10, numero /= 10; // centenas = 1, numero = 2
    millar = numero % 10, numero /= 10; // millar = 2, numero =  0

    switch (millar) {
    case 1: cout << "M"; break;
    case 2: cout << "MM"; break;
    case 3: cout << "MMM"; break;
    } 

    switch (centena) {
    case 1: cout << "C"; break;
    case 2: cout << "CC"; break;
    case 3: cout << "CCC"; break;
    case 4: cout << "CD"; break;
    case 5: cout << "D"; break;
    case 6: cout << "DC"; break;
    case 7: cout << "DCC"; break;
    case 8: cout << "DCCC"; break;
    case 9: cout << "CM"; break;
    } 

    switch (decena) {
    case 1: cout << "X"; break;
    case 2: cout << "XX"; break;
    case 3: cout << "XXX"; break;
    case 4: cout << "XL"; break;
    case 5: cout << "L"; break;
    case 6: cout << "LX"; break;
    case 7: cout << "LXX"; break;
    case 8: cout << "LXXX"; break;
    case 9: cout << "XC"; break;
    } 

    switch (unidad) {
    case 1: cout << "I"; break;
    case 2: cout << "II"; break;
    case 3: cout << "III"; break;
    case 4: cout << "IV"; break;
    case 5: cout << "V"; break;
    case 6: cout << "VI"; break;
    case 7: cout << "VII"; break;
    case 8: cout << "VIII"; break;
    case 9: cout << "IX"; break;
    } 


    return 0; 
}


//Mostrar los meses del ano, pidiendole al usuario un numero entre (1-12) y mostrar el mes que corresponde

#include <iostream>
using namespace std;

int main(){
    int meses;
    cout << "Por favor ingrese en formato de numeros un mes del ano: "; cin >> meses;

    switch (meses){
    case 1:
        cout << "Mes de Enero";
        break;
    case 2:
        cout << "Mes de Febrero";
        break;
    case 3:
        cout << "Mes de Marzo";
        break;
    case 4:
        cout << "Mes de Abril";
        break;
    case 5:
        cout << "Mes de Mayo";
        break;
    case 6:
        cout << "Mes de Junio";
        break;
    case 7:
        cout << "Mes de Julio";
        break;
    case 8:
        cout << "Mes de Agosto";
        break;
    case 9:
        cout << "Mes de Septiembre";
        break;
    case 10:
        cout << "Mes de Octubre";
        break;
    case 11:
        cout << "Mes de Noviembre";
        break;
    case 12:
        cout << "Mes de Diciembre";
        break;
        
    default:
        cout << "Esto no es un mes del ano";
        break;
    }
}