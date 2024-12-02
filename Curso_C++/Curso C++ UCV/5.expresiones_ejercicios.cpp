// Escribe la siguiente expresion como expresion en c++

#include <iostream>
using namespace std;

int main(){
    float a, b, resultado = 0;

    cout << "Por favor ingrese el valor de `A`: "; 
    cin >> a;
     cout << "Por favor ingrese el valor de `B`: "; 
     cin >> b;

     resultado = (a / b) + 1;
     cout << resultado;

    return 0;

}


// Escribe la siguiente expresion matematica como expresion en c++

#include <iostream>
using namespace std;

int main(){
    float a, b, c, d, resultado = 0;

    cout << "Por favor ingrese el valor de `A`: "; 
         cin >> a;
            cout << "Por favor ingrese el valor de `B`: "; 
                cin >> b;
                    cout << "Por favor ingrese el valor de `C`: "; 
                        cin >> c;
                            cout << "Por favor ingrese el valor de `D`: "; 
                                cin >> d;


     resultado = (a + b) / (c + d);
        cout << "El resultado es: " << resultado << endl;

    return 0;

}