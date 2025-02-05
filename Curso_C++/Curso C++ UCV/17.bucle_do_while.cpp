/*La sentencia do while 

do{
    instrucciones;
    ]while(condicion);

*/

#include <iostream>
using namespace std;

int main(){

    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=10);

    return 0;

}


--------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;    

int main(){

    int i=1;
    do{
        cout<<i<<endl;
        i--;
    }while(i>=10);

    return 0;

}

//Usamos el #include <stdlib.h> para poder usar el system("pause") y que no se cierre la consola