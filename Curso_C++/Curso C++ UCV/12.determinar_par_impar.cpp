//Determinar si un numero es par o impar 

#include <iostream>
using namespace std;

int main() {

    int num1, num2;

    cout << "Por favor ingresa dos numeros: "; 
    cin >> num1 >> num2;
    
    if(num1 == 0 && num2 == 0){
        cout << "Ambos numeros son 0";
    }else if(num1 > num2){
        cout << "El numero mayor es: " << num1; 
    }else{
        cout << "El numero mayor es: " << num2;
    }

    return 0; 
}


//Determinar si un numero es positivo o negativo 

#include <iostream>
using namespace std;

int main() {

    int numero;
    
        cout << "Ingrese un numero (Puede ser positivo o negativo): "; cin >> numero;

        if (numero == 0){
           cout << "El numero ingresado es 0";
        }else if( numero > 0 ){
            cout << "El numero es positivo";
        }else{
            cout << "El numero es negativo";
        }
        

    return 0;
}
