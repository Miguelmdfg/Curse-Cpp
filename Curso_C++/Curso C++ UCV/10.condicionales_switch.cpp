/*La sentencia switch

switch(expresion){
    case literal1:
        conjunto de intrucciones;
            break;
    case literal2:
        conjunto de instrucciones;
            break;
    case literaln:
        conjunto de instrucciones;
            break;
    default:
        conjunto de instrucciones;
            break;

}
*/

#include <iostream>
using namespace std;

int main(){

    int numero;

    cout << "Digite un numero entre 1-5";
    cin >> numero;

    switch (numero){
    case 1:
        cout << "El numero es 1";
            break;
    case 2:
        cout << "El numero es 2";
            break;
    case 3:
        cout << "El numero es 3";
            break;
    case 4:
        cout << "El numero es 4";
            break;
    case 5:
        cout << "El numero es 5";
            break;
    
    default:
        cout << "No esta en el rango de 1 - 5 ";
            break;
    }


    return 0; 
}