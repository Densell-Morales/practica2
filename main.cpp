#include <iostream>
#include "archivos.h"
using namespace std;

int main() {
    int opc;
    cout << endl;
    cout << "Elija una de las siguientes opciones para ejecutar" << endl
         << endl
         << "1.Calcular la suma de los elementos de un array" << endl
         << endl
         << "2. Encontrar el numero mayor en un array. " << endl
         << endl
         << "3. Inveretir el orden de un array de 8 posiciones."<< endl
         << endl
         << "4. Mostrar la suma de todos los numeros de un array de 10 posiciones."<< endl
         << endl
         << "5. Mostrar el numero de veces que aparece una fruta."<< endl
         << endl
         << "Ingrese su eleccion por favor";
    cin >> opc;
    switch (opc){
        case 1:{ caso1(); break;}
        case 2:{ caso2(); break;}
        case 3:{ caso3(); break;}
        case 4:{ caso4(); break;}
        case 5:{ caso5(); break;}
    }
    cout << "commit numero 2";

    return 0;
}
