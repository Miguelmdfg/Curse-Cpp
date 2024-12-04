/*Escriba un programa que lea dos numeros y determine cual de ellos es mayor*/

#include <iostream>
using namespace std;

int main(){

    int n1,n2;

    cout << "Digite 2 numeros";
    cin >> n1 >> n2;


    if (n1 == n2){
        cout << "Ambos numeros son iguales"; 
    }else if(n1 > n2){
        cout << "El mayor es: " << n1;
    }else{
        cout << "El mayor es: " <<  n2;
    }
    return 0;
}


// Escribe un programa que lea 3 numeros y determine cual es mayor

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Leer tres números
    cout << "Introduce el primer número: ";
    cin >> num1;
    cout << "Introduce el segundo número: ";
    cin >> num2;
    cout << "Introduce el tercer número: ";
    cin >> num3;

    // Determinar el mayor número
    if (num1 >= num2 && num1 >= num3) {
        cout << "El mayor número es: " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "El mayor número es: " << num2 << endl;
    } else {
        cout << "El mayor número es: " << num3 << endl;
    }

    return 0;
}
