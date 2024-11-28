/*Realice un programa que lea de la entrada estandar los siguientes
datos de una persona

    Edad: Dato tipo entero.
    Sexo: Dato de tipo caracter.
    Altura en metros: Dato de tipo real
    
    Tras leer los datos el programa debe mostrarlos en la salida estandar*/


#include <iostream>  
using namespace std;  

int main() {  

    int edad;
    char sexo [10];  
    float altura = 0; // Cambia a double para guardar estaturas en metros con decimales  

    cout << "Ingrese su edad: ";  
    cin >> edad;  

    cout << "Ingrese su sexo: ";  
    cin >> sexo;  

    cout << "Ingrese su estatura en metros: ";  
    cin >> altura;  

    cout << "Su edad es: " << edad << endl;  
    cout << "Su sexo es: " << sexo << endl;  
    cout << "Su altura en metros es: " << altura << endl;  

    return 0;  
}

/*Ejecute el programa del ejercicio anterior con entradas erróneas y observe los resultados.
Por ejemplo, introduzca un tipo de caracter erróneo cuando se espera un dato tipo entero*/

//El programa finaliza inmediatamente .