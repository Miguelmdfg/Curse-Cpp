//Hace un programa que simule un cajero automatico con un saldo inicial de 1000$

#include <iostream>
using namespace std;

int main (){
    int saldoInit = 1000, opc;
    float extra, saldo = 0, retiro;

    cout << "\tBienvenido a su cajero automatico" << endl;
    cout << "1. Ingresar dinero en la cuenta" << endl;
    cout << "2. Retirar dinero en la cuenta" << endl;
    cout << "3. Salir"<< endl; 
    cout << "4. Opcion: ";
    cin >> opc;

    switch(opc){
        case 1:
            cout << "digite la cantidad de dinero a ingresar: ";
            cin >> extra;
            saldo = saldoInit + extra;
            cout << "Dinero en cuenta: " << saldo; break;

        case 2:
            cout << "digite la cantidad de dinero a retirar: ";
            cin >> retiro;
            
            if (retiro > saldoInit){
                cout << "No tiene esa cantidad de dinero";
            }else{
                saldo = saldoInit - retiro;
                cout << "Saldo en cuenta: " << saldo;            }

        case 3: 
                break;
    }


    return 0;
}