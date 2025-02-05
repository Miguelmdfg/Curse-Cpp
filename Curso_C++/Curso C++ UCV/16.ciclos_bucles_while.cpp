/*La sentencia While       

while (expresion){
    conjunto de instrucciones;
}*/

#include <iostream>
using namespace std;

int main(){
    
    int i = 0;

    while (i <= 10){
        cout << i << endl;
        i++;
    }   

    return 0;
}

---------------------------------------------------------------------------------------------------------


#include <iostream>
using namespace std;

int main(){
    
    int i = 100;

    while (i <= 1){
        cout << i << endl;
        i--;
    }   

    return 0;
}


//Se utiliza la libreria (#include <conio.h>) para poder utilizar la funcion getch() que se encarga de detener la ejecucion del programa hasta que se presione una tecla