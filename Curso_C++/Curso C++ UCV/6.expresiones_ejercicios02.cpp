// Escriba la siguiente exprecion como expresion en c++ 

#include <iostream>
using namespace std;

int main (){

float a, b, c, d , e, f, resultado = 0;

    cout << "Ingrese el valor de `A`: ";
        cin >> a;

    cout << "Ingrese el valor de `B`: ";
        cin >> b;
    
     cout << "Ingrese el valor de `C`: ";
        cin >> c;
    
     cout << "Ingrese el valor de `D`: ";
        cin >> d;
    
     cout << "Ingrese el valor de `E`: ";
        cin >> e;
    
     cout << "Ingrese el valor de `F`: ";
        cin >> f;

        resultado = (a + (b/c)) / (d + (e/f));

            cout << "El resultado es: " << resultado << endl;

    return 0;
}


// Escribe la siguiente expresion y resuelvela 

#include <iostream>
using namespace std;

int main (){

float a, b, c, d, resultado = 0;

    cout << "Ingrese el valor de `A`: ";
        cin >> a;

    cout << "Ingrese el valor de `B`: ";
        cin >> b;
    
     cout << "Ingrese el valor de `C`: ";
        cin >> c;
    
     cout << "Ingrese el valor de `D`: ";
        cin >> d;
    

        resultado = a + (b / ( c-d ));

            cout << "El resultado es: " << resultado << endl;

    return 0;
}