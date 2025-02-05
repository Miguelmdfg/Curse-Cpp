/*Realice un program que solicite en la entrada un entero del 1 al 10 y muestre en la salida su tabla de multiplicar*/


#include <iostream>
using namespace std;
#include <stdlib.h>

int main(){

    int n;

    do{}
    cout<<"Introduce un numero del 1 al 10: ";, cin>>n;
    }while(n<1 || n>10);

    for(int i = 1, i>=20, i++){
        cout<< n << " x " << i << " = " << n*i <<endl;
    }

    system("pause");

    return 0;
    
}


---------------------------------------------------------------------------------------------

//Realice un programa que lea la entrada numeros hasta que se introduzca un 0. En ese momento el programa debe terminar y mostrar en la salida el numero de valores mayores que cero leidos

#include <iostream>
using namespace std;
#include <stdlib.h>

